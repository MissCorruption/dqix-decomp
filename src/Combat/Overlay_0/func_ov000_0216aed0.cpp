#include <globaldefs.h>
#include <Resource/Script.h>
#include <Memory/SafeAllocator.h>

struct Struct_ov000_0216aed0 {
    unsigned int unknown_0_;
    Struct_ov000_0216aed0* unknown_4_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
    int unknown_c_;
    int unknown_10_;
    Vector3fix unknown_14_;
    unsigned char unknown_20_;
};
struct Struct_ov000_02184264_4 {
    void* unknown_0_;
    void* unknown_4_;
    SafeAllocator* unknown_8_;
};
extern "C" {
    extern Struct_ov000_02184264_4 data_ov000_02184264;
    void func_ov000_02169b78(Struct_ov000_0216aed0*);
    void __clear(void* arg0, unsigned int arg1);
}

// USA: func_ov000_0216aed0
extern "C" ARM int func_ov000_0216aed0(Script::Parameter* arg0, int arg1)
{
    Struct_ov000_0216aed0* var0 = static_cast<Struct_ov000_0216aed0*>(
        data_ov000_02184264.unknown_8_->Allocate(sizeof(Struct_ov000_0216aed0)));
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x2a;
    var0->unknown_8_ = arg0[0].ToInt();
    Script::Parameter* var1 = &arg0[1];
    arg0 += 2;
    var0->unknown_9_ = var1->ToInt();
    Vector3fix var2;
    __clear(&var2, sizeof(var2));
    int var3 = 0;
    var0->unknown_b_ = 0;
    var0->unknown_10_ = 0x666;
    var0->unknown_c_ = 0x1266;
    if (var0->unknown_9_ == 7) {
        var3 = arg0->ToInt();
    } else if (var0->unknown_9_ == 8) {
        if (arg1 >= 3) {
            arg0 = arg0->ToVec3fix(&var2);
        }
        if (arg1 >= 4) {
            var3 = arg0->ToInt();
        }
    } else if (var0->unknown_9_ == 9) {
        Script::Parameter* var4 = arg0->ToVec3fix(&var2);
        var0->unknown_20_ = 0;
        if (arg1 >= 6) {
            var0->unknown_20_ = var4->ToInt() != 0;
        }
    } else if (var0->unknown_9_ == 11) {
        arg0 = arg0->ToVec3fix(&var2);
        if (arg1 >= 6) {
            var0->unknown_b_ = arg0->ToInt();
            if (arg1 >= 7) {
                var0->unknown_10_ = 4096.0f * arg0[1].ToFloat();
                var0->unknown_c_ = 4096.0f * arg0[2].ToFloat();
            }
        }
    } else if (arg1 >= 3) {
        arg0->ToVec3fix(&var2);
    }
    var0->unknown_a_ = var3;
    var0->unknown_14_ = var2;
    func_ov000_02169b78(var0);
    return 1;
}
