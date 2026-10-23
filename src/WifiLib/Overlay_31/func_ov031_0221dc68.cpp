#include <globaldefs.h>

extern "C" int func_ov031_0221d384(int);
extern "C" int func_ov031_0221dcbc(int, const void*, int);
extern "C" int func_ov031_0221de00(int, const void*, int);
extern "C" int func_ov031_0221dedc(int, const void*, int);

// USA: func_ov031_0221dc68
extern "C" THUMB int func_ov031_0221dc68(int arg0, int arg1, const void* arg2, int arg3) {
    switch (arg0) {
    case 0:
        func_ov031_0221d384(2);
        return func_ov031_0221dcbc(arg1, arg2, arg3);
    case 1:
        func_ov031_0221d384(3);
        return func_ov031_0221de00(arg1, arg2, arg3);
    case 2:
        func_ov031_0221d384(5);
        return func_ov031_0221dedc(arg1, arg2, arg3);
    default:
        return -1;
    }
}
