#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0205420c_336 = 0x144 };
#else
enum { Enum_0205420c_336 = 0x150 };
#endif

extern "C" void func_02083c48(void*);

struct Struct_0205420c {
    char unknown_0_[Enum_0205420c_336];
    void* unknown_150_;
};

// USA: func_0205420c
extern "C" ARM void func_0205420c(struct Struct_0205420c* arg0, int, int) {
    void* var0 = arg0->unknown_150_;
    if (var0 != NULL) func_02083c48(var0);
}
