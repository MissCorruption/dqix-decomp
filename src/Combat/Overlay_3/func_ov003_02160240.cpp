#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02160240_1187 = 0x2cb };
enum { Enum_ov003_02160240_804 = 0x20c };
enum { Enum_ov003_02160240_792 = 0x200 };
enum { Enum_ov003_02160240_912 = 0x278 };
#else
enum { Enum_ov003_02160240_1187 = 0x4a3 };
enum { Enum_ov003_02160240_804 = 0x324 };
enum { Enum_ov003_02160240_792 = 0x318 };
enum { Enum_ov003_02160240_912 = 0x390 };
#endif

struct Struct_0207fd88;
extern "C" void func_0207fd88(struct Struct_0207fd88* arg0);
extern "C" void func_ov003_0216720c(char* arg0);
extern "C" void func_ov003_0216757c(char* arg0);
extern "C" void func_020e2d24(int* arg0, int arg1, int arg2);
struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
struct Struct_020439b0;
extern "C" void func_020e2cc4(struct Struct_020439b0* arg0, int arg1);
struct Struct_020e2834;
extern "C" void func_020e2834(struct Struct_020e2834* arg0);

// USA: func_ov003_02160240
extern "C" ARM void func_ov003_02160240(char* arg0) {
    if (*(unsigned char*)(arg0 + Enum_ov003_02160240_1187) == 0) return;
    if (*(struct Struct_0207fd88**)(arg0 + Enum_ov003_02160240_804) != 0) {
        func_0207fd88(*(struct Struct_0207fd88**)(arg0 + Enum_ov003_02160240_804));
    }
    func_ov003_0216720c(arg0);
    if (*(char**)(arg0 + Enum_ov003_02160240_792) != 0) {
        func_ov003_0216757c(*(char**)(arg0 + Enum_ov003_02160240_792));
    }
    if (*(void**)(arg0 + Enum_ov003_02160240_912) == 0) return;
    unsigned char* var0 = *(unsigned char**)((char*)(*(void**)(arg0 + Enum_ov003_02160240_912)) + 0x10);
    int var1;
    func_020e2d24((int*)(var0 + 0x28), 0x19, 1);
    var1 = func_020e28dc((struct Struct_020e28dc*)*(void**)(arg0 + Enum_ov003_02160240_912));
    func_020e2cc4((struct Struct_020439b0*)(var0 + 0x28), var1);
    func_020e2834((struct Struct_020e2834*)*(void**)(arg0 + Enum_ov003_02160240_912));
}
