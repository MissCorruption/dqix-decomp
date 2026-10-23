#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void* func_0202ae18(void);
extern "C" void* func_0202ae24(void);
extern "C" void* func_020e2ff8(void);
extern "C" void* func_020e3580(void);
extern "C" int func_0202b000(void* arg0);
extern "C" void func_ov017_021c37a4(void);
extern "C" void func_0202c778(unsigned char* arg0);
extern "C" int func_0202b7ec(void* arg0);
extern "C" void func_0205e22c(void* arg0);
struct Struct_020e3004;
extern "C" void func_020e3004(struct Struct_020e3004* arg0);
struct Struct_020e358c;
extern "C" void func_020e358c(struct Struct_020e358c* arg0);
extern "C" void func_ov017_02195748(unsigned char* arg0);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_0202c360(void* arg0, int arg1);
extern "C" void func_0202b2f0(void* arg0);
extern "C" void func_0202b828(unsigned char* arg0);
extern "C" void func_020d84dc(void);
extern "C" void func_ov017_02191108(int, int, int, int, int);
extern "C" void func_ov017_02191234(int arg0);
extern "C" void func_0202c288(void* arg0);
extern "C" ARM void func_ov017_021972cc(char* arg0);
extern "C" void func_ov017_02195520(void* arg0);

// USA: func_ov017_021c35ac
extern "C" ARM void func_ov017_021c35ac(void) {
    GameState* var0 = GameState::GetInstance();
    int var1 = ((int)GetGameResources());
    void* var2 = func_0202ae18();
    void* var3 = func_0202ae24();
    void* var4 = func_020e2ff8();
    void* var5 = func_020e3580();

    if (func_0202b000(var2) != 0) {
        func_ov017_021c37a4();
        return;
    }

#if defined(jpn)

#else
    func_0202c778((unsigned char*)var2);
#endif

    func_0202b7ec(var2);
    func_0205e22c(var3);
    func_020e3004((struct Struct_020e3004*)var4);
    func_020e358c((struct Struct_020e358c*)var5);
    func_ov017_02195748((unsigned char*)var1);

    GameObject* var6 = var0->GetProtagonist();
    func_02053c6c((unsigned char*)var6);
    int var7 = *(int*)((char*)var6 + 0x134);
    func_0202c360(var2, var7);
    func_0202b2f0(var2);
    func_0202b828((unsigned char*)var2);
    ClearFlags00((GameResources*)var1, 2);
    func_020d84dc();
    func_ov017_02191108(var1, 1, 1, 1, 1);
    func_ov017_02191234(var1);
    func_0202c288(var2);
    func_ov017_021972cc((char*)var1);
    func_ov017_02195520((void*)var1);
}
