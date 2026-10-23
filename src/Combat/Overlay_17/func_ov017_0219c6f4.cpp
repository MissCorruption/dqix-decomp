#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0200fd0c(GameState* arg0);
extern "C" void func_02070378(char* arg0);
struct Vector3i;

// USA: func_ov017_0219c6f4
extern "C" ARM void* func_ov017_0219c6f4(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    char* var1 = (char*)func_0200fd0c(var0);
    func_02070378(var1);

    *(short*)(var1 + 0x0) = *(int*)(arg0 + 0x1c);
    *(Vector3i*)((int*)(var1 + 0x10)) = *(Vector3i const*)((int*)(arg0 + 0x20));

    *(short*)(var1 + 0x1c) = *(short*)(arg0 + 0x50);
    *(unsigned char*)(var1 + 0xb) = *(int*)(arg0 + 0x6c);
    *(Vector3i*)((int*)(var1 + 0x30)) = *(Vector3i const*)((int*)(arg0 + 0x20));

    *(Vector3i*)((int*)(var1 + 0x3c)) = *(Vector3i const*)((int*)(arg0 + 0x2c));
    *(Vector3i*)((int*)(var1 + 0x48)) = *(Vector3i const*)((int*)(arg0 + 0x38));
    *(Vector3i*)((int*)(var1 + 0x54)) = *(Vector3i const*)((int*)(arg0 + 0x44));

    *(unsigned char*)(var1 + 0xc) = 1;
    *(unsigned char*)(var1 + 0x7) = 1;

    return var1;
}
