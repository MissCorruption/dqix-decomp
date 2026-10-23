#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_0201099c_10;
struct Struct_ov023_021e0414 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
};
extern "C" Struct_ov023_021e0414* func_020dedd0(struct Struct_0201099c_10*, int);

extern "C" void func_ov023_021e20c0(void*);


extern int data_ov023_021fdc4c;
extern int data_ov023_021fdc61;

struct Struct_ov023_021e0414_2 {
    char unknown_0_[0x48];
    Struct_0201099c_10* unknown_48_;
    Struct_ov023_021e0414* unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x6b8 - 0x50];
#else
    char unknown1_50_[0x73c - 0x50];
#endif

    int unknown_73c_;
    char unknown_740_[0x770 - 0x740];
    short unknown_770_;
    char unknown_772_[0x79a - 0x772];
    signed char unknown_79a_;
};

// USA: func_ov023_021e0414
extern "C" ARM int func_ov023_021e0414(struct Struct_ov023_021e0414_2* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    if (arg0->unknown_48_ != NULL) {
        arg0->unknown_4c_ = func_020dedd0(arg0->unknown_48_, arg0->unknown_770_);
    }
    Struct_ov023_021e0414* var1 = arg0->unknown_4c_;
    if (var1 != NULL) {
        unsigned int var2 = var1->unknown_8_0_;
        int var3 = (var2 <= 7);
        signed char var4 = (var3 != 0);
        signed char var5 = arg0->unknown_79a_;
        if (var5 != var4) {
            func_ov023_021e20c0((char*)arg0 + 0xcc);
            var1 = arg0->unknown_4c_;
            unsigned int var6 = var1->unknown_8_0_;
            int var7 = (var6 <= 7);
            if (var7) {
                arg0->unknown_73c_ = ((BackgroundLoader*)(var0))->QueueLoadFile((const char*)((int)&data_ov023_021fdc4c), (SafeAllocator*)(0));
            } else {
                arg0->unknown_73c_ = ((BackgroundLoader*)(var0))->QueueLoadFile((const char*)((int)&data_ov023_021fdc61), (SafeAllocator*)(0));
            }
        }
    }
    return 6;
}
