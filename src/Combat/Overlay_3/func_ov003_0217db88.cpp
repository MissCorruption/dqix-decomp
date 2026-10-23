#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

#if defined(jpn)
enum { Enum_ov003_0217db88_144 = 0x8c };
enum { Enum_ov003_0217db88_148 = 0x90 };
enum { Enum_ov003_0217db88_152 = 0x94 };
enum { Enum_ov003_0217db88_56 = 0x34 };
enum { Enum_ov003_0217db88_164 = 0xa0 };
enum { Enum_ov003_0217db88_184 = 0xb4 };
enum { Enum_ov003_0217db88_60 = 0x38 };
enum { Enum_ov003_0217db88_204 = 0xc8 };
#else
enum { Enum_ov003_0217db88_144 = 0x90 };
enum { Enum_ov003_0217db88_148 = 0x94 };
enum { Enum_ov003_0217db88_152 = 0x98 };
enum { Enum_ov003_0217db88_56 = 0x38 };
enum { Enum_ov003_0217db88_164 = 0xa4 };
enum { Enum_ov003_0217db88_184 = 0xb8 };
enum { Enum_ov003_0217db88_60 = 0x3c };
enum { Enum_ov003_0217db88_204 = 0xcc };
#endif


extern "C" void func_0205d048(void* arg0);
struct Struct_02020cb8_3;
extern "C" void func_0204afb4(struct Struct_02020cb8_3* arg0);
struct Struct_0204c754;
extern "C" void func_0204c754(struct Struct_0204c754* arg0);
struct Struct_0205a244;
extern "C" void func_0205a244(struct Struct_0205a244* arg0);
extern "C" void func_0205a494(void* arg0);
struct Struct_0201099c_14;
extern "C" void func_020dfc6c(struct Struct_0201099c_14* arg0);

// USA: func_ov003_0217db88
extern "C" ARM void func_ov003_0217db88(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;

    func_0205d048(*(void**)(var0 + Enum_ov003_0217db88_144));

    int var1;
    for (var1 = 0; var1 < 2; var1++) {
        func_0204afb4((struct Struct_02020cb8_3*)(*(char**)(var0 + Enum_ov003_0217db88_148) + var1 * 0x20));
    }

    int var2;
    for (var2 = 0; var2 < 1; var2++) {
        func_0204c754((struct Struct_0204c754*)(*(char**)(var0 + Enum_ov003_0217db88_152) + var2 * 0xe0));
    }

    func_0205a244((struct Struct_0205a244*)(*(void**)(var0 + Enum_ov003_0217db88_56)));

    if (((SafeAllocator*)(var0 + Enum_ov003_0217db88_164))->GetSignedAllocator() != NULL) {
        ((SafeAllocator*)(var0 + Enum_ov003_0217db88_164))->Destroy();
    }
    if (((SafeAllocator*)(var0 + Enum_ov003_0217db88_184))->GetSignedAllocator() != NULL) {
        ((SafeAllocator*)(var0 + Enum_ov003_0217db88_184))->Destroy();
    }
    func_0205a494(var0 + Enum_ov003_0217db88_60);
    func_020dfc6c((struct Struct_0201099c_14*)(var0 + Enum_ov003_0217db88_204));

    volatile unsigned int* var3 = (volatile unsigned int*)0x4000000;
    *var3 = (*var3 & ~0x1f00) | ((unsigned int)*(int*)var0 << 8);
}
