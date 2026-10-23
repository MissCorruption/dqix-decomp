#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
struct Struct_02108760_3;
extern "C" void func_0205ead0(struct Struct_02108760_3* arg0, int arg1, int arg2);
extern struct Struct_02108760_3 data_02108760;

// USA: func_ov001_02163970
extern "C" ARM int func_ov001_02163970(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    func_0205ead0(&data_02108760, var0, var0);
    return 1;
}
