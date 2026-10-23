#include <globaldefs.h>

#include "World/Zone3D.h"
struct Struct_0201b678 {
    int unknown_0_;
    int unknown_4_;
    Vector3fix unknown_8_;
    char unknown_14_[0x28];
    int unknown_3c_;
    char unknown_40_[0x30];
    Struct_0201b678* unknown_70_;
};
extern "C" void* func_0201e838(unsigned char*, unsigned int);
int Vector3fix_Distance(const Vector3fix*, const Vector3fix*);

// USA: func_0201b678
extern "C" ARM Struct_0201b678* func_0201b678(Zone3D* arg0, const Vector3fix* arg1) {
    Struct_0201b678* var0 = 0;
    Struct_0201b678* var1 = (Struct_0201b678*)func_0201e838((unsigned char*)&arg0->substruct_6c_, 10);
    Vector3fix var2;
    var2.x = arg1->x * 6;
    var2.y = arg1->y * 6;
    var2.z = arg1->z * 6;
    int var3 = 0x0ffff000;
    int var4 = var3;
    Struct_0201b678* var5 = 0;
    var2.x -= arg0->substruct_c_.unknown_38_;
    var2.z -= arg0->substruct_c_.unknown_3c_;
    while (var1) {
        int var6 = Vector3fix_Distance(&var1->unknown_8_, &var2);
        if (var6 < var3) {
            if (var6 <= var1->unknown_3c_) {
                var3 = var6;
                var0 = var1;
            } else if (var6 < var4) {
                var4 = var6;
                var5 = var1;
            }
        }
        var1 = var1->unknown_70_;
    }
    if (var0) return var0;
    if (!var5) var5 = 0;
    return var5;
}
