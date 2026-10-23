#include <globaldefs.h>
extern "C" void func_02028048(int, int, struct Struct_02013fb4*, int);

struct Struct_02028104;
extern "C" void func_0202811c(struct Struct_02028104* arg0);

// USA: func_02028104
extern "C" ARM void func_02028104(struct Struct_02028104* arg0, int arg1, int arg2, int arg3) {
    func_02028048((int)(arg0), (int)(arg1), (struct Struct_02013fb4*)(arg2), (int)(arg3));
    func_0202811c(arg0);
}
