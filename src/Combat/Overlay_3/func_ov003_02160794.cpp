#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02160794_1136 = 0x298 };
enum { Enum_ov003_02160794_804 = 0x20c };
#else
enum { Enum_ov003_02160794_1136 = 0x470 };
enum { Enum_ov003_02160794_804 = 0x324 };
#endif

extern short data_ov003_0217f420[3];

extern "C" void func_02080828(void* arg0, int arg1, short* arg2, short* arg3);
extern "C" void func_02080854(void* arg0, int arg1, int arg2, int arg3);

struct Struct_020809a0;
extern "C" ARM void func_020809a0(struct Struct_020809a0* arg0, int arg1, short arg2, short arg3);

// USA: func_ov003_02160794
extern "C" ARM void func_ov003_02160794(void* arg0) {
    short* var0 = *(short**)((char*)arg0 + Enum_ov003_02160794_1136);
    if (var0 == 0) {
        return;
    }
    void* var1 = *(void**)((char*)arg0 + Enum_ov003_02160794_804);
    for (int var2 = 0; var2 < 3; var2++) {
        short* var3 = *(short**)((char*)arg0 + Enum_ov003_02160794_1136);
        short var4 = data_ov003_0217f420[var2];
        short var5 = *var3;
        if (var4 > var5) {
            continue;
        }
        if (var5 >= var4 + 4) {
            continue;
        }
        for (int var6 = 0; var6 < 4; var6++) {
            short var7, var8;
            func_02080828(var1, var4, &var7, &var8);
            func_02080854(var1, var4, var7, var8);
            func_020809a0((struct Struct_020809a0*)var1, var4, 0xd0, 0xa);
            var4 = (short)(var4 + 1);
        }
    }
}
