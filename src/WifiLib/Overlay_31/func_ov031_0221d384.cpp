#include <globaldefs.h>

extern "C" THUMB int func_ov031_0221ecb4(int arg0);

extern int data_ov031_0224b070;

// USA: func_ov031_0221d384
extern "C" THUMB int func_ov031_0221d384(int arg0) {
    if (arg0 == -1) {
        *(int*)((char*)&data_ov031_0224b070 + 4) = arg0;
        return 0;
    }
    if (*(int*)((char*)&data_ov031_0224b070 + 4) != arg0) {
        *(int*)((char*)&data_ov031_0224b070 + 4) = arg0;
        return func_ov031_0221ecb4(arg0);
    }
    return 0;
}
