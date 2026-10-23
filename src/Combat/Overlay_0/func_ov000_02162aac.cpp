#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x7e4
#define REGION_OFFSET_1 0x218
#define REGION_OFFSET_2 0x31c
#define REGION_OFFSET_3 0x3400
#else
#define REGION_OFFSET_0 0x5f4
#define REGION_OFFSET_1 0x29c
#define REGION_OFFSET_2 0x760
#define REGION_OFFSET_3 0x3000
#endif

struct Struct_ov000_02162aac {
    signed char unknown_0_;
    signed char unknown_1_;
    char unknown_2_;
    unsigned char unknown_3_;
    signed char unknown_4_;
    char unknown_5_;
    short unknown_6_;
    unsigned short unknown_8_;
};

extern "C" int func_ov000_021761ec(char* arg0, int arg1);
extern "C" void func_ov000_02174428(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);

// USA: func_ov000_02162aac
extern "C" ARM void func_ov000_02162aac(void* arg0, int arg1, struct Struct_ov000_02162aac* arg2) {
    int var0 = *(int*)((char*)arg0 + 0x5000 + REGION_OFFSET_0);
    if (!(var0 & 0x10000)) {
        return;
    }
    if (var0 & 0x800000) {
        return;
    }
    void* var1 = *(void**)((char*)arg0 + REGION_OFFSET_1);
    int var2 = *(int*)((char*)var1 + 0x8000 + 0xe20);
    if (var2 == 0) {
        if (*(unsigned char*)((char*)var1 + 0x8000 + 0xe49) == 2) {
            return;
        }
    }
    int var3 = -1;
    int var4 = 0;
    while (var4 < 12) {
        int var5 = func_ov000_021761ec((char*)arg0 + REGION_OFFSET_2 + REGION_OFFSET_3, var4);
        if (arg2->unknown_3_ == var5) {
            var3 = var4;
            break;
        }
        var4++;
    }
    func_ov000_02174428((char*)arg0 + REGION_OFFSET_2 + REGION_OFFSET_3, arg1, arg2->unknown_0_, arg2->unknown_1_, (signed char)var3, arg2->unknown_6_, arg2->unknown_4_, arg2->unknown_8_);
}
