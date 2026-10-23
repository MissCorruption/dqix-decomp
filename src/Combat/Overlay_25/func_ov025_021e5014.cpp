#include <globaldefs.h>

extern "C" void* func_02057924(void);
extern "C" void* func_02058658(void* arg0, int arg1);
extern "C" void* func_ov025_021e8cf0(char* arg0, int arg1);
extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
extern int data_ov025_021ef988;

struct Struct_ov025_021e5014 { char unknown_0_[8]; unsigned char unknown_8_; unsigned char unknown_9_; };

// USA: func_ov025_021e5014
extern "C" ARM int func_ov025_021e5014(struct Struct_ov025_021e5014* arg0, int arg1, int arg2, int arg3) {
#if defined(jpn)
 enum {Enum_ov025_021e5014_12=4};
#else
 enum {Enum_ov025_021e5014_12=0xc};
#endif
    void* var0 = func_ov025_021e8cf0(*(char**)((char*)&data_ov025_021ef988 + Enum_ov025_021e5014_12), arg0->unknown_9_);
    if (!var0) {
        return 1;
    }
    int var1 = *(int*)var0;
    void* var2 = func_02057924();
    void* var3 = func_02058658(var2, var1);
    if (!var3) {
        return 1;
    }
    int var4[8];
    int var5 = func_ov000_021820bc((void*)arg3, arg1, arg0->unknown_8_, (int)&var4[0]);
    if (var5 != 1) {
        *(short*)((char*)var3 + 0xb2) = -1;
        return 1;
    }
    *(short*)((char*)var3 + 0xb2) = (short)var4[0];
    return 1;
}
