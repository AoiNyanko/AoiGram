#include <stdbool.h>

#ifdef NDEBUG
#define LOG_DISABLED
#endif
#ifdef __has_include
#if __has_include("colorado_package_name.h")
#include "colorado_package_name.h"
#endif
#endif
#ifndef COLORADO_PACKAGE_NAME_OBFS
#define COLORADO_PACKAGE_NAME_OBFS "tw.nekomimi.nekogram"_iobfs.c_str()
#endif
#define PACKAGE_NAME COLORADO_PACKAGE_NAME_OBFS
#define CERT_HASH 0x693cc8c5
#define CERT_SIZE 0x2d7

// Sub certificate for custom signing
#define SUB_CERT_HASH 0xd296cea0
#define SUB_CERT_SIZE 0x376

#ifdef __cplusplus
extern "C" {
#endif

bool check_signature();

#ifdef __cplusplus
}
#endif
