#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

extern "C" void func_ov000_02169b78(void*);

struct Struct_ov000_02184264_2 {
    unsigned char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_2 data_ov000_02184264;

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };
struct Struct_0201c3a4 { unsigned char unknown_0_[0x8]; };

struct Struct_ov000_0216ac90 {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
    char* unknown_c_;
};

// USA: func_ov000_0216ac90
extern "C" ARM int func_ov000_0216ac90(struct Struct_0201c1c8* arg0) {
    struct Struct_ov000_0216ac90* var0 = (struct Struct_ov000_0216ac90*)data_ov000_02184264.unknown_8_->Allocate(sizeof(struct Struct_ov000_0216ac90));
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x21;
    var0->unknown_8_ = (unsigned char)((Script::Parameter*)arg0)->ToInt();
    char* var1 = (char*)((Script::Parameter*)((struct Struct_0201c3a4*)((char*)arg0 + 8)))->ToString();
    char* var2 = (char*)data_ov000_02184264.unknown_8_->Allocate(strlen(var1) + 1);
    var0->unknown_c_ = var2;
    strcpy(var2, var1);
    func_ov000_02169b78(var0);
    return 1;
}
