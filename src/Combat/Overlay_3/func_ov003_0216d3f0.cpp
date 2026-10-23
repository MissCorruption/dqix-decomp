#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0216d3f0_2456 = 0x868 };
enum { Enum_ov003_0216d3f0_2464 = 0x870 };
#else
enum { Enum_ov003_0216d3f0_2456 = 0x998 };
enum { Enum_ov003_0216d3f0_2464 = 0x9a0 };
#endif

#if defined(jpn)
extern "C" void func_ov003_0216d8d4(char*, int);
#endif

extern "C" int func_020421a0();
#if !defined(jpn)
extern "C" void func_ov003_0216d8d4(char* arg0, int arg1, int arg2, int arg3, int arg4);
#endif
extern "C" void func_02043204(char* arg0);

// USA: func_ov003_0216d3f0
extern "C" ARM void func_ov003_0216d3f0(char* arg0) {
    char* var0 = (char*)func_020421a0();
    short var1 = *(short*)(arg0 + 6);
    if (var1 == 0) {
#if defined(jpn)
        func_ov003_0216d8d4(arg0, 0x1c);
#else
        func_ov003_0216d8d4(arg0, 0x1c, -1, -1, -1);
#endif
        *(int*)(var0 + Enum_ov003_0216d3f0_2456) = 1;
        *(short*)(arg0 + 6) = 1;
        return;
    }
    switch (var1) {
    case 1:
        if (*(int*)(var0 + Enum_ov003_0216d3f0_2464) != 0) break;
        if (*(int*)(var0 + Enum_ov003_0216d3f0_2456) != 0) break;
        func_02043204(var0);
        *(short*)(arg0 + 4) = 7;
        *(short*)(arg0 + 6) = 0;
        break;
    }
}
