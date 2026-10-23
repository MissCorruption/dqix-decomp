#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02158184_505 = 0x1f5 };
enum { Enum_ov003_02158184_504 = 0x1f4 };
#else
enum { Enum_ov003_02158184_505 = 0x1f9 };
enum { Enum_ov003_02158184_504 = 0x1f8 };
#endif

extern "C" int func_ov003_021538e0(void*);
extern "C" void* func_020d6c00(void);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_020dc2d0(int);
extern "C" void func_ov003_02153874(void* arg0);

// USA: func_ov003_02158184
extern "C" ARM void func_ov003_02158184(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned char var1 = *(unsigned char*)(var0 + Enum_ov003_02158184_505);
    void* var2 = *(void**)(var0 + 4);

    if (var1 == 0) {
        signed char var3 = *(signed char*)((char*)var2 + 0x59);
        int var4 = 0;
        if (var3 < 0) goto check;
        if (var3 <= 3) var4 = 1;
    check:
        if (!var4) {
            *(unsigned char*)(var0 + Enum_ov003_02158184_504) = 7;
            return;
        }
        *(signed char*)((char*)var2 + 0x59) = -1;
        func_ov003_02153874(var2);
        *(unsigned char*)(var0 + Enum_ov003_02158184_505) = *(unsigned char*)(var0 + Enum_ov003_02158184_505) + 1;
        return;
    }
    if (var1 != 1) return;
    if (func_ov003_021538e0(var2) == 0) return;

    func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 1);
    func_020dc2d0(0);
    *(unsigned char*)(var0 + Enum_ov003_02158184_504) = 7;
}
