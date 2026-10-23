#include <globaldefs.h>
#include <Resource/Script.h>
#include <Memory/SafeAllocator.h>

struct Struct_ov000_02169e80 {
    unsigned int unknown_0_;
    Struct_ov000_02169e80* unknown_4_;
    short unknown_8_;
    short unknown_a_;
    int unknown_c_;
};
struct Struct_ov000_02184264_4 {
    void* unknown_0_;
    void* unknown_4_;
    SafeAllocator* unknown_8_;
};
extern "C" {
    extern Struct_ov000_02184264_4 data_ov000_02184264;
    void func_ov000_02169b78(Struct_ov000_02169e80*);
}

// USA: func_ov000_02169e80
extern "C" ARM int func_ov000_02169e80(Script::Parameter* arg0, int arg1)
{
    Struct_ov000_02169e80* var0 = static_cast<Struct_ov000_02169e80*>(
        data_ov000_02184264.unknown_8_->Allocate(sizeof(Struct_ov000_02169e80)));
    var0->unknown_0_ = 5;
    if (arg0->type == 2) {
        float var1 = arg0->ToFloat();
        arg0++;
        var0->unknown_8_ = 4096.0f * var1;
    } else if (arg0->type == 1) {
        int var2 = arg0->ToInt();
        arg0++;
        var0->unknown_8_ = 4096.0f * (var2 / 1000.0f);
    }
    if (arg0->type == 2) {
        float var3 = arg0->ToFloat();
        arg0++;
        var0->unknown_a_ = 4096.0f * var3;
    } else if (arg0->type == 1) {
        int var4 = arg0->ToInt();
        arg0++;
        var0->unknown_a_ = 4096.0f * (var4 / 1000.0f);
    }
    var0->unknown_c_ = 4096.0f * arg0->ToFloat();
    func_ov000_02169b78(var0);
    return 1;
}
