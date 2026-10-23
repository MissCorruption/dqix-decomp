#include <globaldefs.h>
#include <NitroSDK/Matrix.h>

struct Struct_ov023_021fa03c;
struct Struct_ov023_021fa03c_2;
extern "C" Struct_ov023_021fa03c_2* func_ov023_021fa03c(Struct_ov023_021fa03c*);
struct Struct_ov023_021f9eb4;
extern "C" void func_ov023_021f9eb4(Struct_ov023_021f9eb4*);
extern "C" void* func_ov011_021849c8(void*);

class Struct_ov023_021fa078 {
public:
    virtual void inline_ov023_021fa078(); virtual void inline_ov023_021fa078_2(); virtual void inline_ov023_021fa078_3(); virtual void inline_ov023_021fa078_4();
    virtual void inline_ov023_021fa078_5(); virtual void inline_ov023_021fa078_6(); virtual void inline_ov023_021fa078_7(); virtual void inline_ov023_021fa078_8();
    virtual Vector3i inline_ov023_021fa078_9();
};

extern "C" Struct_ov023_021fa078* func_ov023_021f6880(void*, int);

struct Struct_ov023_021fa078_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    Vector3i unknown_10_;
    Vector3i unknown_1c_;
};

// USA: func_ov023_021fa078
extern "C" ARM void func_ov023_021fa078(Struct_ov023_021fa03c* arg0, void* arg1, unsigned short arg2, Vector3i* arg3, int arg4, int arg5) {
    Struct_ov023_021fa078_2* var0 = (Struct_ov023_021fa078_2*)func_ov023_021fa03c(arg0);
    if (var0 == NULL) return;
    func_ov023_021f9eb4((Struct_ov023_021f9eb4*)var0);
    var0->unknown_2_ = 1;
    var0->unknown_0_ = arg2;
    void* var1 = func_ov011_021849c8(arg1);
    Struct_ov023_021fa078* var2 = func_ov023_021f6880(var1, var0->unknown_0_);
    if (var2 == NULL) return;
    var0->unknown_4_ = 0;
    var0->unknown_8_ = arg5;
    var0->unknown_c_ = arg4;
    var0->unknown_10_ = var2->inline_ov023_021fa078_9();
    var0->unknown_1c_ = *arg3;
}
