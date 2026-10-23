#include <globaldefs.h>
#include "Combat/SearchEntry.h"
#include "Graphics/Vector.h"
#include "World/Object3D.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_0202c508(void* arg0);
struct Struct_0202b2f0;
struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
struct Struct_02034104 {
    unsigned char unknown_0_0_ : 2;
};

// USA: func_02034104
extern "C" ARM Vector3fix func_02034104(void* arg0) {
    Object3D* var0 = (Object3D*)arg0;
    void* var1 = func_0202ae18();
    GetGameResources();
    if (func_0202b7d8((int*)var1)) {
        if (func_0202c508(var1)) {
            short var2 = var0->unknown_4_;
            if (func_0202c178((struct Struct_0202b2f0*)var1, var2)) {
                var2 = var0->unknown_4_;
                signed char var3 = func_0202c1a4((struct Struct_0202c1a4*)var1);
                if (var3 != var2) {
                    Struct_02034104* var4 = (Struct_02034104*)((char*)arg0 + 0xc1);
                    if (var4->unknown_0_0_ & 1) {
                        var2 = var0->unknown_4_;
                        Struct_0202b2f0_2* var5 = func_0202c178((struct Struct_0202b2f0*)var1, var2);
                        Vector3fix16 var6;
#if defined(jpn)
                        var6.x = var5->unknown_8_;
                        var6.y = var5->unknown_a_;
                        var6.z = var5->unknown_c_;
#else
                        Vector3fix16Copy(&var6, (const Vector3fix16*)&var5->unknown_8_);
#endif
                        Vector3fix var7;
                        var7.x = var6.x << 7;
                        var7.y = var6.y << 7;
                        var7.z = var6.z << 7;
                        return var7;
                    }
                }
            }
        }
    }
    return var0->position_;
}
