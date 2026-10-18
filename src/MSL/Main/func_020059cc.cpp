#include <globaldefs.h>

struct StreamCursor02003d58 {
    char* cursor;
    int field4;
};

extern "C" int func_02003d58(StreamCursor02003d58* obj, int val, int cmd);
extern "C" unsigned long func_020055e4(int base, int max_width,
                                       int (*read)(StreamCursor02003d58*, int, int),
                                       StreamCursor02003d58* arg, int* count,
                                       int* negative, int* overflow);

extern int data_020f3390;

// USA: func_020059cc
extern "C" ARM long func_020059cc(const char* str, char** end, int base) {
    unsigned long value;
    int count, negative, overflow;
    StreamCursor02003d58 isc;

    isc.cursor = (char*)str;
    isc.field4 = 0;

    value = func_020055e4(base, 0x7fffffff, func_02003d58, &isc, &count, &negative, &overflow);

    if (end)
        *end = (char*)str + count;

    if (overflow || (!negative && value > 0x7fffffff) || (negative && value > 0x80000000)) {
        value = negative ? 0x80000000 : 0x7fffffff;
        data_020f3390 = 0x22;
    } else if (negative) {
        value = -value;
    }

    return value;
}
