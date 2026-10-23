#include <globaldefs.h>

extern "C" int func_ov000_02177330(void* arg0);
extern "C" int func_ov000_02177558(void* arg0);
extern "C" int func_ov000_02177798(void* arg0);
extern "C" int func_ov000_02177a7c(void* arg0);
extern "C" int func_ov000_02177cb8(void* arg0);
extern "C" int func_ov000_02177f28(void* arg0);
extern "C" int func_ov000_0217819c(void* arg0);
extern "C" int func_ov000_021785fc(void* arg0);
extern "C" int func_ov000_0217542c(void* arg0);
extern "C" void func_ov000_02176498(void* arg0, int arg1);
extern "C" void func_ov000_021788d8(void* arg0, int arg1, int arg2);
extern "C" int func_ov000_02178cbc(void* arg0, int arg1, int arg2);
extern "C" int func_ov000_02179128(void* arg0, int arg1, int arg2);
extern "C" int func_ov000_021795e0(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02179a14(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02179c6c(void* arg0, int arg1);
extern "C" void func_ov000_0217a0a4(void* arg0);
extern "C" void func_ov000_0217a628(void* arg0, int arg1, int arg2);

// USA: func_ov000_02177038
extern "C" ARM void func_ov000_02177038(void* arg0, int arg1, int arg2, int arg3, int arg4) {
    if (*(int*)((char*)arg0 + 0x118) == 0) {
        return;
    }
    switch (arg2) {
    case 1:
        func_ov000_02177330(arg0);
        break;
    case 2:
        func_ov000_02177558(arg0);
        break;
    case 3:
        func_ov000_02177798(arg0);
        break;
    case 4:
        func_ov000_02177a7c(arg0);
        break;
    case 5:
        func_ov000_02177cb8(arg0);
        break;
    case 6:
        func_ov000_02177f28(arg0);
        break;
    case 7:
        func_ov000_0217819c(arg0);
        break;
    case 8:
        func_ov000_021785fc(arg0);
        break;
    case 13:
        if (arg1 != 0) {
            func_ov000_02176498((void*)arg1, func_ov000_0217542c(arg0));
        }
        break;
    case 14:
        func_ov000_021788d8(arg0, arg1, arg4);
        break;
    case 15:
        func_ov000_02178cbc(arg0, arg3, arg4);
        break;
    case 16:
        func_ov000_02179128(arg0, arg3, arg4);
        break;
    case 17:
        func_ov000_021795e0(arg0, arg3, arg4);
        break;
    case 18:
    case 19:
    case 20:
        func_ov000_02179a14(arg0, arg1, arg3);
        break;
    case 21:
        func_ov000_02179c6c(arg0, arg1);
        break;
    case 23:
        func_ov000_0217a0a4(arg0);
        break;
    case 25:
        func_ov000_0217a628(arg0, arg1, arg4);
        break;
    }
}
