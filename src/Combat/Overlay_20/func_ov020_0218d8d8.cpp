#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov020_0218d8d8_1136 = 0x400 };
#else
enum { Enum_ov020_0218d8d8_1136 = 0x470 };
#endif

#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" unsigned char func_0200fb9c(char* arg0);

struct Struct_02109bf4_4;
extern "C" void func_0209c678(struct Struct_02109bf4_4* arg0, int arg1);

struct Struct_02109bf4_3;
extern "C" void func_0209c20c(struct Struct_02109bf4_3* arg0);

struct Struct_0205e8ec;
extern "C" void func_0205e8ec(struct Struct_0205e8ec* arg0);

extern AllocatorUnion data_02114e20;
extern char data_02109bf4;
extern char data_02108760;

struct Struct_ov020_0218b710_3 {
    char unknown_0_[Enum_ov020_0218d8d8_1136];
    SafeAllocator unknown_470_;
};

// USA: func_ov020_0218d8d8
extern "C" ARM void func_ov020_0218d8d8(struct Struct_ov020_0218b710_3* arg0) {
    GameState* var0 = GameState::GetInstance();
    SignedAllocatorHeader* var1 = arg0->unknown_470_.GetSignedAllocator();
    arg0->unknown_470_.Destroy();
    func_02012da4(&data_02114e20, var1);
    if (func_0200fb9c((char*)var0) == 2) {
        return;
    }
    func_0209c678((struct Struct_02109bf4_4*)&data_02109bf4, 0);
    func_0209c20c((struct Struct_02109bf4_3*)&data_02109bf4);
    func_0205e8ec((struct Struct_0205e8ec*)&data_02108760);
}
