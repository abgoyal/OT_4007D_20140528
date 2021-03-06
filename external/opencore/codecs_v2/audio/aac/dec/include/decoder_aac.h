

#ifndef __DECODER_AAC_H
#define __DECODER_AAC_H

#ifndef OSCL_MEM_H_INCLUDED
#include "oscl_mem.h"
#endif

#include "oscl_base.h"
#include "pvmp4audiodecoder_api.h"

#include "e_tmp4audioobjecttype.h"
extern Int PVMP4SetAudioConfig(tPVMP4AudioDecoderExternal *pExt, void *pMem, Int upsamplingFactor, Int samp_rate, Int num_ch, tMP4AudioObjectType audioObjectType);


#define KAAC_NUM_SAMPLES_PER_FRAME      1024
#define KAAC_MAX_STREAMING_BUFFER_SIZE  (PVMP4AUDIODECODER_INBUFSIZE * 1)

#define KCAI_CODEC_NO_MEMORY -1
#define KCAI_CODEC_INIT_FAILURE -2





// CDecoder_AAC
class CDecoder_AAC
{
    public:
        OSCL_IMPORT_REF void ConstructL();
        OSCL_IMPORT_REF static CDecoder_AAC *NewL();
        OSCL_IMPORT_REF ~CDecoder_AAC();

        OSCL_IMPORT_REF int32 StartL(tPVMP4AudioDecoderExternal * pExt,
                                     uint8  num_channels,
                                     bool aAllocateInputBuffer = false,
                                     bool aAllocateOutputBuffer = false,
                                     Int  upsamplingFactor = 1,
                                     Int  samp_rate = 44100,
                                     tMP4AudioObjectType  audioObjectType = MP4AUDIO_AAC_LC
                                    );

        OSCL_IMPORT_REF int32 StartL(tPVMP4AudioDecoderExternal * pExt,
                                     uint8  num_channels,
                                     bool aAllocateInputBuffer = false,
                                     bool aAllocateOutputBuffer = false,
                                     bool aAacplusEnabler = true
                                    );
        OSCL_IMPORT_REF int32 ExecuteL(tPVMP4AudioDecoderExternal * pExt);
        OSCL_IMPORT_REF void ResetDecoderL(void);
        OSCL_IMPORT_REF void StopL(void);

        OSCL_IMPORT_REF void TerminateDecoderL();
        OSCL_IMPORT_REF int32 RetrieveDecodedStreamTypeL(tPVMP4AudioDecoderExternal * pExt);

        OSCL_IMPORT_REF void DisableSbrDecodingL(tPVMP4AudioDecoderExternal * pExt);

    private:
        // number of samples per frame per channel (decoded)
        uint32 iNumSamplesPerFrame;
        bool iFirstFrame;
        uint8 *pMem;

        bool iAllocateInputBuffer;
        bool iAllocateOutputBuffer;

        uint8* iInputBuf;
        int16* iOutputBuf;
};


#endif

