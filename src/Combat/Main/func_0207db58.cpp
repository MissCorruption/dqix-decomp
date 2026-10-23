#include <globaldefs.h>

struct Struct_0207d7f4;
extern "C" struct Struct_0207d7f4* func_0207d9bc(struct Struct_0207d7f4* arg0, unsigned short arg1);

extern "C" void func_0202ae18(void);
extern "C" int func_0202c508(void);
extern "C" void func_ov017_021c9b90(int arg0, int arg1);

// USA: func_0207db58
extern "C" ARM int func_0207db58(struct Struct_0207d7f4* arg0, unsigned short arg1, char arg2) {
    char* var0 = (char*)func_0207d9bc(arg0, arg1);
    if (var0 == NULL) return -1;
    if (var0[4] < 0) {
        var0[4] = arg2;
        func_0202ae18();
        if (func_0202c508()) {
            func_ov017_021c9b90(arg1, var0[4]);
        }
    }
    return var0[4];
}
