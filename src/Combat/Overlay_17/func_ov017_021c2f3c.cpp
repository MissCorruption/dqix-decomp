#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02057924(void);
extern "C" void* func_0202ae18(void);
extern "C" void func_020531f0(void* arg0);
struct Struct_02018300_3;
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);
struct Struct_02039df4;
extern "C" void func_ov017_021c2b6c(void* arg0);
extern "C" void func_ov017_021c2e50(char* arg0);
extern "C" void func_ov017_021c2ea4(unsigned char* arg0);
extern "C" int func_02058618(void* arg0);
unsigned long long GetCurrentTimestamp(void);
extern "C" unsigned long long _ll_udiv(unsigned long long arg0, unsigned int arg1, unsigned int arg2);
extern "C" int func_0202b7d8(int* arg0);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_ov017_021c310c(void* arg0);
extern "C" void func_020a0c0c(void);

// USA: func_ov017_021c2f3c
#pragma optimize_for_size off
extern "C" ARM void func_ov017_021c2f3c(unsigned char* arg0) {
    GameObject* var0 = GameState::GetInstance()->GetUnknownGameObject();
    void* var1 = func_02057924();
    void* var2 = func_0202ae18();

    if (var0 == 0) arg0[0x8c] = 3;
    unsigned char var3 = arg0[0x8c];
    if (var3 == 0) {
        if (var0 != 0) {
            func_020531f0(var0);
            func_020397cc((struct Struct_02018300_3*)var0, 1);
        }

        if (((Object3D*)((struct Struct_02039df4*)var0))->GetField06() == 0x2710 ||
            ((Object3D*)((struct Struct_02039df4*)var0))->GetField06() == 0x2774) {
            arg0[0x8c] = 2;
            return;
        }

        if (arg0[0x94] == 0) { arg0[0x8c] = 1; return; }
        if (arg0[0x94] != 1) return;
        if (func_0202b7d8((int*)var2) != 0) {
            arg0[0x8c] = 2;
            return;
        }
        arg0[0x8c] = 3;
        return;
    }

    if (var3 == 1) {
        func_ov017_021c2b6c(arg0);
        if (*(void**)(arg0 + 0x90) != 0) arg0[0x8c] = 2;
        return;
    }
    if (var3 == 2) {
        if (arg0[0x94] == 0) {
            func_ov017_021c2e50((char*)arg0);
            return;
        }
        if (arg0[0x94] == 1) func_ov017_021c2ea4(arg0);
        return;
    }
    if (var3 != 3) return;

    if (*(void**)(arg0 + 0x90) != 0) {
        if (func_02058618(var1) > 0) return;
    }

    unsigned long long var4 = GetCurrentTimestamp() - *(unsigned long long*)(arg0 + 0x98);
    unsigned long long var5 = _ll_udiv(var4 << 6, 0x82ea, 0);
    if (var5 < 0x4b0) return;

    arg0[0x1] = 1;
    func_ov017_021c310c(arg0);
    if (arg0[0x96] != 0) func_020a0c0c();
    if (var0 != 0) func_020397c0(var0);
}
