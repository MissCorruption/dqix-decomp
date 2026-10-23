#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_0215dd3c_328 = 0x160 };
enum { Enum_ov003_0215dd3c_960 = 0x3d8 };
enum { Enum_ov003_0215dd3c_961 = 0x3d9 };
enum { Enum_ov003_0215dd3c_156 = 0xb4 };
enum { Enum_ov003_0215dd3c_236 = 0x104 };
enum { Enum_ov003_0215dd3c_160 = 0xb8 };
enum { Enum_ov003_0215dd3c_240 = 0x108 };
#else
enum { Enum_ov003_0215dd3c_328 = 0x148 };
enum { Enum_ov003_0215dd3c_960 = 0x3c0 };
enum { Enum_ov003_0215dd3c_961 = 0x3c1 };
enum { Enum_ov003_0215dd3c_156 = 0x9c };
enum { Enum_ov003_0215dd3c_236 = 0xec };
enum { Enum_ov003_0215dd3c_160 = 0xa0 };
enum { Enum_ov003_0215dd3c_240 = 0xf0 };
#endif


struct Struct_0205ba68;
extern "C" void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3);
struct Struct_0205bacc;
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);
struct Struct_0205bcdc;
extern "C" void func_0205bcdc(struct Struct_0205bcdc* arg0, int arg1);
extern "C" void func_0205bb04(void* arg0, int arg1);

// USA: func_ov003_0215dd3c
extern "C" ARM void func_ov003_0215dd3c(char* arg0) {
    int var0, var1, var2;
    if (*(unsigned char*)(arg0 + Enum_ov003_0215dd3c_328) == 1) {
        var0 = *(unsigned char*)(arg0 + Enum_ov003_0215dd3c_960);
        var1 = 1;
        var2 = *(signed char*)(arg0 + Enum_ov003_0215dd3c_961);
    }
    func_0205ba68((struct Struct_0205ba68*)(arg0 + Enum_ov003_0215dd3c_156), var1, var0, 0);
    func_0205ba68((struct Struct_0205ba68*)(arg0 + Enum_ov003_0215dd3c_236), var1, var0, 0);
    func_0205bacc((struct Struct_0205bacc*)(arg0 + Enum_ov003_0215dd3c_156), var0);
    func_0205bacc((struct Struct_0205bacc*)(arg0 + Enum_ov003_0215dd3c_236), var0);
    *(int*)(arg0 + Enum_ov003_0215dd3c_160) = var1;
    *(int*)(arg0 + Enum_ov003_0215dd3c_240) = var1;
    func_0205bcdc((struct Struct_0205bcdc*)(arg0 + Enum_ov003_0215dd3c_156), var2);
    func_0205bb04((void*)(arg0 + Enum_ov003_0215dd3c_236), var2);
}
