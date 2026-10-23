#include <globaldefs.h>

struct Words021e60c4 { unsigned int a, b, c; };
extern "C" void __clear(void*, int);
extern "C" void func_ov023_021e60c4(void* obj, struct Words021e60c4* src);

// USA: func_ov023_021e60e0
extern "C" ARM void func_ov023_021e60e0(void* obj, unsigned int val) {
    struct Words021e60c4 local;
    __clear(&local, 0xc);
    local.b = val;
    func_ov023_021e60c4(obj, &local);
    func_ov023_021e60c4((char*)obj + 0x8 + 0x400, &local);
    func_ov023_021e60c4((char*)obj + 0xac, &local);
    func_ov023_021e60c4((char*)obj + 0x35c, &local);
}
