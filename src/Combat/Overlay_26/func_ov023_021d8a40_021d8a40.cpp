#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" int func_0205e488(void* obj);
extern "C" int func_0205e4f8(void* obj, int id);

// USA: func_ov026_021d8a40
extern "C" ARM int func_ov026_021d8a40(void) {
    void* data = func_0202ae24();
    if (func_0205e488(data) != 0) return 1;
    return func_0205e4f8(data, 0x63) == 0;
}
