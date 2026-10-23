#include <globaldefs.h>

extern "C" int func_020421a0();
extern "C" void func_02043204(char* obj);
extern "C" void func_02043124(char* obj);

// USA: func_ov011_02187460
extern "C" ARM int func_ov011_02187460(void) {
    char* obj = (char*)func_020421a0();
    func_02043204(obj);
    func_02043124(obj);
    return 1;
}
