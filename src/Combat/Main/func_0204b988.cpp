#include <globaldefs.h>

extern "C" void func_0204b938(void* arg0, void* arg1, int arg2, int arg3, unsigned short arg4);

struct Struct_0204b988 {
    char unknown_0_[0x10];
    char* unknown_10_;
    char unknown_14_[0x9];
    unsigned char unknown_1d_;
};

// USA: func_0204b988
extern "C" ARM void func_0204b988(struct Struct_0204b988* arg0, unsigned int arg1, int arg2, int arg3, unsigned short arg4) {
    char* var0;
    if (arg0->unknown_1d_ <= arg1) return;
    var0 = arg0->unknown_10_;
    if (var0 == NULL) return;
    func_0204b938(arg0, var0 + arg1 * 16, arg2, arg3, arg4);
}
