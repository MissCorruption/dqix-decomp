#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void func_0202ae18(void);
extern "C" int func_0202c508(void);
extern "C" void func_ov017_021a23b0(void* arg0, int arg1);

extern "C" GameObject* func_0200ffe0(GameState* arg0, int arg1);
extern "C" void func_02079710(unsigned char* arg0, int arg1, int arg2);
extern "C" int func_0207973c(unsigned char* arg0);
extern "C" int func_020797bc(unsigned char* arg0);
extern "C" void func_ov017_021d0aa8(unsigned short arg0, unsigned char arg1);
extern "C" void func_020797d0(unsigned char* arg0);

// USA: func_ov017_02192654
extern "C" ARM void func_ov017_02192654(int arg0, int arg1, unsigned char arg2) {
    void* var0 = GetGameResources();
    GameState* var1 = GameState::GetInstance();
    func_0202ae18();
    if (func_0202c508()) {
        GameObject* var2 = func_0200ffe0(var1, arg1);
        if (var2 != 0) {
            func_02079710((unsigned char*)var2, arg0, arg2);
            if (func_0207973c((unsigned char*)var2)) {
                if (func_020797bc((unsigned char*)var2)) {
                    func_ov017_021d0aa8((unsigned short)arg1, 1);
                    func_ov017_021a23b0(var0, arg1);
                }
                func_020797d0((unsigned char*)var2);
            }
        }
    } else {
        func_ov017_021d0aa8((unsigned short)arg1, arg2);
    }
}
