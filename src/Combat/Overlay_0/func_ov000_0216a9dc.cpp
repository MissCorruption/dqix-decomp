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

// USA: func_ov000_0216a9dc
extern "C" ARM int func_ov000_0216a9dc(char* arg0, int arg1) {
    char* var0 = (char*)data_ov000_02184264.unknown_8_->Allocate(0xc);
    *(int*)(var0 + 0x0) = 0;
    *(int*)(var0 + 0x4) = 0;
    *(int*)(var0 + 0x0) = 0x1a;

    int var1 = 1;
    int var2 = *(int*)arg0;
    if (var2 == 2) {
        *(unsigned char*)(var0 + 0x8) = 7;
        *(unsigned short*)(var0 + 0xa) = 0x1000;
    } else if (var2 == 1) {
        int var3 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
        *(unsigned char*)(var0 + 0x8) = (unsigned char)var3;
        *(unsigned short*)(var0 + 0xa) = 0x1000;
        arg0 += 8;
        var1 = 2;
    }

    if (var1 <= arg1) {
        int var4 = *(int*)arg0;
        if (var4 == 2) {
            float var5 = ((Script::Parameter*)((struct Struct_0201d530*)arg0))->ToFloat();
            *(unsigned short*)(var0 + 0xa) = (unsigned short)(int)(var5 * 4096.0f);
        } else if (var4 == 1) {
            int var6 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
            float var7 = (float)var6;
            *(unsigned short*)(var0 + 0xa) = (unsigned short)(int)((var7 / 1000.0f) * 4096.0f);
        }
    }

    func_ov000_02169b78(var0);
    return 1;
}
