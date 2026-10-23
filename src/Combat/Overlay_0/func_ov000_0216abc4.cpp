#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
extern "C" void func_ov000_02169b78(void* arg0);

struct Struct_ov000_02184264_6 {
    char unknown_0_[0x8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_6 data_ov000_02184264;

// USA: func_ov000_0216abc4
extern "C" ARM int func_ov000_0216abc4(char* arg0, int arg1) {
    char* var0 = (char*)data_ov000_02184264.unknown_8_->Allocate(0x10);

    if (arg1 == 1) {
        *(int*)(var0 + 0x0) = 0;
        *(int*)(var0 + 0x4) = 0;
        *(int*)(var0 + 0x0) = 0x1e;
        int var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
        *(int*)(var0 + 0xc) = var1;
        *(signed char*)(var0 + 0x8) = -1;
        func_ov000_02169b78(var0);
    } else if (arg1 == 2) {
        *(int*)(var0 + 0x0) = 0;
        *(int*)(var0 + 0x4) = 0;
        *(int*)(var0 + 0x0) = 0x1e;
        int var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
        *(unsigned char*)(var0 + 0x8) = (unsigned char)var2;
        int var3 = ((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 8)))->ToInt();
        *(int*)(var0 + 0xc) = var3;
        func_ov000_02169b78(var0);
    }

    return 1;
}
