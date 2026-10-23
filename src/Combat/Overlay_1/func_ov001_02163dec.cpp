#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void* func_02012fe4(void);
struct Struct_02019508;
struct Struct_02019508_3;
extern "C" ARM struct Struct_02019508* func_02019508(struct Struct_02019508_3* arg0, int arg1, int arg2);
struct Struct_02013380;
extern "C" void func_02013380(Struct_02013380* arg0, int arg1, int arg2);

// USA: func_ov001_02163dec
extern "C" ARM int func_ov001_02163dec(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    int var1 = func_ov017_021d60f4((char*)arg0 + 0x8);
    void* var2 = func_02012fe4();
    if (!var2) {
        return 0;
    }
    struct Struct_02019508* var3 = func_02019508((struct Struct_02019508_3*)var2, var0, var1);
    if (!var3) {
        return 0;
    }
    int var4 = func_ov017_021d60f4((char*)arg0 + 0x10);
    func_02013380((Struct_02013380*)var3, var0, var4);
    return 1;
}
