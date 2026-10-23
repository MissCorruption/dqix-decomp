#include <globaldefs.h>

struct Struct_02075db0;
extern "C" int func_02075db0(struct Struct_02075db0* arg0, int arg1, int arg2);

// USA: func_ov023_021fb818
extern "C" ARM int func_ov023_021fb818(void* arg0) {
    unsigned char var0 = *(unsigned char*)((char*)arg0 + 0xb0);
    int var1 = 0;
    int var2 = 0;
    if (var0 != 0) {
        var1 = 1;
        var2 = var1;
    }
#if !defined(jpn)
    else {
        unsigned char var3 = *(unsigned char*)((char*)arg0 + 0xb1);
        if (var3 != 0) {
            var1 = var1 - 1;
            var2 = 1;
        }
    }

#endif
    func_02075db0((struct Struct_02075db0*)((char*)arg0 + 0x20),
        *(int*)((char*)arg0 + 0xa8) + var1,
        *(int*)((char*)arg0 + 0xac) + var2);
    *(unsigned char*)((char*)arg0 + 0xb0) = 0;
#if !defined(jpn)
    *(unsigned char*)((char*)arg0 + 0xb1) = 0;
#endif
    return *(int*)((char*)arg0 + 0x1c);
}
