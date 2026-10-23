#include <globaldefs.h>
#include "Combat/SearchEntry.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
struct Struct_0202b2f0;
struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
struct Struct_020341e0 {
    signed short unknown_0_;
    signed short unknown_2_;
    signed short unknown_4_;
};
struct Vector3s;
void Vector3fix16Copy(Vector3s*, Vector3s const*);

struct Struct_020341e0_2 {
    int unknown_0_[3];
};

struct Struct_020341e0_3 {
    unsigned char unknown_0_0_ : 2;
};

// USA: func_020341e0
extern "C" ARM void func_020341e0(Struct_020341e0_2* arg0, void* arg1) {
    void* var0 = func_0202ae18();
    (int)GetGameResources();
    if (func_0202b7d8((int*)var0)) {
        short var1 = *(short*)((char*)arg1 + 4);
        if (func_0202c178((struct Struct_0202b2f0*)var0, var1)) {
            var1 = *(short*)((char*)arg1 + 4);
            signed char var2 = func_0202c1a4((struct Struct_0202c1a4*)var0);
            if (var2 != var1) {
                Struct_020341e0_3* var3 = (Struct_020341e0_3*)((char*)arg1 + 0xc1);
                if (var3->unknown_0_0_ & 1) {
                    var1 = *(short*)((char*)arg1 + 4);
                    void* var4 = func_0202c178((struct Struct_0202b2f0*)var0, var1);
                    Struct_020341e0 var5;
                    Vector3fix16Copy((Vector3s*)&var5, (Vector3s const*)((char*)var4 + 8));
                    Struct_020341e0_2 var6;
                    var6.unknown_0_[0] = var5.unknown_0_ << 7;
                    var6.unknown_0_[1] = var5.unknown_2_ << 7;
                    var6.unknown_0_[2] = var5.unknown_4_ << 7;
                    *arg0 = var6;
                    return;
                }
            }
        }
    }
    *arg0 = *(Struct_020341e0_2*)((char*)arg1 + 0x44);
}
