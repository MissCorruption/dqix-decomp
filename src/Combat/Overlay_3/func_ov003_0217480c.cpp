#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0217480c_4171 = 0xfc7 };
enum { Enum_ov003_0217480c_4158 = 0xfba };
enum { Enum_ov003_0217480c_2204 = 0x818 };
enum { Enum_ov003_0217480c_4172 = 0xfc8 };
#else
enum { Enum_ov003_0217480c_4171 = 0x104b };
enum { Enum_ov003_0217480c_4158 = 0x103e };
enum { Enum_ov003_0217480c_2204 = 0x89c };
enum { Enum_ov003_0217480c_4172 = 0x104c };
#endif


struct Struct_0207fcb8;
extern "C" void func_0207fcb8(struct Struct_0207fcb8* arg0);
struct Struct_0207fd00;
extern "C" void func_0207fd00(struct Struct_0207fd00* arg0);
extern "C" void func_0207fe80(void* arg0, int arg1, int arg2, int arg3);
struct Struct_0207fd44_2;
extern "C" void func_0207fd44(struct Struct_0207fd44_2* arg0);
extern "C" void func_ov003_02175fd4(void* arg0);
struct Struct_ov003_0217480c;
extern "C" void func_ov003_02176098(struct Struct_ov003_0217480c* arg0);
extern "C" void func_ov003_0217545c(void* arg0);
extern "C" void func_ov003_02175504(void* arg0);
extern "C" void func_ov003_0217577c(void* arg0);

// USA: func_ov003_0217480c
extern "C" ARM void func_ov003_0217480c(void* arg0) {
    char* var0 = (char*)arg0;
    if (*(unsigned char*)(var0 + Enum_ov003_0217480c_4158) != 0) {
        void* var1 = *(void**)(var0 + Enum_ov003_0217480c_2204);
        func_0207fcb8((struct Struct_0207fcb8*)var1);
        func_0207fd00((struct Struct_0207fd00*)var1);
        func_0207fe80(var1, 1, 2, 1);
        func_0207fd44((struct Struct_0207fd44_2*)var1);
        func_ov003_02175fd4(var0);
        func_ov003_02176098((struct Struct_ov003_0217480c*)var0);
        func_ov003_0217545c(var0);
        func_ov003_02175504(var0);
        func_ov003_0217577c(var0);
        *(unsigned char*)(var0 + Enum_ov003_0217480c_4172) = 0;
        *(unsigned char*)(var0 + Enum_ov003_0217480c_4171) = 0;
    }
}
