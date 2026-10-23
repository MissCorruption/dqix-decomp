#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201c3a4;
extern "C" void func_ov000_02169b78(void* arg0);

struct Struct_ov000_02184264_6 {
    char unknown_0_[0x8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_6 data_ov000_02184264;

// USA: func_ov000_0216b394
extern "C" ARM int func_ov000_0216b394(struct Struct_0201c3a4* arg0) {
    char* var0 = (char*)data_ov000_02184264.unknown_8_->Allocate(0xc);
    *(int*)(var0 + 0x0) = 0;
    *(int*)(var0 + 0x4) = 0;
    *(int*)(var0 + 0x0) = 0x33;

    char* var1 = (char*)(void*)((Script::Parameter*)arg0)->ToString();
    if (var1) {
        int var2 = strlen(var1);
        char* var3 = (char*)data_ov000_02184264.unknown_8_->Allocate(var2 + 1);
        *(void**)(var0 + 0x8) = var3;
        strcpy(var3, var1);
    }

    func_ov000_02169b78(var0);
    return 1;
}
