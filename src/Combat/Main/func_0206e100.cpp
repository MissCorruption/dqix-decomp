#include <globaldefs.h>

extern "C" void func_0206e164(int arg0, int arg1, int arg2);

// USA: func_0206e100
extern "C" ARM void func_0206e100(int arg0, int arg1) {
    if (arg1 >= 0xcc) {
        return;
    }
    if (arg1 < 0) {
        return;
    }
    func_0206e164(arg0, arg1, 3);
}
