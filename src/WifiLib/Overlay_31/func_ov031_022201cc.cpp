#include <globaldefs.h>


extern "C" THUMB void func_ov031_02220190(int arg0, int arg1, int arg2);

// USA: func_ov031_022201cc
extern "C" THUMB void func_ov031_022201cc(int arg0, int arg1, int arg2, int arg3) {
    func_ov031_02220190(arg0, arg2, arg3);
}
