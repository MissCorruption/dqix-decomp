#include <globaldefs.h>
#include <Resource/GameResources.h>
#include <Resource/ResourceNodeInsertion.h>

struct Struct_02046a3c;
struct Struct_02046a3c_2;
extern "C" void func_02046a3c(struct Struct_02046a3c_2* arg0, struct Struct_02046a3c* arg1);
extern "C" void func_ov017_021a124c(unsigned char* arg0);

// USA: func_ov017_021a120c
extern "C" ARM void func_ov017_021a120c(GameResources* arg0, int arg1, int arg2) {
    func_ov017_021a124c((unsigned char*)arg0->unknown_ptr_array_36fc[3]);
    ((Struct_ov017_021a120c*)arg0->unknown_ptr_array_36fc[3])->unknown_20_ = arg1;
    ((Struct_ov017_021a120c*)arg0->unknown_ptr_array_36fc[3])->unknown_21_ = arg2;
    func_02046a3c((Struct_02046a3c_2*)arg0->unknown_ptr_array_36fc[0],
                        (Struct_02046a3c*)arg0->unknown_ptr_array_36fc[3]);
}
