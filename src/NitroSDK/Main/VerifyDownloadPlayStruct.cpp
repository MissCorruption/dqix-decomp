#include "Filesystem/OverlayFSManagement.h"
#include "Filesystem/FSInnerDefs.h"
#include "System/Memory.h"
#include <globaldefs.h>

#if defined(jpn)
#define data_020f2290 data_020f23fc
#define func_020c0c3c func_020c2708
#endif

// might be some kind of overlay-like thing for download play
struct UnknownDownloadPlayStruct
{
    unsigned int unknown[5];
};

extern struct {
    const void* pointer;
    unsigned int length;
} data_020f2290;

extern "C"
{
    void func_020c0c3c(UnknownDownloadPlayStruct*, unsigned, unsigned, unsigned char*, unsigned);
}

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020cd30c
ARM bool VerifyDownloadPlayStruct(const UnknownDownloadPlayStruct& data,
    unsigned int loadAddress, unsigned int size)
{
    int i;
    UnknownDownloadPlayStruct clone;
    unsigned char buffer[64];

    VectorizedMemset(&clone, 0, sizeof(UnknownDownloadPlayStruct));
    VectorizedInvertedMemcpy(data_020f2290.pointer, buffer, data_020f2290.length);
    func_020c0c3c(&clone, loadAddress, size, buffer, data_020f2290.length);

    const unsigned char* spec = (const unsigned char*)&data;
    for (i = 0; i < sizeof(UnknownDownloadPlayStruct); i += 4) {
        if (*(unsigned int*)((unsigned char*)&clone + i) != *(const unsigned int*)(spec + i))
            break;
    }
    return i == sizeof(UnknownDownloadPlayStruct);
}
