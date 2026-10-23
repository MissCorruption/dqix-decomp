#include <globaldefs.h>

extern "C" void func_ov031_0223cf70(void** arg0);
extern "C" ARM void func_ov031_0223d8a0(void* arg0);
extern "C" void func_ov031_0223bf48(int, void*);
extern char* data_ov031_02290d9c;

// USA: func_ov031_0223e2ec
extern "C" ARM void func_ov031_0223e2ec(int arg0, void* arg1) {
    if (*((unsigned char*)arg1 + 0x11) != 0) {
        func_ov031_0223cf70((void**)((char*)arg1 + 0xc));
    }
    func_ov031_0223d8a0(arg1);
    int var0 = *(int*)(data_ov031_02290d9c + arg0 * 0x40);
    func_ov031_0223bf48(var0, arg1);
}
