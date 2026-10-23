#include <globaldefs.h>

extern "C" void func_020696bc(int a, int* out, int c);
extern "C" int func_02042648(int idx);

// USA: func_0206b894
extern "C" ARM int func_0206b894(int input, int* target, int c) {
    int val;
    func_020696bc(input, &val, 1);
    *target = val - (func_02042648(c) + 1);
    return 0;
}
