#include <globaldefs.h>

extern "C" int func_020d6884(void*, int, int, int);

// USA: func_020d6830
extern "C" ARM int func_020d6830(int arg0, unsigned short* arg1, int arg2) {
    unsigned short var0 = arg1[0];
    unsigned short var1 = arg1[1];
    int var2 = 1 << arg2;
    if (arg0 == 0) return 0;
    if (arg1 == NULL) return 0;
    if ((var0 & var2) == 0) return 0;
    if ((var1 & var2) == 0) return 0;
    return func_020d6884((void*)arg0, var0, (int)((char*)arg1 + 4), arg2);
}
