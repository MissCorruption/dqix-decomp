#include <globaldefs.h>

class Struct_ov003_0216c00c {
public:
    virtual void inline_ov003_0216c00c_12();
};
typedef void (Struct_ov003_0216c00c::*Type_01ff91ac_2)();

extern Type_01ff91ac_2 data_ov003_0218070c[12];
extern Type_01ff91ac_2 data_020e6d5c;
extern int data_ov003_02180cc4;

extern "C" void* func_0202ae18(void);
extern "C" void func_ov017_021d48f0(void* arg0);
extern "C" void func_0202b0f4(void* arg0);
extern "C" void* func_0202ae24(void);
extern "C" int func_0202ba00(int* arg0);
extern "C" void func_0202dd28(void);

// USA: func_ov003_021714a0
extern "C" ARM int func_ov003_021714a0(Struct_ov003_0216c00c* arg0) {
    void* var0 = func_0202ae18();
    func_ov017_021d48f0(func_0202ae24());

    if (func_0202ba00((int*)var0) == -1) {
        func_0202dd28();
        func_0202b0f4(var0);
        return 0;
    }

    if (!(data_ov003_02180cc4 & 1)) {
        data_ov003_0218070c[11] = data_020e6d5c;
        data_ov003_02180cc4 |= 1;
    }

    unsigned char var1 = *(unsigned char*)arg0;
    (arg0->*data_ov003_0218070c[var1])();
    return 1;
}
