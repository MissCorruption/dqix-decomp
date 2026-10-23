#include <globaldefs.h>

extern "C" void func_020bb700(int* arg0);
extern "C" void func_020bb910(int* arg0);

// USA: func_0207dfac
extern "C" ARM void func_0207dfac(char* arg0) {
    func_020bb700((int*)(arg0 + 0x28));
    func_020bb910((int*)(arg0 + 0x60));
}
