#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

extern "C" void func_ov000_02169b78(void* arg0);

struct Struct_ov000_02184264_2 {
    unsigned char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_2 data_ov000_02184264;

struct Struct_ov000_02169d08 {
    int unknown_0_;
    int unknown_4_;
    char* unknown_8_;
    short unknown_c_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};

// USA: func_ov000_02169d08
extern "C" ARM int func_ov000_02169d08(Script::Parameter* arg0, int arg1) {
    struct Struct_ov000_02169d08* var0 = (struct Struct_ov000_02169d08*)data_ov000_02184264.unknown_8_->Allocate(sizeof(struct Struct_ov000_02169d08));
    var0->unknown_0_ = 3;
    if (arg0->type == 0) {
        const char* var1 = (arg0++)->ToString();
        int var2 = 1;
        if (arg1 >= 2) {
            var2 = (arg0++)->ToInt();
        }
        var0->unknown_8_ = (char*)data_ov000_02184264.unknown_8_->Allocate(strlen(var1) + 1);
        strcpy(var0->unknown_8_, var1);
        var0->unknown_c_ = var2;
        var0->unknown_e_ = 7;
        int var3 = 0;
        if (arg1 >= 3) {
            var3 = arg0->ToInt();
        }
        var0->unknown_f_ = var3;
    } else if (arg0->type == 1) {
        var0->unknown_e_ = (arg0++)->ToInt();
        const char* var4 = (arg0++)->ToString();
        int var5 = 1;
        if (arg1 >= 3) {
            var5 = (arg0++)->ToInt();
        }
        var0->unknown_8_ = (char*)data_ov000_02184264.unknown_8_->Allocate(strlen(var4) + 1);
        strcpy(var0->unknown_8_, var4);
        var0->unknown_c_ = var5;
        int var6 = 0;
        if (arg1 >= 4) {
            var6 = arg0->ToInt();
        }
        var0->unknown_f_ = var6;
    } else {
        return 0;
    }
    func_ov000_02169b78(var0);
    return 1;
}
