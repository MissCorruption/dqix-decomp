#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_ov001_0215ab20(int);
extern "C" int fix32_Atan2(int arg0, int arg1);
int fix32ReduceAngle0To2Pi(int angle);
int fix32abs(int x);

struct Struct_ov001_0215a480 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
};
extern "C" void func_ov001_0215a480(void* arg0, struct Struct_ov001_0215a480 arg1, unsigned int arg2, unsigned int arg3);

// USA: func_ov001_0215c5fc
extern "C" ARM int func_ov001_0215c5fc(void* arg0, int arg1) {
    int var0 = func_ov017_021d60f4(arg0);
    void* var1 = func_ov001_0215ab20(var0);
    if (var1 == NULL) return 0;
    int var2 = func_ov017_021d60f4((char*)arg0 + 0x8);
    void* var3 = func_ov001_0215ab20(var2);
    if (var3 == NULL) return 0;

    int var4 = *(int*)((char*)var3 + 0x74) - *(int*)((char*)var1 + 0x74);
    int var5 = *(int*)((char*)var3 + 0x7c) - *(int*)((char*)var1 + 0x7c);
    struct Struct_ov001_0215a480 var6;
    memcpy(&var6, (char*)var1 + 0x80, sizeof(var6));
    var6.unknown_4_ = fix32ReduceAngle0To2Pi(fix32_Atan2(var4, var5));

    unsigned int var7 = func_ov017_021d60f4((char*)arg0 + 0x10);
    unsigned int var8;
    if (arg1 >= 4) {
        var8 = func_ov017_021d60f4((char*)arg0 + 0x18);
    } else {
        short var9 = (short)(*(int*)((char*)var1 + 0x84)) - (short)var6.unknown_4_;
        if (fix32abs(var9) > 0x3244) {
            var8 = (var9 < 0) ? 1 : 0;
        } else {
            if (var9 < 0) {
                var8 = 0;
            } else {
                var8 = 1;
            }
        }
    }

    func_ov001_0215a480(var1, var6, var7, var8);
    return 1;
}
