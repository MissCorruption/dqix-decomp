#include <globaldefs.h>

extern "C" int func_020a10a8(int*);

// USA: func_0202eeb4
extern "C" ARM int func_0202eeb4(char* obj) {
    int result = 1;
    int inner = 1;
    if (func_020a10a8((int*)(obj + 0x16c)) == 0) {
        if (func_020a10a8((int*)(obj + 0x194)) == 0) inner = 0;
    }
    if (inner == 0) {
        if (func_020a10a8((int*)(obj + 0x1bc)) == 0) result = 0;
    }
    return result;
}
