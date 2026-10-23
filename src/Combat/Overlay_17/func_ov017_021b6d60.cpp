#if defined(jpn)
enum { Enum_ov017_021b6d60_340 = 0x148, Enum_ov017_021b6d60_47 = 0xb, Enum_ov017_021b6d60_860 = 0x13c };
#else
enum { Enum_ov017_021b6d60_340 = 0x154, Enum_ov017_021b6d60_47 = 0x2f, Enum_ov017_021b6d60_860 = 0x35c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02052e2c;

struct Struct_ov017_021b6d60 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[Enum_ov017_021b6d60_47];
};

extern "C" void func_02086404(void* arg0);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" short* func_02052e2c(struct Struct_02052e2c* arg0);
extern "C" void func_020830cc(void* arg0, void* arg1);
extern "C" int func_0200fb8c(int* arg0);
extern "C" void func_02082828(void* arg0);
extern "C" void func_020545ac(short* arg0);
extern "C" void func_ov017_02190264(int arg0, int arg1);
extern "C" void func_ov017_02191108(int, int, int, int, int);
extern "C" void func_ov017_02191234(int arg0);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_0202c508(void* arg0);
extern "C" void func_ov017_021cc68c(int arg0);

// USA: func_ov017_021b6d60
extern "C" ARM int func_ov017_021b6d60(int arg0, void* arg1) {
    func_02086404(arg1);
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, arg0);
    if (var1 == NULL) {
        return 0;
    }
    void* var2 = (void*)func_02053c6c((unsigned char*)var1);
    short* var3 = func_02052e2c((struct Struct_02052e2c*)var1);
    if (var2 == NULL) {
        return 0;
    }
    if (var3 == NULL) {
        return 0;
    }
    func_020830cc(var2, arg1);
    int var4 = func_0200fb8c((int*)var0);
    func_02082828(var2);
    short* var5 = *(short**)((char*)var1 + Enum_ov017_021b6d60_340);
    if (var5 != NULL) {
        func_020545ac(var5);
    }
    func_ov017_02190264(var4, arg0);
    func_ov017_02191108(var4, 1, 1, 1, 1);
    func_ov017_02191234(var4);
    struct Struct_ov017_021b6d60* var6 = (struct Struct_ov017_021b6d60*)(((char*)var4 + Enum_ov017_021b6d60_860) + 0x4000);
    var6 += arg0;
    var6->unknown_0_ = 0;
    void* var7 = func_0202ae18();
    if (func_0202b7d8((int*)var7)) {
        if (func_0202c508(var7)) {
            func_ov017_021cc68c(arg0);
        }
    }
    return arg1 != NULL;
}
