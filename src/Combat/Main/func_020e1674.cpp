#include <globaldefs.h>

void CleanInvalidateCacheRange(const void* addr, unsigned int size);
void CleanCacheRange(const void* addr, unsigned int size);
extern "C" int LoadToMainObjStandardPalette(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToSubObjStandardPalette(int arg0, int arg1, unsigned int arg2);

struct Struct_020e1674 {
    char unknown_0_[0x3e];
    unsigned char unknown_3e_;
};
struct Struct_020e1674_2 {
    char unknown_0_[4];
    struct Struct_020e1674* unknown_4_;
};

// USA: func_020e1674
extern "C" ARM void func_020e1674(struct Struct_020e1674_2* arg0, int arg1, int arg2) {
    int var0, var1;
    if (arg2 < 0 || arg2 >= 2) return;
    var1 = (int)((char*)arg0 + 0x22 + arg2 * 2);
    var0 = arg1 * 2;
    CleanInvalidateCacheRange((const void*)(var1), 2);
    var0 += 0x1c0;
    if (arg0->unknown_4_->unknown_3e_ == 0) {
        LoadToMainObjStandardPalette(var1, var0, 2);
    } else {
        LoadToSubObjStandardPalette(var1, var0, 2);
    }
    CleanCacheRange((const void*)(var1), 2);
}
