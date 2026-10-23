#include <globaldefs.h>

extern "C" void func_ov028_021d9494(void* arg0);
extern "C" void func_ov028_021d9530(void* arg0, void* arg1);
extern "C" void func_ov028_021d9668(void* arg0);

struct Struct_020c93bc;
extern "C" void func_020c93bc(struct Struct_020c93bc* arg0);
extern "C" void func_020c93d0(void*, int, int, void*, void*);

extern int data_ov028_021d9b14;
extern int data_ov028_021d9aec;

// USA: func_ov028_021d96bc
extern "C" ARM void func_ov028_021d96bc(void* arg0) {
    func_ov028_021d9494(&data_ov028_021d9b14);
    func_ov028_021d9530(&data_ov028_021d9b14, arg0);
    func_020c93bc((struct Struct_020c93bc*)&data_ov028_021d9aec);
    func_020c93d0(&data_ov028_021d9aec, 0xd7, 0x1e, (void*)func_ov028_021d9668, &data_ov028_021d9b14);
}
