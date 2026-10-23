#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020d9d60_88 = 0x24 };
#else
enum { Enum_020d9d60_88 = 0x58 };
#endif

#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

extern "C" void func_020397c0(void* arg0);
extern "C" void* func_020d6c00(void);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern int data_02114e20;

struct Struct_020d9b34 {
    char unknown_0_[Enum_020d9d60_88];
    SafeAllocator unknown_58_;
};

// USA: func_020d9d60
extern "C" ARM void func_020d9d60(struct Struct_020d9b34* arg0) {
    func_020397c0((void*)GameState::GetInstance()->GetUnknownGameObject());
    ClearFlags00(GetGameResources(), 0x10);
    func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0xe);
    void* var0 = arg0->unknown_58_.GetSignedAllocator();
    if (var0 == NULL) return;
    arg0->unknown_58_.Destroy();
    func_02012da4((AllocatorUnion*)&data_02114e20, var0);
}
