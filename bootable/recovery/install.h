

#ifndef RECOVERY_INSTALL_H_
#define RECOVERY_INSTALL_H_

#include "common.h"

enum
{
    INSTALL_SUCCESS,
    INSTALL_ERROR,
    INSTALL_CORRUPT,
    INSTALL_NO_SDCARD,
    INSTALL_NO_KEY,
    INSTALL_NO_UPDATE_PACKAGE,
    INSTALL_SIGNATURE_ERROR,
    INSTALL_FILE_SYSTEM_ERROR,
    INSTALL_SECURE_CHECK_FAIL,
};

int install_package(const char *root_path);

#endif  // RECOVERY_INSTALL_H_
