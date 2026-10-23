#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020795cc(unsigned char* arg0);
struct Vector3i;
int fix32ReduceAngle0To2Pi(int arg);
struct Struct_02033834;
extern "C" void func_02033874(struct Struct_02033834* arg0, int arg1);

struct Struct_0207964c {
    char unknown_0_[0xc1];
    unsigned char unknown_c1_0_ : 2;
};

// USA: func_0207964c
extern "C" ARM void func_0207964c(unsigned char* arg0) {
    if (arg0[0x17d] & 8) {
        GameState* var0 = GameState::GetInstance();
        int var1 = func_020795cc(arg0);
        unsigned char* var2 = (unsigned char*)var0->GetPartyMemberByIndex(var1);
        if (var2 != NULL) {
            if (!(((struct Struct_0207964c*)var2)->unknown_c1_0_ & 1)) {
                int var3 = ((Object3D*)var2)->GetRadius() / 4 + ((Object3D*)arg0)->GetRadius() / 2;
                Vector3fix var4 = ((Object3D*)var2)->GetPointInFront(var3);
                int var5 = *(int*)(var2 + 0x54) + 0x3244;
                int var6 = fix32ReduceAngle0To2Pi(var5);
                *(Vector3i*)((int*)(arg0 + 0x44)) = *(Vector3i const*)((int*)&var4);
                func_02033874((struct Struct_02033834*)arg0, var6);
            }
        }
    }
}
