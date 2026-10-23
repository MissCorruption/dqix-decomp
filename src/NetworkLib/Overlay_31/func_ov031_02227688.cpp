#include <globaldefs.h>

extern "C" void func_ov031_0223b710(int);
extern "C" void func_ov031_0223bf48(int, void*);
extern int data_ov031_02290c40;

// USA: func_ov031_02227688
extern "C" ARM void func_ov031_02227688(void *arg0) {
    func_ov031_0223b710(*(int*)((char*)arg0 + 8));
    int var0 = data_ov031_02290c40;
    func_ov031_0223bf48(*(int*)(var0 + 0x60), arg0);
}
