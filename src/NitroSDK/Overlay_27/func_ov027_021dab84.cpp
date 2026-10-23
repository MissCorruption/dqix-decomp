#include <globaldefs.h>
#include "NitroSDK/Filesystem/NitroVM.h"

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

extern "C" void func_020ca390(int val, void* dst, unsigned int size);
extern "C" void func_020ca458(unsigned int value, void* dest, int count);
extern "C" int func_020ca3b8(int src, int dst, int size);
extern "C" CBool func_ov027_021dac74(const char* arg0, void* arg1, int arg2);
extern "C" int func_ov027_021dad84(unsigned short* arg0);

struct Struct_ov027_021dab84 {
    unsigned char unknown_0_[4];
    unsigned short* unknown_4_;
    void* unknown_8_;
    const char* unknown_c_;
    const char* unknown_10_;
    unsigned int unknown_14_;
    unsigned char unknown_18_;
};

// USA: func_ov027_021dab84
extern "C" ARM void func_ov027_021dab84(void* arg0, Struct_ov027_021dab84* arg1, int arg2) {
    func_020ca390(0, arg0, 0x4c0);
    *((unsigned char*)arg0 + 0x4b2) = 0;

    unsigned int var0 = func_ov027_021dac74(arg1->unknown_c_, arg0, 1) == 0;
    unsigned int var1 = func_ov027_021dac74(arg1->unknown_10_, arg0, 0) == 0;
    if (var0 | var1) {
        *((unsigned char*)arg0 + 0x4b2) = 1;
        func_020ca458(0, arg0, 0x220);
    }

    *(unsigned int*)((char*)arg0 + 0x4b8) = arg1->unknown_14_;
    if (arg2 != 0) {
        func_020ca3b8(arg2, (int)((char*)arg0 + 0x220), 0x16);
    }

    *((unsigned char*)arg0 + 0x236) = arg1->unknown_18_;

    int var2 = func_ov027_021dad84(arg1->unknown_4_);
    unsigned short var3 = (unsigned short)(var2 * 2);
    func_020ca3b8((int)arg1->unknown_4_, (int)((char*)arg0 + 0x238), var3);

    func_020ca3b8((int)arg1->unknown_8_, (int)((char*)arg0 + 0x298), 0xc0);

    *((unsigned char*)arg0 + 0x358) = 1;
    *(unsigned short*)((char*)arg0 + 0x300 + 0x5a) = 1;
    *(unsigned short*)((char*)arg0 + 0x400 + 0xb0) = 1;
}
