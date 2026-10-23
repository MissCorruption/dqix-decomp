#include <globaldefs.h>

struct GameState;
extern "C" ARM int func_020ac78c(void* arg0);

// USA: func_02011804
extern "C" ARM unsigned char func_02011804(GameState* arg0) {
    unsigned char var0;
    func_020ac78c(&var0);
    return var0;
}
