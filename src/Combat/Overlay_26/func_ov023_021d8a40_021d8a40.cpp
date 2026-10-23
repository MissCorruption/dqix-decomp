#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" int func_0205e488(void* arg0);
extern "C" int func_0205e4f8(void* arg0, int arg1);

// USA: func_ov026_021d8a40
extern "C" ARM int func_ov026_021d8a40(void) {
    void* var0 = func_0202ae24();
    if (func_0205e488(var0) != 0) return 1;
    return func_0205e4f8(var0, 0x63) == 0;
}
