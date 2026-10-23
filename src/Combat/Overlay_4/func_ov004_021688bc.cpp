#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02011b50(void* arg0, int arg1);

// USA: func_ov004_021688bc
extern "C" ARM int func_ov004_021688bc(void) {
    func_02011b50(GameState::GetInstance(), 2);
    return 0;
}
