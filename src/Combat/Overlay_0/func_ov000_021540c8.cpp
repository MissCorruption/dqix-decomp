#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "GameState/GameState.h"

extern "C" void func_ov000_021540fc(void*, int, int, int);

// USA: func_ov000_021540c8
extern "C" ARM void func_ov000_021540c8(void* arg0, void* arg1, int arg2) {
    unsigned char* var0 = (unsigned char*)arg1;
    GameState::GetInstance();
    func_020797dc();
    int* var1 = *(int**)(var0 + 0x10);
    unsigned short var2 = *(unsigned short*)((char*)var1 + 0x20);
    unsigned short var3 = *(unsigned short*)(var0 + 0x0);
    func_ov000_021540fc(arg0, var2, var3, arg2);
}
