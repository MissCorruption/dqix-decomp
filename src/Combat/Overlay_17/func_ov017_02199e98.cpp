#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02038598_4;
struct Struct_02015438;
struct Struct_02018300_3;

extern "C" void func_020397c0(void* arg0);
extern "C" void* func_020d6c00(void);
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" int func_02046b24(struct Struct_02015438** arg0);
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);
extern "C" void func_ov017_02199780(void* arg0);

#if defined(jpn)
static const int kActive=0x3e60, kList=0x4ec;
#else
static const int kActive=0x4080, kList=0x6fc;
#endif

// USA: func_ov017_02199e98
extern "C" ARM void func_ov017_02199e98(void* arg0) {
    if (*(int*)((char*)arg0 + kActive) == 0) return;
    GameObject* var0 = GameState::GetInstance()->GetUnknownGameObject();
    func_020397c0(var0);
    func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x400);
    func_ov017_02199780(arg0);
    struct Struct_02015438** var1 = *(struct Struct_02015438***)((char*)arg0 + 0x3000 + kList);
    int var2 = func_02046b24(var1);
    if (var2 != 0xa && var2 != 4 && var2 != 3 && var2 != 0x21 && var2 != 0x24) return;
    func_020397cc((struct Struct_02018300_3*)var0, 1);
}
