#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"
#include "Resource/GameResources.h"

extern "C" void* func_02012fe4(void* arg0);
struct Vector3i;
extern "C" void* func_0202ae18(void);
extern int data_020e8d48;

struct Struct_0208f748 { int unknown_0_, unknown_4_, unknown_8_; };
struct Struct_0208f748_2 { char unknown_0_[0xc]; unsigned char unknown_c_0_:4; };

// USA: func_0208f748
extern "C" ARM int func_0208f748(unsigned char* arg0) {
    void* var0 = func_02012fe4(arg0);
    Struct_0208f748_2* var1 = (Struct_0208f748_2*)*(void**)((char*)var0 + 8);
    if (var1->unknown_c_0_ != 0) return 0;
    GameState* var2 = GameState::GetInstance();
    var2->GetProtagonist();
    ((int)GetGameResources());
    func_0202ae18();
    GrottoStruct* var3 = var2->GetGrottoStruct();
    Struct_0208f748 var4;
    *(Vector3i*)((int*)&var4) = *(Vector3i const*)(&var3->entranceX);
    Struct_0208f748 var5 = *(Struct_0208f748*)&data_020e8d48;
    *(Vector3i*)((int*)(arg0 + 0x4c)) = *(Vector3i const*)((int*)&var4);
    ((Object3D*)(arg0 + 8))->SetScale((Vector3i const*)&var5);
    ((Object3D*)(arg0 + 8))->MaybeSetBCFGAnimation(0, 0);
    ((Object3D*)(arg0 + 8))->MakeVisible();
    arg0[0xb6] = 1;
    return 1;
}
