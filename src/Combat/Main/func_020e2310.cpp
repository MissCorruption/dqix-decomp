#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020e12a8;
extern "C" void func_020e12a8(struct Struct_020e12a8* arg0, short arg1, short arg2, short arg3, short arg4);

extern "C" int func_020420e8(int, unsigned char);
#if defined(jpn)
extern "C" void func_0205b234(void*, short, short, int, unsigned char, unsigned char);
#else
extern "C" int func_0205b234(void*, short, short, int, unsigned char, unsigned char);
#endif

// USA: func_020e2310
extern "C" ARM void func_020e2310(char* arg0, int arg1, int arg2, int arg3, int arg4, unsigned char arg5, unsigned char arg6)
{
    if (arg1 >= 0 && arg1 < 3) {
        #if defined(jpn)
        int var0 = strlen((char*)arg4);
        int var1 = arg5;
        int var2 = arg5;
#else
        int var0 = func_020420e8(arg4, arg6);
        int var1 = 1;
        int var2 = 0xc;
#endif
        func_020e12a8((struct Struct_020e12a8*)(arg0 + 0xa + arg1 * 8), arg2, arg3, arg2 + var0 * var1, arg3 + var2);
    }
    if ((signed char)arg0[8] <= arg1) {
        arg0[8] = arg1 + 1;
    }
    void **var3 = *(void***)(arg0 + 4);
    func_0205b234(var3[1], arg2, arg3, arg4, arg5, arg6);
}
