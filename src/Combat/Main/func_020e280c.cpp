#include <globaldefs.h>

#if defined(jpn)
#define func_020e1cdc func_020e38d4
#endif

extern "C" void func_020e25cc(signed char* arg0);
extern "C" void func_020e1cdc(void* arg0, void* arg1);
struct Struct_020e2604;
extern "C" void func_020e2604(struct Struct_020e2604* arg0);

struct Struct_020e280c {
    unsigned char unknown_0_[0x10];
    void* unknown_10_;   // 0x10
};

// USA: func_020e280c
extern "C" ARM void func_020e280c(struct Struct_020e280c* arg0, void* arg1) {
    func_020e25cc((signed char*)arg0);
    func_020e1cdc(arg0->unknown_10_, arg1);
    func_020e2604((struct Struct_020e2604*)arg0);
}
