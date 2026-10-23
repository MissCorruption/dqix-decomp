#include <globaldefs.h>

union Struct_0203a914 { int unknown_0_; float unknown1_0_; };
struct Struct_ov001_021638cc { int unknown_0_; Struct_0203a914 unknown_4_; };

extern "C" int func_ov017_021d60f4(Struct_ov001_021638cc* arg0);
extern "C" void func_0205ebb4(void* arg0, void* arg1, int arg2);
extern "C" void func_020bc078(int* arg0);

extern int data_ov001_02165958[16];
extern int data_02108760;

// USA: func_ov001_021638cc
extern "C" ARM int func_ov001_021638cc(Struct_ov001_021638cc* arg0, int arg1) {
    int var0 = func_ov017_021d60f4(arg0);
    if ((unsigned int)var0 >= 0x10) {
        return 0;
    }
    int* var1 = &data_ov001_02165958[var0];
    if (*var1 == 0) {
        return 0;
    }
    int var2 = 0;
    if (arg1 >= 2) {
        var2 = func_ov017_021d60f4((Struct_ov001_021638cc*)((char*)arg0 + 8));
    }
    func_0205ebb4(&data_02108760, var1, var2);
    func_020bc078(var1);
    return 1;
}
