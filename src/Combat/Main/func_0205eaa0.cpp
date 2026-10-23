#include <globaldefs.h>

#if defined(jpn)
#endif
extern "C" void func_0203ac40(void*, int, int, int);

struct Struct_02108760 {
    char unknown_0_[0xb4];
    short unknown_b4_;
};

// USA: func_0205eaa0
extern "C" ARM void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2) {
    func_0203ac40(arg0, arg0->unknown_b4_, arg1, arg2);
}
