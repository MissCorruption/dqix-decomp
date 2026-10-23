#include <globaldefs.h>

struct Struct_0205d2bc;
extern "C" void func_0205d2bc(struct Struct_0205d2bc* arg0);
extern "C" void func_020e2d24(int* arg0, int arg1, int arg2);
struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
struct Struct_020439b0;
extern "C" void func_020e2cc4(struct Struct_020439b0* arg0, int arg1);
struct Struct_020e2834;
extern "C" void func_020e2834(struct Struct_020e2834* arg0);

// USA: func_ov003_02159100
extern "C" ARM void func_ov003_02159100(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;

    if (*(signed char*)(var0 + 0x588) == 0) return;
    if (*(unsigned char*)(var0 + 0x587) != 0) return;

    func_0205d2bc((struct Struct_0205d2bc*)(var0 + 0xf4));

    if (*(void**)(var0 + 0x570) == NULL) return;

    unsigned char* var1 = *(unsigned char**)((char*)(*(void**)(var0 + 0x570)) + 0x10);
    int var2;
    func_020e2d24((int*)(var1 + 0x28), 0x11, 1);
    var2 = func_020e28dc((struct Struct_020e28dc*)*(void**)(var0 + 0x570));
    func_020e2cc4((struct Struct_020439b0*)(var1 + 0x28), var2);
    func_020e2834((struct Struct_020e2834*)*(void**)(var0 + 0x570));
}
