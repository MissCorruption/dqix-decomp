#include <globaldefs.h>

extern "C" int func_020421a0();
extern "C" void func_02043204(char* arg0);
extern "C" void func_02043124(char* arg0);

// USA: func_ov011_02187460
extern "C" ARM int func_ov011_02187460(void) {
    char* var0 = (char*)func_020421a0();
    func_02043204(var0);
    func_02043124(var0);
    return 1;
}
