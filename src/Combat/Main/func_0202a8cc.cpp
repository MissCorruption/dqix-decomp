#include <globaldefs.h>

extern "C" void func_0202a6c4(void* arg0);

typedef void (*Type_0202a8cc)(void* obj);

// USA: func_0202a8cc
extern "C" ARM void func_0202a8cc(char* arg0, int arg1) {
    if (*(unsigned char*)(arg0 + 0x6c) == 0) return;
    *(unsigned char*)(arg0 + 0x6c) = 2;
    func_0202a6c4(arg0);
    *(unsigned char*)(arg0 + 0x71) = 0;
    *(unsigned char*)(arg0 + 0x73) = 0;
    *(unsigned char*)(arg0 + 0x74) = 0;
    if (arg1 != 0 && *(Type_0202a8cc*)(arg0 + 0x78) != NULL) {
        (*(Type_0202a8cc*)(arg0 + 0x78))(arg0);
    }
}
