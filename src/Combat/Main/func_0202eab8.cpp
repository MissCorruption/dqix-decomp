#include <globaldefs.h>

struct Struct_ov009_0218aa28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_0202eab8_2 {
    char unknown_0_[4];
    struct Struct_ov009_0218aa28 unknown_4_;
    struct Struct_ov009_0218aa28 unknown_10_;
    char unknown_1c_[0x70 - 0x1c];
    int unknown_70_;
    int unknown_74_;
    int unknown_78_;
};

struct Struct_0202eab8 {
    float unknown_0_;
    float unknown_4_;
    float unknown_8_;
};

extern "C" float _fflt(int fix32);
extern "C" float _fdiv(float arg0, float arg1);
extern "C" float _fsub(float arg0, float arg1);
extern "C" float _fadd(float arg0, float arg1);
extern "C" float _fmul(float a, float b);
extern "C" int _ffix(float value);
extern "C" float _d2f(double value);
extern "C" double func_02009598(double arg0, double arg1);
extern "C" float func_0200c9b4(float value);
extern "C" void func_0202e5d8(struct Struct_0202eab8_2* arg0, int arg1, int arg2, int arg3);

// USA: func_0202eab8
extern "C" ARM void func_0202eab8(struct Struct_0202eab8_2* arg0) {
    struct Struct_0202eab8 var0;
    var0.unknown_0_ = _fsub(_fdiv(_fflt(arg0->unknown_4_.unknown_0_), 4096.0f), _fdiv(_fflt(arg0->unknown_10_.unknown_0_), 4096.0f));
    var0.unknown_4_ = _fsub(_fdiv(_fflt(arg0->unknown_4_.unknown_4_), 4096.0f), _fdiv(_fflt(arg0->unknown_10_.unknown_4_), 4096.0f));
    var0.unknown_8_ = _fsub(_fdiv(_fflt(arg0->unknown_4_.unknown_8_), 4096.0f), _fdiv(_fflt(arg0->unknown_10_.unknown_8_), 4096.0f));

    float var1 = var0.unknown_8_;
    float var2 = _d2f(func_02009598((double)(var0.unknown_0_), (double)(var1)));
    if (var2 < 0.0f) {
        var2 = _fadd(var2, 6.2831855f);
    }
    arg0->unknown_70_ = _ffix(_fmul(4096.0f, var2));
    arg0->unknown_74_ = _ffix(_fmul(4096.0f, var0.unknown_4_));

    float var3 = func_0200c9b4(_fadd(_fmul(var0.unknown_8_, var0.unknown_8_),
                                    _fadd(_fmul(var0.unknown_0_, var0.unknown_0_), _fmul(var0.unknown_4_, var0.unknown_4_))));
    arg0->unknown_78_ = _ffix(_fmul(4096.0f, var3));

    func_0202e5d8(arg0, arg0->unknown_70_, arg0->unknown_74_, arg0->unknown_78_);
}
