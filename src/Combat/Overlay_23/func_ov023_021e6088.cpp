#include <globaldefs.h>

struct Words021e60c4 { unsigned int a, b, c; };
extern "C" void func_ov023_021e60c4(void* obj, struct Words021e60c4* src);

// USA: func_ov023_021e6088
extern "C" ARM void func_ov023_021e6088(void* obj, struct Words021e60c4* src) {
    func_ov023_021e60c4(obj, src);
    func_ov023_021e60c4((char*)obj + 0x408, src);
    func_ov023_021e60c4((char*)obj + 0xac, src);
    func_ov023_021e60c4((char*)obj + 0x35c, src);
}
