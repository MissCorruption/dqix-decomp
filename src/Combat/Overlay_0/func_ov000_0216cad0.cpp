#include <globaldefs.h>
#include <Resource/Script.h>
#include <Memory/SafeAllocator.h>

struct Struct_ov000_0216cad0 {
    unsigned int unknown_0_;
    Struct_ov000_0216cad0* unknown_4_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    unsigned char unknown_e_;
};
struct Struct_ov000_02184264_4 {
    void* unknown_0_;
    void* unknown_4_;
    SafeAllocator* unknown_8_;
};
extern "C" {
    extern Struct_ov000_02184264_4 data_ov000_02184264;
    void func_ov000_02169b78(Struct_ov000_0216cad0*);
}

// USA: func_ov000_0216cad0
extern "C" ARM int func_ov000_0216cad0(Script::Parameter* arg0, int arg1)
{
    Struct_ov000_0216cad0* var0 = static_cast<Struct_ov000_0216cad0*>(
        data_ov000_02184264.unknown_8_->Allocate(sizeof(Struct_ov000_0216cad0)));
    if (var0 == NULL) {
        return 0;
    }
    memset(var0, 0, sizeof(Struct_ov000_0216cad0));
    int var1 = arg0->ToInt();
    arg0++;
    var0->unknown_e_ = var1;
    switch (var1 & 0xff) {
    case 0:
    case 2:
        var0->unknown_8_ = 4096.0f * arg0[0].ToFloat();
        var0->unknown_a_ = 4096.0f * arg0[1].ToFloat();
        var0->unknown_c_ = 4096.0f * arg0[2].ToFloat();
        break;
    case 1:
    case 4:
        var0->unknown_8_ = 0x28f;
        var0->unknown_a_ = 0x1000;
        var0->unknown_c_ = 0;
        if (arg1 >= 2) {
            float var2 = arg0->ToFloat();
            arg0++;
            var0->unknown_8_ = FIX32_MULTIPLY(var0->unknown_8_, (int)(4096.0f * var2));
        }
        if (arg1 >= 3) {
            float var3 = arg0->ToFloat();
            arg0++;
            var0->unknown_a_ = 4096.0f * var3;
        }
        if (arg1 >= 4) {
            var0->unknown_c_ = arg0->ToInt() << 12;
        }
        break;
    case 3:
        var0->unknown_8_ = 1;
        var0->unknown_a_ = 0;
        var0->unknown_c_ = 0;
        if (arg1 >= 2) {
            var0->unknown_8_ = 4096.0f * arg0->ToFloat();
        }
        break;
    }
    var0->unknown_0_ = 0x76;
    func_ov000_02169b78(var0);
    return 1;
}
