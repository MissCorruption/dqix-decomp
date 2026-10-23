#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_021725a4_1816 = 0x614 };
enum { Enum_ov003_021725a4_1120 = 0x35c };
#else
enum { Enum_ov003_021725a4_1816 = 0x718 };
enum { Enum_ov003_021725a4_1120 = 0x460 };
#endif


extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);

// USA: func_ov003_021725a4
extern "C" ARM int func_ov003_021725a4(void* arg0, void* arg1) {
    int var0;
    unsigned int var1 = *(unsigned int*)((char*)arg1 + 0x6c);
    if (((var1 << 5) >> 31) == 0) {
        return 0;
    }
    unsigned char var2 = *((unsigned char*)arg0 + Enum_ov003_021725a4_1816);
    if (var2 == 0) {
        return 1;
    }
    for (var0 = 0; var0 < var2; var0++) {
        char* var3 = (char*)arg0 + Enum_ov003_021725a4_1120;
        if (func_02001aec(var3 + var0 * 0xe8 + 0x14, (char*)arg1 + 0x14, 6) == 0) {
            return 0;
        }
    }
    return 1;
}
