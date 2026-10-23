#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

class Struct_ov004_0216b390 {
public:
    virtual void inline_ov004_0216b390(); virtual void inline_ov004_0216b390_2(); virtual void inline_ov004_0216b390_3(); virtual void inline_ov004_0216b390_4();
    virtual void inline_ov004_0216b390_5(); virtual void inline_ov004_0216b390_6(); virtual void inline_ov004_0216b390_7();
    virtual void inline_ov004_0216b390_8(Vector3i* arg0);
    virtual Vector3i inline_ov004_0216b390_9();
};

extern "C" int func_ov004_0216af24(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" Struct_ov004_0216b390* func_ov023_021f6880(void* arg0, int arg1);

// USA: func_ov004_0216b390
extern "C" ARM void func_ov004_0216b390(void* arg0, int arg1, int arg2) {
    Vector3i var0;
    Vector3i var1;

    int var2 = func_ov004_0216af24(arg0, (short)arg1);
    Struct_ov004_0216b390* var3 = func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (!var3) return;

    const Vector3i& var4 = var3->inline_ov004_0216b390_9();
    var0 = var4;
    var0.x = var0.x + ((var2 + 0xa) << 12);

    Struct_ov004_0216b390* var5 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0xc);
    if (!var5) return;

    const Vector3i& var6 = var5->inline_ov004_0216b390_9();
    var1 = var6;
    var1.x = var0.x;

    if (arg2 == 0) var1.y = 0x24000;
    else if (arg2 == 1) var1.y = 0x34000;
    else if (arg2 == 2) var1.y = 0x42000;
    else if (arg2 == 3) var1.y = 0x1b000;

    var5->inline_ov004_0216b390_8(&var1);
    *((unsigned char*)var5 + 0x3a) = 0;
}
