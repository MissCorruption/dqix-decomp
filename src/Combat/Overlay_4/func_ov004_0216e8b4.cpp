#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_02012028(void* arg0, unsigned char arg1);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern unsigned char data_ov004_02171034[];

// USA: func_ov004_0216e8b4
extern "C" ARM int func_ov004_0216e8b4(void* arg0) {
#if defined(jpn)
    enum { Enum_ov004_0216e8b4_2 = 0 };
#else
    enum { Enum_ov004_0216e8b4_2 = 2 };
#endif
    data_ov004_02171034[Enum_ov004_0216e8b4_2] = 1;
    func_02012028(GameState::GetInstance(), 0);
    func_ov011_021848a0(arg0, 0x3e7);
    return 0;
}
