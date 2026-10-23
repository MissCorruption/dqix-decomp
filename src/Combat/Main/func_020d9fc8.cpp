#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

extern "C" void func_020397c0(void* arg0);
extern "C" void* func_020d6c00(void);
struct Struct_02038598_4 {
    unsigned int unknown_0_;
};
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);

struct Struct_020d9e44 {
    char unknown_0_[0xc];
    int unknown_c_[1];
};

// USA: func_020d9fc8
extern "C" ARM void func_020d9fc8(struct Struct_020d9e44* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    int var1;
    for (var1 = 0; var1 < 1; var1++) {
        if (arg0->unknown_c_[var1] != -1) {
            ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_c_[var1]));
            arg0->unknown_c_[var1] = -1;
        }
    }
    func_020397c0(GameState::GetInstance()->GetUnknownGameObject());
    func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x1e);
    *((unsigned char*)arg0 + 1) = 1;
}
