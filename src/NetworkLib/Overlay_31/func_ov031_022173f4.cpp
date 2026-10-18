#include <globaldefs.h>
#include "std_library_functions.h"

struct RequestSettings { int unknown0, mode; void* unknown8; unsigned long long unknownPair; };
extern RequestSettings data_ov031_0224e5e8;
extern char data_ov031_02249c48[], data_ov031_02249c54[], data_ov031_02249c5c[], data_ov031_02249c64[];
extern char data_ov031_02249c6c[], data_ov031_02249c70[], data_ov031_02249c78[], data_ov031_0224e5f4[];
extern int data_ov031_0224e610;
extern "C" int func_ov031_02218604(void*, const void*, const void*, int);
extern "C" int func_ov031_02217604(char*, const void*);
extern "C" int func_ov031_022178b4(void*, char*, int);
extern "C" int func_02005aa8(unsigned short*);

// USA: func_ov031_022173f4
extern "C" ARM int func_ov031_022173f4(void* request, char* value, unsigned short* wideValue) {
    char buffer[0x94];
    if (data_ov031_0224e5e8.unknownPair == 0) {
        if (func_ov031_02218604(request, data_ov031_02249c54, data_ov031_02249c48, strlen(data_ov031_02249c48))) return 8;
    } else {
        if (func_ov031_02218604(request, data_ov031_02249c54, data_ov031_02249c5c, strlen(data_ov031_02249c5c))) return 8;
        if (func_ov031_02218604(request, data_ov031_02249c64, value, strlen(value))) return 8;
    }
    if (!func_ov031_02217604(buffer, data_ov031_0224e5f4)) return 5;
    if (!func_ov031_022178b4(request, buffer, data_ov031_0224e610)) return 8;
    if (data_ov031_0224e5e8.mode == 1) {
        if (func_ov031_02218604(request, data_ov031_02249c70, data_ov031_02249c6c, strlen(data_ov031_02249c6c))) return 8;
    }
    if (func_02005aa8(wideValue)) {
        if (func_ov031_02218604(request, data_ov031_02249c78, wideValue, func_02005aa8(wideValue) * 2)) return 8;
    }
    return 0;
}
