#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };

struct Struct_0201c3a4;

extern "C" void func_ov000_02169b78(void* arg0);

struct Struct_ov000_02184264_6 {
    char unknown_0_[0x8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_6 data_ov000_02184264;

struct Struct_ov000_0216b7b8 {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    char unknown_a_[2];
    char* unknown_c_;
};

// USA: func_ov000_0216b7b8
extern "C" ARM int func_ov000_0216b7b8(char* arg0) {
    struct Struct_ov000_0216b7b8* var0 = (struct Struct_ov000_0216b7b8*)data_ov000_02184264.unknown_8_->Allocate(0x10);
    if (var0 == NULL) return 0;
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x3b;
    var0->unknown_8_ = (((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt() & 0xff) - 0x1a;
    var0->unknown_9_ = (((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x8)))->ToInt() & 0xff) - 0x1a;
    char* var1 = (char*)(void*)((Script::Parameter*)((struct Struct_0201c3a4*)(arg0 + 0x10)))->ToString();
    if (var1 != NULL) {
        char* var2 = (char*)data_ov000_02184264.unknown_8_->Allocate(strlen(var1) + 1);
        var0->unknown_c_ = var2;
        if (var2 != NULL) {
            strcpy(var2, var1);
        }
    } else {
        var0->unknown_c_ = 0;
    }
    func_ov000_02169b78(var0);
    return 1;
}
