#include <globaldefs.h>

#if defined(jpn)
#define FLAG_OFFSET_02174890 0xfba
#define CONTAINER_OFFSET_02174890 0x818
#else
#define FLAG_OFFSET_02174890 (0x1000 + 0x3e)
#define CONTAINER_OFFSET_02174890 0x89c
#endif

struct Struct_0207fd88;
extern "C" void func_0207fd88(struct Struct_0207fd88* arg0);
struct Struct_020e2834;
extern "C" void func_020e2834(struct Struct_020e2834* arg0);

// USA: func_ov003_02174890
extern "C" ARM void func_ov003_02174890(char* arg0) {
    if (*(unsigned char*)(arg0 + FLAG_OFFSET_02174890) == 0) return;
    struct Struct_0207fd88* var0 = *(struct Struct_0207fd88**)(arg0 + CONTAINER_OFFSET_02174890);
    func_0207fd88(var0);
    struct Struct_020e2834* var1 = *(struct Struct_020e2834**)arg0;
    if (var1 == NULL) return;
    func_020e2834(var1);
}
