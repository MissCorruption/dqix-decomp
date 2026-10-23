#include <globaldefs.h>
#include <Resource/Script.h>
#include <Memory/SafeAllocator.h>

struct Struct_ov000_0216a208 {
    unsigned int unknown_0_;
    Struct_ov000_0216a208* unknown_4_;
    short unknown_8_;
    short unknown_a_;
    int unknown_c_[1];
    short unknown_10_[2];
};
struct Struct_ov000_02184264_4 {
    void* unknown_0_;
    void* unknown_4_;
    SafeAllocator* unknown_8_;
};
extern "C" {
    extern Struct_ov000_02184264_4 data_ov000_02184264;
    void func_ov000_02169b78(Struct_ov000_0216a208*);
}

// USA: func_ov000_0216a208
extern "C" ARM int func_ov000_0216a208(Script::Parameter* arg0, int arg1)
{
    Struct_ov000_0216a208* var0 = static_cast<Struct_ov000_0216a208*>(
        data_ov000_02184264.unknown_8_->Allocate(sizeof(Struct_ov000_0216a208)));
    var0->unknown_0_ = 9;
    var0->unknown_8_ = arg0[0].ToInt();
    if (arg1 > 1) {
        Script::Parameter* var1 = &arg0[1];
        arg0 += 2;
        var0->unknown_a_ = var1->ToInt();
        int var2;
        int var3;
        int var4;
        var4 = 0;
        var3 = 0;
        for (var2 = 0; var2 < arg1 - 2; var2++) {
            if (arg0->type == 1) {
                var0->unknown_10_[var3] = arg0->ToInt();
                arg0++;
                var3++;
            } else if (arg0->type == 2) {
                float var5 = arg0->ToFloat();
                arg0++;
                var0->unknown_c_[var4] = 4096.0f * var5;
                var4++;
            } else if (arg0->type == 0) {
                arg0++;
            }
        }
    } else {
        var0->unknown_a_ = 0;
    }
    func_ov000_02169b78(var0);
    return 1;
}
