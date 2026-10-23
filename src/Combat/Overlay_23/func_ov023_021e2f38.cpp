#if defined(jpn)
enum {Enum_ov023_021e2f38_1584=0x568, Enum_ov023_021e2f38_292=0x120, Enum_ov023_021e2f38_288=0x11c, Enum_ov023_021e2f38_728=0x228, Enum_ov023_021e2f38_732=0x22c, Enum_ov023_021e2f38_736=0x230};
#else
enum {Enum_ov023_021e2f38_1584=0x630, Enum_ov023_021e2f38_292=0x124, Enum_ov023_021e2f38_288=0x120, Enum_ov023_021e2f38_728=0x2d8, Enum_ov023_021e2f38_732=0x2dc, Enum_ov023_021e2f38_736=0x2e0};
#endif
#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

extern "C" void* func_020d6c00(void);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4*, unsigned int);
extern "C" void func_ov005_02154198(void*);
extern "C" void* func_02012fe4(void);
extern "C" void func_02017d68(void* arg0);
extern "C" void func_ov023_021e4f18(void* arg0);
extern "C" void func_0205a494(void* arg0);
extern "C" int func_020421a0(void);
struct Struct_02045cac;
extern "C" void func_02045cac(struct Struct_02045cac*);
extern "C" void func_02043204(char*);
extern "C" void func_02043124(int);

// USA: func_ov023_021e2f38
extern "C" ARM void func_ov023_021e2f38(void* arg0) {
    char* var0 = (char*)arg0;

    func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0xf);

    int var1 = (int)BackgroundLoader::GetInstance();
    if (*(int*)(var0 + Enum_ov023_021e2f38_1584) > 0) {
        ((BackgroundLoader*)(var1))->RemoveTask((int)(*(int*)(var0 + Enum_ov023_021e2f38_1584)));
        *(int*)(var0 + Enum_ov023_021e2f38_1584) = -1;
    }

    Struct_0208cb08* var2 = func_02094a00();
    func_02094b40(var2);
    func_02094ab0(var2);

    if (*(void**)(var0 + 0x0) != 0) {
        func_ov005_02154198(*(void**)(var0 + 0x0));
        *(void**)(var0 + 0x0) = 0;
        func_02017d68(func_02012fe4());
    }

    func_ov023_021e4f18(*(void**)(var0 + Enum_ov023_021e2f38_292));
    if (*(void**)(var0 + Enum_ov023_021e2f38_288) != 0) {
        func_ov023_021e4f18(*(void**)(var0 + Enum_ov023_021e2f38_288));
    }
    if (*(void**)(var0 + 0xc8) != 0) {
        func_0205a494(*(void**)(var0 + 0xc8));
    }

    ((SafeAllocator*)(var0 + 0x90))->Destroy();
    ((SafeAllocator*)(var0 + 0x7c))->Destroy();
    ((SafeAllocator*)(var0 + 0x68))->Destroy();
    ((SafeAllocator*)(var0 + 0x54))->Destroy();
    ((SafeAllocator*)(var0 + 0x40))->Destroy();
    ((SafeAllocator*)(var0 + 0x2c))->Destroy();

    *(int*)(var0 + 0xc0) = 0;
    *(int*)(var0 + 0xc4) = 0;

    int var3 = func_020421a0();
    func_02045cac((struct Struct_02045cac*)var3);
    func_02043204((char*)var3);
    func_02043124(var3);

    *(int*)((char*)var3 + Enum_ov023_021e2f38_728) = 0;
    *(int*)((char*)var3 + Enum_ov023_021e2f38_732) = 0;
    *(int*)((char*)var3 + Enum_ov023_021e2f38_736) = 0;
}
