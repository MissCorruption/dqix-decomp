#include <globaldefs.h>

extern "C" int func_020becd4(void* arg0);
extern "C" int func_0203ad88(void* arg0, void* arg1, int arg2);
extern "C" int func_0203ad14(void* arg0, int arg1, void* arg2, int arg3);
typedef int (*Type_0203ae4c)(void*, short, void*, int);

// USA: func_0203ae4c
extern "C" ARM void func_0203ae4c(void* arg0, int arg1, void* arg2) {
    char* var0 = (char*)arg0;

    if (*(void**)var0 == NULL) {
        return;
    }

    {
        short var1 = *(short*)(var0 + 0xa4);
        if (var1 < 0) {
            return;
        }

        if (arg1 != 0) {
            int var2;
            short var3;
            int var4;

            if (arg2 != NULL) {
                var2 = func_020becd4(arg2);
            } else {
                var2 = func_020becd4(var0 + 0x9c);
            }

            var3 = *(short*)(var0 + 0xa4);
            var4 = func_0203ad88(arg0, arg2, 0);
            *(int*)(var0 + 0xa8) = var4;
            *(short*)(var0 + 0xa4) = var3;

            if (*(int*)(var0 + 0xa8) == var2) {
                *(short*)(var0 + 0xa4) = -1;
            }
        } else {
            int var5 = *(int*)(var0 + 0xa8);
            if (var5 != 0) {
                ((Type_0203ae4c)func_0203ad14)(arg0, var1, arg2, var5);
            }
        }
    }
}
