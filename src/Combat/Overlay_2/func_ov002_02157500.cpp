#include <globaldefs.h>

extern "C" int GetInventoryItemByID(void* arg0);

struct Struct_0201099c_10;
struct Struct_0201099c_9;
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);

#if defined(jpn)
#define CONTAINER_02157500 0x750
#else
#define CONTAINER_02157500 0x3ec + 0x400
#endif

// USA: func_ov002_02157500
extern "C" ARM int func_ov002_02157500(char* arg0, int, int) {
    int var0 = GetInventoryItemByID(arg0);
    if (var0 < 0) {
        return 0;
    }
    struct Struct_0201099c_9* var1 = func_020dedd0((struct Struct_0201099c_10*)(arg0 + CONTAINER_02157500), var0);
    if (var1 != NULL) {
        unsigned int var2 = *(unsigned int*)((char*)var1 + 8);
        return (int)((var2 << 16) >> 30);
    }
    return 0;
}
