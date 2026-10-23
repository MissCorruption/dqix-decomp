#include <globaldefs.h>

#if defined(jpn)
#define func_02043110 func_02043884
#endif

#if defined(jpn)
enum { Enum_02043224_6624 = 0x1804, Enum_02043224_7712 = 0x1c44, Enum_02043224_2352 = 0x800, Enum_02043224_2324 = 0x7e4, Enum_02043224_6577 = 0x17e1, Enum_02043224_6200 = 0x1708, Enum_02043224_6204 = 0x170c, Enum_02043224_6604 = 0x17fd, Enum_02043224_2484 = 0x884, Enum_02043224_2488 = 0x888, Enum_02043224_6072 = 0x1688, Enum_02043224_0 = 14 };
#else
enum { Enum_02043224_6624 = 0x19e0, Enum_02043224_7712 = 0x1e20, Enum_02043224_2352 = 0x930, Enum_02043224_2324 = 0x914, Enum_02043224_6577 = 0x19b1, Enum_02043224_6200 = 0x1838, Enum_02043224_6204 = 0x183c, Enum_02043224_6604 = 0x19cc, Enum_02043224_2484 = 0x9b4, Enum_02043224_2488 = 0x9b8, Enum_02043224_6072 = 0x17b8, Enum_02043224_0 = 0 };
#endif
#if defined(jpn)
#define func_020416c0 func_02041bbc
extern "C" void func_02041bbc(struct Struct_0204166c* arg0);
#endif

#if defined(jpn)
#define func_02043224 func_02043998
#endif

struct Struct_0204166c;
extern "C" void func_020416c0(struct Struct_0204166c* arg0);

extern "C" void func_02043124(void* arg0);

struct Struct_020430b0;
extern "C" void func_02043110(struct Struct_020430b0* arg0);

// USA: func_02043224
extern "C" ARM void func_02043224(char* arg0) {
    *(unsigned char*)(arg0 + Enum_02043224_6604) = 0;
    *(int*)(arg0 + Enum_02043224_2484) = Enum_02043224_0;

    for (int var0 = Enum_02043224_0; var0 < 0x80; var0++) {
        func_020416c0((struct Struct_0204166c*)(arg0 + Enum_02043224_2488 + var0 * 0x1c));
        *(unsigned char*)(arg0 + var0 + Enum_02043224_6072) = 0;
    }

    func_02043124(arg0);
    func_02043110((struct Struct_020430b0*)(arg0 + Enum_02043224_6624));
    *(int*)(arg0 + Enum_02043224_7712) = (int)(arg0 + Enum_02043224_2352);
    func_02043110((struct Struct_020430b0*)(arg0 + Enum_02043224_6624));
    *(int*)(arg0 + Enum_02043224_7712) = (int)(arg0 + Enum_02043224_2324);
    *(unsigned char*)(arg0 + Enum_02043224_6577) = 0;
    *(int*)(arg0 + Enum_02043224_6200) = -1;
    *(int*)(arg0 + Enum_02043224_6204) = 0;
}
