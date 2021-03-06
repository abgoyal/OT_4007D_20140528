

#ifndef _APPLYPATCH_H
#define _APPLYPATCH_H

#include <sys/stat.h>
#include "mincrypt/sha.h"
#include "edify/expr.h"

typedef struct _Patch {
  uint8_t sha1[SHA_DIGEST_SIZE];
  const char* patch_filename;
} Patch;

typedef struct _FileContents {
  uint8_t sha1[SHA_DIGEST_SIZE];
  unsigned char* data;
  ssize_t size;
  struct stat st;
} FileContents;

// When there isn't enough room on the target filesystem to hold the
// patched version of the file, we copy the original here and delete
// it to free up space.  If the expected source file doesn't exist, or
// is corrupted, we look to see if this file contains the bits we want
// and use it as the source instead.
#define CACHE_TEMP_SOURCE "/cache/saved.file"

typedef ssize_t (*SinkFn)(unsigned char*, ssize_t, void*);

// applypatch.c
int ShowLicenses();
size_t FreeSpaceForFile(const char* filename);
int CacheSizeCheck(size_t bytes);
int ParseSha1(const char* str, uint8_t* digest);

int applypatch(const char* source_filename,
               const char* target_filename,
               const char* target_sha1_str,
               size_t target_size,
               int num_patches,
               char** const patch_sha1_str,
               Value** patch_data);
int applypatch_check(const char* filename,
                     int num_patches,
                     char** const patch_sha1_str);

// Read a file into memory; store it and its associated metadata in
// *file.  Return 0 on success.
int LoadFileContents(const char* filename, FileContents* file);
void FreeFileContents(FileContents* file);

// bsdiff.c
void ShowBSDiffLicense();
int ApplyBSDiffPatch(const unsigned char* old_data, ssize_t old_size,
                     const Value* patch, ssize_t patch_offset,
                     SinkFn sink, void* token, SHA_CTX* ctx);
int ApplyBSDiffPatchMem(const unsigned char* old_data, ssize_t old_size,
                        const Value* patch, ssize_t patch_offset,
                        unsigned char** new_data, ssize_t* new_size);

// imgpatch.c
int ApplyImagePatch(const unsigned char* old_data, ssize_t old_size,
                    const Value* patch,
                    SinkFn sink, void* token, SHA_CTX* ctx);

// freecache.c
int MakeFreeSpaceOnCache(size_t bytes_needed);

#endif
