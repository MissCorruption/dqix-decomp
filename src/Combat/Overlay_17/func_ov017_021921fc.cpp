#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);
struct Vector3i;
struct Struct_02033834;
extern "C" void func_02033874(struct Struct_02033834* arg0, int arg1);
struct Struct_02010604;
extern "C" int func_02033b88(struct Struct_02010604* arg0, int arg1);
extern "C" void func_02039d24(unsigned char* arg0);
extern "C" unsigned char func_020100b0(GameState* arg0);
extern "C" void func_02039d48(unsigned char* arg0);

// USA: func_ov017_021921fc
extern "C" ARM void func_ov017_021921fc(int* arg0, int arg1, int arg2) {
    unsigned char* var0;
    GameState* var1 = GameState::GetInstance();
    unsigned char* var2 = (unsigned char*)func_02010828(var1);
    var0 = var2 + 0x378;
    int var3 = 0;
    var0 = var0 + 0xc00;
    for (; var3 < var2[0xf7c]; var3++) {
        GameObject* var4 = var1->GetPartyMemberByIndex(var0[var3]);
        if (var4 != NULL) {
            *(Vector3i*)(&var4->obj3D_.position_.x) = *(Vector3i const*)arg0;
            func_02033874((struct Struct_02033834*)var4, arg1);
            if (arg2 != 0) {
                func_02033b88((struct Struct_02010604*)var4, 0);
                *(unsigned short*)((char*)var4 + 0xb2) = 0;
                func_02039d24((unsigned char*)var4);
            }
            if (var0[var3] != func_020100b0(var1)) {
                func_02039d48((unsigned char*)var4);
            }
        }
    }
}
