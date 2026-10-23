#include <globaldefs.h>
#include <Resource/Script.h>
#include <Memory/SafeAllocator.h>

struct Struct_ov000_0216b564 {
    unsigned int unknown_0_;
    Struct_ov000_0216b564* unknown_4_;
    unsigned int unknown_8_0_ : 1;
    unsigned int unknown_8_1_ : 15;
    unsigned int unknown_a_0_ : 1;
    unsigned int unknown_a_1_ : 1;
    unsigned int unknown_a_2_ : 14;
    unsigned int unknown_c_0_ : 15;
    unsigned int unknown_d_7_ : 17;
};
struct Struct_ov000_02184264_4 {
    void* unknown_0_;
    void* unknown_4_;
    SafeAllocator* unknown_8_;
};
extern "C" {
    extern Struct_ov000_02184264_4 data_ov000_02184264;
    void func_ov000_02169b78(Struct_ov000_0216b564*);
}

extern "C" ARM int func_ov000_0216b564(Script::Parameter* arg0, int arg1)
{
    Struct_ov000_0216b564* var0 = static_cast<Struct_ov000_0216b564*>(
        data_ov000_02184264.unknown_8_->Allocate(sizeof(Struct_ov000_0216b564)));
    if (!var0)
        return 0;
    var0->unknown_0_ = 0;
    var0->unknown_4_ = NULL;
    var0->unknown_0_ = 0x37;
    int var1 = arg0[0].ToInt();
    if (var1 < 0) {
        var0->unknown_8_0_ = 0;
    } else if (var1 == 0) {
        var0->unknown_8_0_ = 1;
        var0->unknown_8_1_ = 1;
    } else {
        var0->unknown_8_0_ = 1;
        var0->unknown_8_1_ = var1;
    }
    var0->unknown_a_0_ = 1;
    var0->unknown_a_1_ = 0;
    var0->unknown_c_0_ = 0;
    if (arg1 >= 2) {
        int var2 = arg0[1].ToInt();
        if (var2 >= 0) {
            var0->unknown_a_0_ = 0;
            var0->unknown_a_1_ = 1;
            var0->unknown_c_0_ = var2;
        } else if (var2 != -2) {
            var0->unknown_a_0_ = 0;
            var0->unknown_a_1_ = 0;
            var0->unknown_c_0_ = 0;
        }
    }
    func_ov000_02169b78(var0);
    return 1;
}
