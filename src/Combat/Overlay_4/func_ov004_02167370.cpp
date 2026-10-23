#include <globaldefs.h>

extern "C" int func_ov004_021666bc(void* arg0, int* arg1);
#if defined(jpn)
struct Struct_ov004_0217101c { unsigned int unknown_0_; char* unknown_4_; };
extern Struct_ov004_0217101c data_ov004_0217101c;
#define CONTEXT_VALUE data_ov004_0217101c.unknown_4_
#else
extern char* data_ov004_0217101c;
#define CONTEXT_VALUE data_ov004_0217101c
#endif
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

struct Struct_ov004_02167370 {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 1;
    unsigned short unknown_0_3_ : 1;
    unsigned short unknown_0_4_ : 12;
};

// USA: func_ov004_02167370
extern "C" ARM int func_ov004_02167370(void* arg0) {
    int var0;
    int var1 = func_ov004_021666bc(arg0, &var0);

    void* var2 = *(void**)(CONTEXT_VALUE + 8);
    while (var2 != NULL) {
        if (*(short*)((char*)var2 + 0) == var1) break;
        var2 = *(void**)((char*)var2 + 8);
    }

    if (var2 == NULL) goto end;

    {
        struct Struct_ov004_02167370* var3 = (struct Struct_ov004_02167370*)((char*)var2 + 2);
        int var4 = 0;
        switch (var3->unknown_0_0_) {
        case 0:
        case 1:
            var4 = 0x6a;
            break;
        case 2:
            var4 = (var3->unknown_0_3_ == 1) ? 0x68 : 0x67;
            break;
        case 3:
            var4 = 0x69;
            break;
        }

        if (var4 != 0) {
            func_ov011_021848a0(arg0, var4);
        }
    }
end:
    return 0;
}
