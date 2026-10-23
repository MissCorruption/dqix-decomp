#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_0203a950;
extern "C" void func_020bd984(struct Struct_0203a950* arg0);

struct Struct_020bc820_2 {
    char unknown_0_[8];
    void* unknown_8_;
};

struct Struct_0210f824_5 {
    char unknown_0_[0xc];
    SignedAllocatorList unknown_c_;
    char unknown_18_[0xc];
};
extern struct Struct_0210f824_5 data_0210f824[];

struct Struct_020bc820 {
    char unknown_0_[8];
    struct Struct_0203a950* unknown_8_;
    struct Struct_020bc820_2* unknown_c_;
    int unknown_10_;
};

// USA: func_020bc820
extern "C" ARM void func_020bc820(struct Struct_020bc820* arg0) {
    struct Struct_0203a950* var0 = arg0->unknown_8_;
    if (var0 == NULL) return;
    func_020bd984(var0);
    if (arg0->unknown_c_ != NULL) {
        arg0->unknown_c_->unknown_8_ = NULL;
        return;
    }
    data_0210f824[arg0->unknown_10_].unknown_c_.Remove((SignedAllocatorHeader*)arg0);
}
