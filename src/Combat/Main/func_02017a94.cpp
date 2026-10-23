#include <globaldefs.h>

#include <World/Zone3D.h>
#include <GameState/GameState.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" void* func_0200fd0c(GameState* arg0);
extern "C" int func_0206eaec(unsigned char* arg0, int arg1, int arg2);
extern "C" void* func_0201e838(unsigned char* arg0, unsigned int arg1);
extern "C" int func_02064b24(void* arg0, int arg1, unsigned short arg2, void* arg3);

struct Struct_02017a94;
struct Struct_0201b600;
struct Struct_02017a94_2;
extern "C" struct Struct_02017a94_2* func_0201b600(Struct_02017a94*, int, unsigned short);

struct Struct_02017a94_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[0x2b];
};

struct Struct_02017a94_3 {
    unsigned char unknown_0_[0x2d];
    unsigned char unknown_2d_;
    unsigned short unknown_2e_;
    unsigned char unknown_30_[0x70 - 0x30];
    struct Struct_02017a94_3* unknown_70_;
};

struct Struct_02017a94_4 {
    unsigned char unknown_0_[0x0c];
    unsigned int unknown_c_;
    unsigned char unknown_10_[0x30 - 0x10];
    unsigned int unknown_30_;
};

// USA: func_02017a94
extern "C" ARM void func_02017a94(Zone3D* arg0) {
    GameState* var0 = GameState::GetInstance();
    if (var0 == NULL) {
        return;
    }
    if (func_0200fd0c(var0) == NULL) {
        return;
    }
#if defined(jpn)
    enum { Enum_02017a94_10269 = 0x285d };
#else
    enum { Enum_02017a94_10269 = 0x281d };
#endif
    unsigned char* var1 = (unsigned char*)func_0205ec34();
    int var2;
    int var3;
    int var4;
    if (var1 != NULL && *(unsigned char*)((char*)arg0 + Enum_02017a94_10269) != 0) {
        for (var2 = 0; var2 < 2; var2++) {
            for (var3 = 0; var3 < 0x7f; var3++) {
                if (func_0206eaec(var1, (unsigned char)var2, (short)var3)) {
                    struct Struct_02017a94_2* var5 =
                        func_0201b600((struct Struct_02017a94*)arg0, var2, var3);
                    if (var5 != NULL) {
                        var5->unknown_2_ &= ~4;
                    }
                }
            }
            for (var4 = 0x80; var4 < 0xff; var4++) {
                if (func_0206eaec(var1, (unsigned char)var2, (short)var4)) {
                    struct Struct_02017a94_2* var6 =
                        func_0201b600((struct Struct_02017a94*)arg0, var2, var4 - 0x80);
                    struct Struct_02017a94_3* var7;
                    if (var6 != NULL) {
                        var6->unknown_2_ |= 4;
                        if ((var6->unknown_2_ & 8) != 0) {
                            unsigned int var8;
                            unsigned short var9;
                            var6->unknown_2_ |= 1;
                            var7 = (struct Struct_02017a94_3*)
                                func_0201e838((unsigned char*)&arg0->substruct_6c_, 2);
                            while (var7 != NULL) {
                                if (var7->unknown_2d_ == var6->unknown_0_) {
                                    var8 = var7->unknown_2e_;
                                    var9 = (unsigned short)(((var8 << 16) >> 20) | 1);
                                    var7->unknown_2e_ = (var8 & 0xffff000f) | ((unsigned int)(var9 << 20) >> 16);
                                    break;
                                }
                                var7 = var7->unknown_70_;
                            }
                        }
                    }
                }
            }
        }
        struct Struct_02017a94_4 var10;
        var10.unknown_c_ = arg0->currentZoneID_;
        func_02064b24(var1, 3, 0x6c, &var10);
        func_02064b24(var1, 0x14, 0x6c, &var10);
        arg0->unk_276c[0x281d - 0x276c] = 0;
    }
}
