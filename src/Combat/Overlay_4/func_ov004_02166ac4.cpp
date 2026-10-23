#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov004_02166ac4_2402 = 0x790 };
#else
enum { Enum_ov004_02166ac4_2402 = 0x962 };
#endif

#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
extern char* data_ov004_0217101c[2];
#define CurrentBase0217101c data_ov004_0217101c[1]
#else
extern char* data_ov004_0217101c;
#define CurrentBase0217101c data_ov004_0217101c
#endif
extern "C" void* func_0205ec34(void);
extern "C" int* func_02094d6c(void);
extern "C" int func_020421a0(void);

struct Struct_ov004_02166ac4 {
    unsigned char unknown_0_[0x1c];
    SafeAllocator unknown_1c_[2];
    int unknown_44_;
    unsigned char unknown_48_[8];
    unsigned char unknown_50_;
    unsigned char unknown_51_[0x66];
    int unknown_b8_;
};

// USA: func_ov004_02166ac4
extern "C" ARM int func_ov004_02166ac4() {
    Struct_ov004_02166ac4* var0 = (Struct_ov004_02166ac4*)CurrentBase0217101c;
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    int var2 = var0->unknown_44_;
    var1->RemoveTask(var2);
    var0->unknown_44_ = -1;
    var0->unknown_1c_[1].Destroy();
    var0->unknown_1c_[0].Destroy();
    char* var3 = (char*)func_0205ec34();
    memcpy(var3 + 0x2cc, ((Struct_ov004_02166ac4*)CurrentBase0217101c)->unknown_51_, 0x66);
    int* var4 = func_02094d6c();
    *(int*)((char*)var4 + 0xa0) = ((Struct_ov004_02166ac4*)CurrentBase0217101c)->unknown_b8_;
    char* var5 = (char*)func_020421a0();
    *(unsigned char*)(var5 + 0x1000 + Enum_ov004_02166ac4_2402) = 0;
    return 0;
}
