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

struct Struct_0201c3a4;

extern char data_ov000_02183fbc[];
extern char data_ov000_02183fc1[];

struct Struct_ov000_0216a4c8 {
    int unknown_0_;
    void* unknown_4_;
    char* unknown_8_;
};

// USA: func_ov000_0216a4c8
extern "C" ARM int func_ov000_0216a4c8(struct Struct_0201c3a4* arg0) {
    struct Struct_ov000_0216a4c8* var0 = (struct Struct_ov000_0216a4c8*)data_ov000_02184264.unknown_8_->Allocate(sizeof(struct Struct_ov000_0216a4c8));
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x12;
    char* var1 = (char*)(extern void*)((Script::Parameter*)arg0)->ToString();
    var0->unknown_8_ = (char*)data_ov000_02184264.unknown_8_->Allocate(strlen(var1) + 1);
    strcpy(var0->unknown_8_, var1);
    char* var2 = strstr(var0->unknown_8_, data_ov000_02183fbc);
    if (var2 != NULL) {
        strcpy(var2, data_ov000_02183fc1);
    }
    func_ov000_02169b78(var0);
    return 1;
}
