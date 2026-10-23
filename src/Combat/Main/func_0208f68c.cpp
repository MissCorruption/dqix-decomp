#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"

extern "C" void* func_02012fe4(void* arg0);
struct Vector3i;

extern int data_020e8d3c;

struct Struct_0208f68c { int unknown_0_, unknown_4_, unknown_8_; };

// USA: func_0208f68c
extern "C" ARM void func_0208f68c(unsigned char* arg0) {
    if (arg0[0xb4] != 0) {
        GameState* var0 = GameState::GetInstance();
        void* var1 = func_02012fe4(var0);
        unsigned short var2 = *(unsigned short*)var1;
        GrottoStruct* var3 = var0->GetGrottoStruct();
        Struct_0208f68c var4 = *(Struct_0208f68c*)&data_020e8d3c;
        Struct_0208f68c var5 = *(Struct_0208f68c*)((char*)var3 + 0x10);
        int var6 = *(int*)((char*)var3 + 0xc);
        if (var6 != 0 && var3->unknown_0[0] != 0) {
            if (var6 == var2) {
                *(Vector3i*)((int*)(arg0 + 0x4c)) = *(Vector3i const*)((int*)&var5);
                ((Object3D*)(arg0 + 8))->SetScale((Vector3i const*)&var4);
                ((Object3D*)(arg0 + 8))->MaybeSetBCFGAnimation(0, 0);
                ((Object3D*)(arg0 + 8))->MakeVisible();
                arg0[0xb6] = 1;
            }
            arg0[0xb5] = 0;
        }
    }
}
