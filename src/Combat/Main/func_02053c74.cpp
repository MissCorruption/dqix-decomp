#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void* func_020108f0(void* obj, int value);
extern "C" void* func_02010954(char* base);
extern "C" void func_02053c4c(char* obj, char* p);
extern "C" void func_020c9be0(void);

// USA: func_02053c74
extern "C" ARM void func_02053c74(char* obj, int idx) {
    GameState* bs = GameState::GetInstance();
    char* rec = (char*)func_020108f0(bs, idx);
    if (!rec) {
        rec = (char*)func_02010954((char*)bs);
        if (rec) {
            *(short*)(rec + 0x568) = idx;
        } else {
            func_020c9be0();
        }
    }
    func_02053c4c(obj, rec);
}
