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

// USA: func_ov000_0216a364
extern "C" ARM int func_ov000_0216a364(char* arg0, int arg1) {
    char* var0 = (char*)data_ov000_02184264.unknown_8_->Allocate(0x18);
    *(int*)(var0 + 0x0) = 0xc;
    int var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    *(short*)(var0 + 0x8) = (short)var1;
    *(unsigned char*)(var0 + 0xa) = 0;
    *(int*)(var0 + 0xc) = 0;
    *(int*)(var0 + 0x10) = 0;
    *(int*)(var0 + 0x14) = 0;

    arg0 += 8;
    if (*(unsigned short*)(var0 + 0x8) == 5 || *(unsigned short*)(var0 + 0x8) == 6) {
        *(int*)(var0 + 0x14) = 0x3fe66666;
    }

    if (arg1 >= 2) {
        int var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
        *(unsigned char*)(var0 + 0xa) = (unsigned char)var2;
        arg0 += 8;
    }

    if (arg1 >= 3) {
        float var3 = ((Script::Parameter*)((struct Struct_0201d530*)arg0))->ToFloat();
        *(float*)(var0 + 0xc) = var3;
        float var4 = ((Script::Parameter*)((struct Struct_0201d530*)(arg0 + 8)))->ToFloat();
        *(float*)(var0 + 0x10) = var4;
        float var5 = ((Script::Parameter*)((struct Struct_0201d530*)(arg0 + 0x10)))->ToFloat();
        *(float*)(var0 + 0x14) = var5;
    }

    func_ov000_02169b78(var0);
    return 1;
}
