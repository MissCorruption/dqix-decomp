#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov015_02190d7c { char unknown_0_[0x1a8]; int unknown_1a8_[32]; int unknown_228_; };
extern "C" ARM void func_ov015_021931b4(struct Struct_ov015_02190d7c* arg0, int arg1);

struct Struct_ov015_021900dc {
    void* unknown_0_;
    char unknown_4_[0x38 - 0x4];
    short unknown_38_;
    char unknown_3a_[0x4c - 0x3a];
    int unknown_4c_;
};
extern "C" ARM void func_ov015_021900dc(struct Struct_ov015_021900dc* arg0);

extern "C" void func_ov015_02192700(void* arg0, int arg1);

// USA: func_ov015_02191ba0
extern "C" ARM void func_ov015_02191ba0(void* arg0, int arg1) {
    void* var0 = *(void**)((char*)arg0 + 0x2c);
    if (var0 == 0) {
        return;
    }
    int var1;
    for (var1 = 0; var1 < arg1; var1++) {
        var0 = *(void**)((char*)var0 + 4);
    }
    if (var0 == 0) {
        return;
    }
    *(void**)((char*)arg0 + 0x30) = *(void**)var0;
    unsigned char var2 = *(unsigned char*)((char*)*(void**)var0 + 0x1c);
    switch (var2) {
    case 0:
    case 1:
        func_ov015_021931b4((struct Struct_ov015_02190d7c*)arg0, *(int*)((char*)arg0 + 0x1a4));
        *(int*)((char*)arg0 + 0x1a4) = 0x22;
        func_ov015_02192700(arg0, 0);
        return;
    case 2:
        func_ov015_021931b4((struct Struct_ov015_02190d7c*)arg0, *(int*)((char*)arg0 + 0x1a4));
        *(int*)((char*)arg0 + 0x1a4) = 0x21;
        func_ov015_02192700(arg0, 0);
        return;
    default:
        *(int*)((char*)arg0 + 0x194) = 1;
        func_ov015_02192700(arg0, 0);
        *(unsigned short*)((char*)*(void**)((char*)arg0 + 0x30) + 0x38) = 0;
        func_ov015_021900dc((struct Struct_ov015_021900dc*)*(void**)((char*)arg0 + 0x30));
        return;
    }
}
