#include <globaldefs.h>

extern "C" void func_020bb700(int* out);
extern "C" void func_020bb910(int* dst);

// USA: func_0207dfac
extern "C" ARM void func_0207dfac(char* obj) {
    func_020bb700((int*)(obj + 0x28));
    func_020bb910((int*)(obj + 0x60));
}
