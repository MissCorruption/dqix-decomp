#include <globaldefs.h>

struct Struct_0209afd4_5 { unsigned short unknown_0_; char unknown_2_[0x4a]; };

struct Struct_ov017_021b8a34_2 { unsigned int unknown_0_0_ : 12; unsigned int unknown_1_4_ : 20; };
struct Struct_ov017_021b8a34 { unsigned short unknown_0_0_ : 8; unsigned short unknown_1_0_ : 8; };

int GetBTRandom(void);
extern "C" Struct_0209afd4_5* func_0209b9e4(Struct_0209afd4_5* arg0, int arg1);
extern "C" int func_02032370(int arg0);

// USA: func_ov017_021b8a34
extern "C" ARM int func_ov017_021b8a34(Struct_0209afd4_5* arg0, int arg1, int arg2) {
    GetBTRandom();
    Struct_0209afd4_5* var0 = func_0209b9e4(arg0, arg1);
    if (var0 != NULL) {
        int var1;
        for (var1 = 0; var1 < *(unsigned char*)((char*)var0 + 2); var1++) {
            struct Struct_ov017_021b8a34_2* var2 = (struct Struct_ov017_021b8a34_2*)((char*)var0 + (var1 << 3) + 4);
            if (arg2 == (int)var2->unknown_0_0_) {
                struct Struct_ov017_021b8a34* var3 = (struct Struct_ov017_021b8a34*)((char*)var0 + 8 + (var1 << 3));
                int var4 = func_02032370(0x64);
                if (var4 < var3->unknown_1_0_) {
                    return var3->unknown_0_0_;
                }
                break;
            }
        }
    }
    return -1;
}
