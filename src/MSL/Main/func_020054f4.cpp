#include <globaldefs.h>

#define INT_MAX 0x7fffffff
#define ERANGE  34
#define LDBL_MIN 2.2250738585072014e-308
#define LDBL_MAX 1.7976931348623157e+308

typedef struct {
    char* NextChar;
    int NullCharDetected;
} __InStrCtrl;

extern "C" int func_02003d58(void* isc, int c, int action);
extern "C" long double func_020042a8(int max_width, int (*ReadProc)(void*, int, int), void* ReadProcArg,
                                     int* chars_scanned, int* overflow);
extern "C" double func_02008f3c(double x);
extern int data_020f3390;

// USA: func_020054f4
extern "C" ARM long double func_020054f4(const char* str, char** end) {
    long double value, abs_value;
    int count, overflow;
    __InStrCtrl isc;

    isc.NextChar = (char*)str;
    isc.NullCharDetected = 0;

    value = func_020042a8(INT_MAX, &func_02003d58, (void*)&isc, &count, &overflow);

    if (end)
        *end = (char*)str + count;

    abs_value = func_02008f3c(value);

    if (overflow || (value != 0.0 && (abs_value < LDBL_MIN || abs_value > LDBL_MAX)))
        data_020f3390 = ERANGE;

    return value;
}
