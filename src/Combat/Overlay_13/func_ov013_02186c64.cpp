#include <globaldefs.h>
#if defined(jpn)
#define LIST_OFFSET 0x34
#else
#define LIST_OFFSET 0x38
#endif

struct Struct_0205d81c;
struct Struct_0205d0e0;
extern "C" Struct_0205d0e0* func_0205d81c(Struct_0205d81c*, int);
extern "C" void func_ov013_02186bd4(void*);

// USA: func_ov013_02186c64
extern "C" ARM void func_ov013_02186c64(void* arg0, int arg1, int arg2) {
    Struct_0205d0e0* var0 = func_0205d81c((Struct_0205d81c*)((char*)arg0 + LIST_OFFSET), arg1);
    if (var0 == 0) return;

    unsigned char* var1 = (unsigned char*)var0 + 0xc5;
    unsigned char var2 = *var1;
    *var1 = arg2 ? (var2 | 0x40) : (var2 & ~0x40);

    if (arg1 != 0) return;
    func_ov013_02186bd4(arg0);
}
