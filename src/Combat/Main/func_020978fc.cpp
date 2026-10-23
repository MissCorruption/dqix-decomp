#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_020978fc;
extern "C" void func_02097bc4(struct Struct_020978fc* arg0, int arg1);

extern "C" int func_02097c18(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);

struct Struct_021098e0 {
    unsigned char* unknown_0_;
    void* unknown_4_;
};
extern struct Struct_021098e0 data_021098e0;

// USA: func_020978fc
extern "C" ARM int func_020978fc(struct Struct_0201c1c8* arg0) {
    char* var0 = (char*)arg0;
    int var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)(var0 + 0x0)))->ToInt();
    if (*data_021098e0.unknown_0_ != (var1 & 0xff)) {
        return 1;
    }
    {
        int var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)(var0 + 0x8)))->ToInt() & 0xff;
        int var3 = ((Script::Parameter*)((struct Struct_0201c1c8*)(var0 + 0x10)))->ToInt();
        int var4 = ((Script::Parameter*)((struct Struct_0201c1c8*)(var0 + 0x18)))->ToInt();
        int var5 = ((Script::Parameter*)((struct Struct_0201c1c8*)(var0 + 0x20)))->ToInt();
        int var6 = ((Script::Parameter*)((struct Struct_0201c1c8*)(var0 + 0x28)))->ToInt();
        int var7 = ((Script::Parameter*)((struct Struct_0201c1c8*)(var0 + 0x30)))->ToInt();
        int var8 = ((Script::Parameter*)((struct Struct_0201c1c8*)(var0 + 0x38)))->ToInt();
        func_02097bc4((struct Struct_020978fc*)data_021098e0.unknown_4_, var2);
        func_02097c18(data_021098e0.unknown_4_, var2, var3, var4, var5, var6, var7, var8);
    }
    return 1;
}
