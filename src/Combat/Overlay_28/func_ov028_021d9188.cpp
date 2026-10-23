#include <globaldefs.h>

void CleanInvalidateCacheRange(const void* addr, unsigned int size);
void CleanCacheRange(const void* addr, unsigned int size);
extern "C" int LoadToSubBG1CharacterData(int arg0, int arg1, unsigned int arg2);

struct Struct_ov028_021d9188 {
    char unknown_0_[0x40];
    void* unknown_40_;
    char unknown_44_[0x60 - 0x44];
    int unknown_60_;
    char unknown_64_[0x6e - 0x64];
    unsigned char unknown_6e_;
    char unknown_6f_[0x80 - 0x6f];
    unsigned char unknown_80_;
};

// USA: func_ov028_021d9188
extern "C" ARM void func_ov028_021d9188(Struct_ov028_021d9188* arg0) {
    if (arg0->unknown_80_ == 0 || arg0->unknown_40_ == 0) return;
    *(volatile unsigned int*)0x4001014 = (((arg0->unknown_60_ >> 12) & 0xff) << 16) & 0x1ff0000;
    if (arg0->unknown_6e_ != 0) {
        CleanInvalidateCacheRange(arg0->unknown_40_, 0x8000);
        LoadToSubBG1CharacterData((int)arg0->unknown_40_, 0, 0x8000);
        CleanCacheRange(arg0->unknown_40_, 0x8000);
    }
    arg0->unknown_6e_ = 0;
}
