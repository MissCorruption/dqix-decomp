#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021845f8(unsigned char* arg0, unsigned int arg1);

struct Struct_ov011_021844a4;
extern "C" int func_ov011_021844a4(struct Struct_ov011_021844a4* arg0, void* arg1, unsigned int arg2);

// USA: func_ov011_02186fc8
extern "C" ARM int func_ov011_02186fc8(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    void* var1 = func_ov017_021b2164();
    if (func_ov011_021845f8((unsigned char*)var1, var0) == 0) return 0;
    int var2 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    int var3 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x10));
    return func_ov011_021844a4((struct Struct_ov011_021844a4*)var1, (void*)var0, (var2 * var3) << 5) == 0;
}
