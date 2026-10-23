#include <globaldefs.h>

extern int data_02108760;
extern int data_02109bf4;

extern "C" unsigned char func_0205ea18(unsigned char* arg0);
extern "C" void func_0209ca70(void* arg0, int arg1);
struct Struct_02108760_2;
extern "C" void func_0205e9f4(struct Struct_02108760_2* arg0, int arg1);
struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

// USA: func_ov002_0215b268
extern "C" ARM void func_ov002_0215b268(char* arg0) {
#if defined(jpn)
    enum { Enum_ov002_0215b268_3116 = 0xaf4 };
#else
    enum { Enum_ov002_0215b268_3116 = 0xc2c };
#endif
    unsigned char var0 = func_0205ea18((unsigned char*)&data_02108760);
    unsigned char var1 = *(unsigned char*)(arg0 + 0x1000 + Enum_ov002_0215b268_3116);
    func_0209ca70(&data_02109bf4, var1);
    unsigned char var2 = *(unsigned char*)(arg0 + 0x1000 + Enum_ov002_0215b268_3116 + 1);
    func_0205e9f4((struct Struct_02108760_2*)&data_02108760, var2);
    unsigned char var3 = *(unsigned char*)(arg0 + 0x1000 + Enum_ov002_0215b268_3116 + 1);
    if (var0 == var3) return;
    func_0205eaa0((struct Struct_02108760*)&data_02108760, 1, 0);
}
