#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov017_021a7328(char* arg0);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);

// USA: func_ov017_021a72f4
extern "C" ARM void func_ov017_021a72f4(void* arg0, int arg1) {
    GameResources* var0 = GetGameResources();
    Struct_0201bdac_2* var1 = (Struct_0201bdac_2*)var0->unknown_ptr_array_36fc[0];
    char* var2 = (char*)var0->unknown_ptr_array_3afc[38];
    func_ov017_021a7328(var2);
    *(int*)(var2 + 0xc) = arg1;
    func_020469b4(var1, (Struct_0201bdac*)var2);
}
