#include <globaldefs.h>

struct Struct_020de34c;
extern "C" int func_020de34c(struct Struct_020de34c* arg0, int arg1, int arg2);

struct Struct_020de334;
extern "C" int func_020de334(struct Struct_020de334* arg0, int arg1, int arg2, int arg3);

struct Struct_020de31c;
extern "C" int func_020de31c(struct Struct_020de31c* arg0, int arg1);

struct Struct_020de36c;
extern "C" int func_020de36c(struct Struct_020de36c* arg0, int arg1, int arg2, int arg3);

// USA: func_020de3f4
#pragma optimize_for_size off
extern "C" ARM void func_020de3f4(int arg0, int arg1, int arg2, int arg3, char* arg4, char* arg5, char* arg6, void** arg7) {
    *arg4 = (char)arg2;
    *arg5 = (char)-1;
    *arg6 = (char)arg3;
    *arg7 = 0;

    if (arg0 != 0) {
        switch (arg1) {
            case 0:
                *arg4 = 0;
                *arg5 = 7;
                break;
            case 1:
                *arg4 = 0;
                break;
            case 2:
                *arg4 = 1;
                *arg5 = 6;
                break;
            case 3:
                *arg4 = 7;
                break;
        }
    } else {
        switch (arg1) {
            case 0:
                *arg4 = 8;
                *arg5 = 9;
                break;
            case 1:
                *arg4 = 8;
                break;
            case 2:
                *arg4 = 9;
                break;
        }
    }

    if (*arg4 == -1) {
        if (*arg6 == -1) {
            *arg7 = 0;
        } else {
            *arg7 = (void*)&func_020de334;
        }
    } else {
        if (*arg6 == -1) {
            if (*arg5 == -1) {
                *arg7 = (void*)&func_020de31c;
            } else {
                *arg7 = (void*)&func_020de34c;
            }
        } else {
            *arg7 = (void*)&func_020de36c;
        }
    }
}
