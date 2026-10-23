#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_0201d530;

extern "C" void func_ov000_02169b78(void* arg0);

struct Struct_ov000_02184264_6 {
    char unknown_0_[0x8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_6 data_ov000_02184264;

// USA: func_ov000_0216a95c
extern "C" ARM int func_ov000_0216a95c(char* arg0) {
    char* var0 = (char*)data_ov000_02184264.unknown_8_->Allocate(0x14);
    int var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    float var2 = ((Script::Parameter*)((struct Struct_0201d530*)(arg0 + 8)))->ToFloat();
    int var3 = (int)(var2 * 4096.0f);
    *(int*)(var0 + 0x0) = 0;
    *(int*)(var0 + 0x4) = 0;
    *(int*)(var0 + 0x0) = 0x19;
    *(short*)(var0 + 0xe) = (short)var3;
    *(short*)(var0 + 0xc) = (short)(var1 + 0x64);
    *(unsigned char*)(var0 + 0x10) = 0;
    *(int*)(var0 + 0x8) = 0;
    func_ov000_02169b78(var0);
    return 1;
}
