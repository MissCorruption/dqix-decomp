#include <globaldefs.h>
#include "std_library_functions.h"

int Setup_022187a4(char* obj, void* out, int len);
int VariadicForward020c7170(char* destination, unsigned long capacity, const char* format, ...);

struct Ctx02218468 {
    char* begin;
    char* current;
    char* end;
    int capacity;
};

extern char data_ov031_02249e5c[];
extern char data_ov031_02249eb0[];

// USA: func_ov031_02218468
extern "C" ARM int func_ov031_02218468(char* obj) {
    Ctx02218468* ctx = (Ctx02218468*)(obj + 0x1f8 + 0x1800);
    int flag = *(int*)(obj + 0x1008);
    char* fmt = (flag == 0) ? data_ov031_02249e5c : data_ov031_02249eb0;

    unsigned int lenA = strlen(*(char**)(obj + 0x1124));
    unsigned int lenFmt = strlen(fmt);
    unsigned int lenB = strlen(*(char**)(obj + 0x1128));
    unsigned int total = lenA + ((lenFmt - 4) + lenB);
    total = total + 0x400;

    if (Setup_022187a4(obj, obj + 0x1f8 + 0x1800, total) != 1) {
        return 1;
    }

    int written = VariadicForward020c7170(ctx->current, ctx->capacity, fmt,
        *(char**)(obj + 0x1128), *(char**)(obj + 0x1124));
    ctx->current = ctx->current + written;
    return 0;
}
