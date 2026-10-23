#include <globaldefs.h>
#include <NitroSDK/Matrix.h>

class Struct_ov004_0215e574 {
public:
    virtual void inline_ov004_0215e574(); virtual void inline_ov004_0215e574_2(); virtual void inline_ov004_0215e574_3(); virtual void inline_ov004_0215e574_4();
    virtual void inline_ov004_0215e574_5(); virtual void inline_ov004_0215e574_6(); virtual void inline_ov004_0215e574_7();
    virtual void inline_ov004_0215e574_8(const Vector3i& arg0);
    virtual Vector3i inline_ov004_0215e574_9();
};

extern "C" int func_ov004_0215e4e8(void* arg0, int arg1);
extern "C" Struct_ov004_0215e574* func_ov004_0215e47c(void* arg0, int arg1);

// USA: func_ov004_0215e574
extern "C" ARM void func_ov004_0215e574(void* arg0, int arg1, int arg2, int arg3) {
    int var0 = func_ov004_0215e4e8(arg0, (short)arg1);
    Struct_ov004_0215e574* var1 = func_ov004_0215e47c(arg0, arg1);
    if (!var1) return;
    Vector3i var2;
    const Vector3i& var3 = var1->inline_ov004_0215e574_9();
    var2 = var3;
    var2.x = (arg3 + ((arg2 - var0) >> 1)) << 12;
    var1->inline_ov004_0215e574_8(var2);
}
