#include <globaldefs.h>

struct Struct_0208d994;
struct Struct_0208bf78_5;
struct Struct_02046574_2;

extern "C" int func_020421a0(void);
extern "C" void func_02046380(void* arg0);
extern "C" int func_ov004_021666bc(void*, int*);
extern "C" Struct_0208d994* func_0208d994(Struct_0208bf78_5*, int);
extern "C" void func_02046574(Struct_02046574_2*, int, char*);

#if defined(jpn)
extern void* data_ov004_0217101c[2];
#define CurrentBase0217101c data_ov004_0217101c[1]
#else
extern void* data_ov004_0217101c;
#define CurrentBase0217101c data_ov004_0217101c
#endif

// USA: func_ov004_02167310
extern "C" ARM int func_ov004_02167310(void* arg0) {
    void* var0 = CurrentBase0217101c;
    int var1 = func_020421a0();
    func_02046380((void*)var1);
    int var2;
    int var3 = func_ov004_021666bc(arg0, &var2);
    Struct_0208d994* var4 = func_0208d994((Struct_0208bf78_5*)((char*)var0 + 0xc), var3);
    if (var4) {
        func_02046574((Struct_02046574_2*)var1, 0, *(char**)((char*)var4 + 0x4));
    }
    return 0;
}
