#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02160134_1187 = 0x2cb };
enum { Enum_ov003_02160134_804 = 0x20c };
enum { Enum_ov003_02160134_912 = 0x278 };
enum { Enum_ov003_02160134_820 = 0x21c };
enum { Enum_ov003_02160134_792 = 0x200 };
enum { Enum_ov003_02160134_1124 = 0x28c };
enum { Enum_ov003_02160134_908 = 0x274 };
enum { Enum_ov003_02160134_1120 = 0x288 };
#else
enum { Enum_ov003_02160134_1187 = 0x4a3 };
enum { Enum_ov003_02160134_804 = 0x324 };
enum { Enum_ov003_02160134_912 = 0x390 };
enum { Enum_ov003_02160134_820 = 0x334 };
enum { Enum_ov003_02160134_792 = 0x318 };
enum { Enum_ov003_02160134_1124 = 0x464 };
enum { Enum_ov003_02160134_908 = 0x38c };
enum { Enum_ov003_02160134_1120 = 0x460 };
#endif

struct Struct_0207fcb8;
extern "C" void func_0207fcb8(struct Struct_0207fcb8* arg0);
struct Struct_0207fd00;
extern "C" void func_0207fd00(struct Struct_0207fd00* arg0);
extern "C" void func_0207fe80(void* arg0, int arg1, int arg2, int arg3);
struct Struct_0207fd44_2;
extern "C" void func_0207fd44(struct Struct_0207fd44_2* arg0);
extern "C" void func_ov003_02166fc4(void* arg0);
struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
struct Struct_020e2794_2;
extern "C" void func_020e2794(struct Struct_020e2794_2* arg0, void* arg1);
extern "C" void func_ov003_0216039c(void* arg0);
struct Struct_ov003_02160134;
extern "C" void func_ov003_02167548(struct Struct_ov003_02160134* arg0);
struct Struct_0205a254;
struct Struct_0205a254_2;
extern "C" void func_0205a370(struct Struct_0205a254* arg0, int arg1);
extern "C" struct Struct_0205a254_2* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);
struct Struct_0205a330;
extern "C" void func_0205a330(struct Struct_0205a330* arg0, int arg1);
extern "C" void func_020e27ec(struct Struct_0205a254* arg0, int arg1, short arg2, short arg3);
extern "C" void func_0205ae8c(void*);

// USA: func_ov003_02160134
extern "C" ARM void func_ov003_02160134(char* arg0) {
    if (*(unsigned char*)(arg0 + Enum_ov003_02160134_1187) == 0) return;

    void* var0 = *(void**)(arg0 + Enum_ov003_02160134_804);
    if (var0 != 0) {
        func_0207fcb8((struct Struct_0207fcb8*)var0);
        func_0207fd00((struct Struct_0207fd00*)var0);
        func_0207fe80(var0, 1, 2, 1);
        func_0207fd44((struct Struct_0207fd44_2*)var0);
    }
    func_ov003_02166fc4(arg0);

    if (*(void**)(arg0 + Enum_ov003_02160134_912) != 0 && func_020e28dc((struct Struct_020e28dc*)*(void**)(arg0 + Enum_ov003_02160134_912)) != 0) {
        func_020e2794((struct Struct_020e2794_2*)*(void**)(arg0 + Enum_ov003_02160134_912), arg0 + Enum_ov003_02160134_820);
    }
    func_ov003_0216039c(arg0);

    if (*(struct Struct_ov003_02160134**)(arg0 + Enum_ov003_02160134_792) != 0) {
        func_ov003_02167548(*(struct Struct_ov003_02160134**)(arg0 + Enum_ov003_02160134_792));
    }

    if (!(*(unsigned int*)(arg0 + Enum_ov003_02160134_1124) & 0x2000000)) return;

    struct Struct_0205a254* var1 = *(struct Struct_0205a254**)(arg0 + Enum_ov003_02160134_908);
    func_0205a370(var1, 1);

    var1 = *(struct Struct_0205a254**)(arg0 + Enum_ov003_02160134_908);
    struct Struct_0205a254_2* var2 = func_0205a3d0(var1, 0);
    if (var2 != NULL) {
        *(unsigned char*)((char*)var2 + 0x15) &= ~8;
    }

    var1 = *(struct Struct_0205a254**)(arg0 + Enum_ov003_02160134_908);
    var2 = func_0205a3d0(var1, 1);
    if (var2 != NULL) {
        *(unsigned char*)((char*)var2 + 0x15) |= 8;
    }

    var1 = *(struct Struct_0205a254**)(arg0 + Enum_ov003_02160134_908);
    int var3 = *(int*)(arg0 + Enum_ov003_02160134_1120);
    func_0205a330((struct Struct_0205a330*)var1, var3);

    var1 = *(struct Struct_0205a254**)(arg0 + Enum_ov003_02160134_908);
    func_020e27ec(var1, 1, 0xd7, 0x96);

    func_0205ae8c(arg0 + Enum_ov003_02160134_820);
}
