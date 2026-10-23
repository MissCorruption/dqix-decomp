#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" ARM int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" void* func_ov017_021b2164(void);
extern "C" void func_ov011_02184a40(void* arg0, int arg1);

// USA: func_ov011_02186808
extern "C" ARM int func_ov011_02186808(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    if (var0 <= 0) return 0;
    func_ov011_02184a40(func_ov017_021b2164(), var0);
    return 1;
}
