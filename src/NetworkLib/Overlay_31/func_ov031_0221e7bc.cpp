#include <globaldefs.h>

extern "C" int func_020c7e0c(void* arg0, int arg1, int arg2);
extern int data_ov031_0224f4e0;

// USA: func_ov031_0221e7bc
extern "C" THUMB int func_ov031_0221e7bc(int arg0) {
    return func_020c7e0c(&data_ov031_0224f4e0, arg0, 0);
}
