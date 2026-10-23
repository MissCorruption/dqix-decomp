#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f98e0(void*, void*);
extern unsigned char data_ov004_02171034[];

// USA: func_ov004_0216e984
extern "C" ARM int func_ov004_0216e984(void* arg0) {
#if defined(jpn)
    enum { Enum_ov004_0216e984_10 = 0x8 };
#else
    enum { Enum_ov004_0216e984_10 = 0xa };
#endif
    void* var0 = func_ov011_021849c8(arg0);
    if (var0) {
        unsigned short var1 = *(unsigned short*)&data_ov004_02171034[Enum_ov004_0216e984_10];
        void* var2 = func_ov023_021f6880(var0, var1);
        if (var2) {
            ((unsigned char*)var2)[0xc] |= 0x10;
            func_ov023_021f98e0(var2, arg0);
        }
    }
    return 0;
}
