#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x1fa7
#else
#define REGION_OFFSET_0 0x1d6f
#endif


struct Struct_0201099c_10;
struct Struct_0201099c_9;
extern "C" Struct_0201099c_9* func_020dedd0(Struct_0201099c_10* arg0, int arg1);

// USA: func_ov000_021815e4
extern "C" ARM struct Struct_0201099c_9* func_ov000_021815e4(char* arg0) {
    signed char var0 = *(signed char*)(arg0 + REGION_OFFSET_0);
    short var1 = *(short*)(arg0 + var0 * 2 + 0x26);
    return func_020dedd0((Struct_0201099c_10*)(arg0 + 0x100), var1);
}
