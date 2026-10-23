#if defined(jpn)
enum { Enum_ov025_021dc220_3704 = 0xdf4 };
#else
enum { Enum_ov025_021dc220_3704 = 0xe78 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov000_02160f20(void* arg0);
extern "C" int func_ov000_021627fc(void* arg0);
struct Struct_ov000_0215440c;
extern "C" void* func_ov000_021600f8(struct Struct_ov000_0215440c* arg0, int arg1);
extern "C" void func_02049ae4(unsigned char* arg0);
extern "C" int func_02048c10(unsigned char* arg0);
extern "C" void func_0204a030(unsigned char*, int);
extern "C" void func_02033920(void* arg0, int arg1, int arg2);

extern char data_ov025_021ef404[];
extern "C" unsigned char _ZZ21inline_ov025_021dcf14vE1s;

struct Struct_ov025_021dc220 {
    char unknown_0_[Enum_ov025_021dc220_3704];
    unsigned char unknown_e78_;
    char unknown_e79_[0x33];
    int unknown_eac_;
};

struct Struct_ov025_021dc220_2 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
    char unknown_22_[0xc];
    struct Struct_ov025_021dc220_2* unknown_30_;
};

struct Struct_ov025_021dc220_3 {
    char unknown_0_[0x10];
    struct Struct_ov025_021dc220_2* unknown_10_;
};

// USA: func_ov025_021dc220
extern "C" ARM void func_ov025_021dc220(void* arg0) {
    struct Struct_ov025_021dc220* var0 = (struct Struct_ov025_021dc220*)arg0;
    GameState* var1 = GameState::GetInstance();
    void* var2 = func_ov000_02160f20(arg0);
    short var3 = -1;

    if (func_ov000_021627fc(arg0)) {
        *(int*)(data_ov025_021ef404 + 4) = 1;
        var0->unknown_eac_ = 6;
        {
            void* var4 = func_ov000_021600f8((struct Struct_ov000_0215440c*)var2, 0);
            if (var4 != NULL) {
                var3 = *(short*)((char*)var4 + 0xe);
            }
        }
    } else {
        var0->unknown_eac_ = 3;
    }

    if (var2 != NULL) {
        struct Struct_ov025_021dc220_3* var5 = (struct Struct_ov025_021dc220_3*)var2;
        struct Struct_ov025_021dc220_2* var6 = var5->unknown_10_;
        int var7 = 1;
        while (var6 != NULL) {
            GameObject* var8 = var1->GetCombatantByIndex(var6->unknown_20_);
            if (var8 != NULL) {
                func_02049ae4((unsigned char*)var8);
                if (var3 >= 0) {
                    int var9 = var7;
                    if (func_02048c10((unsigned char*)var8) || var0->unknown_e78_ == 0) {
                        var9 = 0;
                    }
                    if (var9) {
                        if (_ZZ21inline_ov025_021dcf14vE1s != 0) {
                            func_0204a030((unsigned char*)var8, var3);
                        } else {
                            func_02033920(var8, var3, 1);
                        }
                    }
                }
            }
            var6 = var6->unknown_30_;
        }
    }
}
