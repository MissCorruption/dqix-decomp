#include <globaldefs.h>

class Base021714a0 {
public:
    virtual void Method();
};
typedef void (Base021714a0::*Method021714a0)();

extern Method021714a0 data_ov003_0218070c[12];
extern Method021714a0 data_020e6d5c;
extern int data_ov003_02180cc4;

extern "C" void* func_0202ae18(void);
extern "C" void func_ov017_021d48f0(void* p);
extern "C" void func_0202b0f4(void* p);
extern "C" void* func_0202ae24(void);
extern "C" int func_0202ba00(int* obj);
extern "C" void func_0202dd28(void);

// USA: func_ov003_021714a0
extern "C" ARM int func_ov003_021714a0(Base021714a0* obj) {
    void* ptr = func_0202ae18();
    func_ov017_021d48f0(func_0202ae24());

    if (func_0202ba00((int*)ptr) == -1) {
        func_0202dd28();
        func_0202b0f4(ptr);
        return 0;
    }

    if (!(data_ov003_02180cc4 & 1)) {
        data_ov003_0218070c[11] = data_020e6d5c;
        data_ov003_02180cc4 |= 1;
    }

    unsigned char idx = *(unsigned char*)obj;
    (obj->*data_ov003_0218070c[idx])();
    return 1;
}
