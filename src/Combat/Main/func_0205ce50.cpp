#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0205ce50_2528 = 4, Enum_0205ce50_4096 = 0x1800 };
#else
enum { Enum_0205ce50_2528 = 0x9e0, Enum_0205ce50_4096 = 0x1000 };
#endif

extern "C" unsigned int func_02042b10(void*, void*);
extern "C" unsigned int func_02042b1c(unsigned char*);
struct Struct_0205ce28_2;
extern "C" unsigned int func_0205ce28(Struct_0205ce28_2*);
struct Struct_0202f6d4;
extern "C" unsigned int func_0202f6d4(Struct_0202f6d4*);
extern "C" unsigned int func_020421a0();

// USA: func_0205ce50
extern "C" ARM unsigned int func_0205ce50(unsigned char* arg0) {
    unsigned int var0 = (unsigned int)arg0;
    unsigned int var1 = func_020421a0();
    func_02042b10((void*)var1, (void*)(var0 + 0xb4));
    if (func_0205ce28((Struct_0205ce28_2*)(var1 + Enum_0205ce50_2528 + Enum_0205ce50_4096)) == 0) {
        func_0202f6d4((Struct_0202f6d4*)(var1 + Enum_0205ce50_2528 + Enum_0205ce50_4096));
    }
    return func_02042b1c((unsigned char*)var1);
}
