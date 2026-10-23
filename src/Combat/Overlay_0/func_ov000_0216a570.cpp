#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

extern "C" void func_ov000_02169b78(void* arg0);

struct Struct_ov000_02184264_6 {
    unsigned char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_6 data_ov000_02184264;

extern char data_ov000_02183fbc[];
extern char data_ov000_02183fc1[];

struct Struct_ov000_0216a570 {
    int unknown_0_;
    void* unknown_4_;
    signed char unknown_8_;
    char* unknown_c_;
};

// USA: func_ov000_0216a570
extern "C" ARM int func_ov000_0216a570(Script::Parameter* arg0) {
    struct Struct_ov000_0216a570* var0 = (struct Struct_ov000_0216a570*)data_ov000_02184264.unknown_8_->Allocate(sizeof(struct Struct_ov000_0216a570));
    if (arg0[0].type == 0) {
        var0->unknown_0_ = 0;
        var0->unknown_4_ = 0;
        var0->unknown_0_ = 0x14;
        var0->unknown_8_ = -1;
        const char* var1 = arg0[0].ToString();
        var0->unknown_c_ = (char*)data_ov000_02184264.unknown_8_->Allocate(strlen(var1) + 1);
        strcpy(var0->unknown_c_, var1);
        char* var2 = strstr(var0->unknown_c_, data_ov000_02183fbc);
        if (var2 != NULL) {
            strcpy(var2, data_ov000_02183fc1);
        }
    } else if (arg0[0].type == 1) {
        var0->unknown_0_ = 0;
        var0->unknown_4_ = 0;
        var0->unknown_0_ = 0x14;
        var0->unknown_8_ = arg0[0].ToInt();
        const char* var3 = arg0[1].ToString();
        var0->unknown_c_ = (char*)data_ov000_02184264.unknown_8_->Allocate(strlen(var3) + 1);
        strcpy(var0->unknown_c_, var3);
        char* var4 = strstr(var0->unknown_c_, data_ov000_02183fbc);
        if (var4 != NULL) {
            strcpy(var4, data_ov000_02183fc1);
        }
    }
    func_ov000_02169b78(var0);
    return 1;
}
