#include <globaldefs.h>

union Struct_020117f0_2 { int unknown_0_; float unknown1_0_; };
struct Struct_ov001_02163ef4 { int unknown_0_; Struct_020117f0_2 unknown_4_; };

extern "C" int func_ov017_021d60f4(Struct_ov001_02163ef4* arg0);
extern "C" float func_ov017_021d6110(Struct_ov001_02163ef4* arg0);
extern "C" void* func_02012fe4(void);
struct Struct_02019508;
struct Struct_02019508_3;
extern "C" ARM struct Struct_02019508* func_02019508(struct Struct_02019508_3* arg0, int arg1, int arg2);

// USA: func_ov001_02163ef4
extern "C" ARM int func_ov001_02163ef4(Struct_ov001_02163ef4* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    int var1 = func_ov017_021d60f4((Struct_ov001_02163ef4*)((char*)arg0 + 0x8));
    void* var2 = func_02012fe4();
    if (!var2) {
        return 0;
    }
    struct Struct_02019508* var3 = func_02019508((struct Struct_02019508_3*)var2, var0, var1);
    if (!var3) {
        return 0;
    }
    float var4 = func_ov017_021d6110((Struct_ov001_02163ef4*)((char*)arg0 + 0x10));
    *(short*)((char*)var3 + 0x6) = (short)(4096.0f * var4);
    return 1;
}
