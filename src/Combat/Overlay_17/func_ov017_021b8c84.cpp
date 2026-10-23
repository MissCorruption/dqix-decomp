#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" {
}
extern "C" void* func_02012fe4(void);
extern "C" void* func_0205ec34(void);
extern "C" void func_0206461c(void* arg0, int arg1);
extern int data_ov017_021d7c3c;

struct Struct_020534ac_2;

struct Struct_ov017_021a3544_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    int unknown_8_;
};

// USA: func_ov017_021b8c84
extern "C" ARM void func_ov017_021b8c84(struct Struct_ov017_021a3544_4* arg0, void* arg1) {
    GameState::GetInstance();
    int var0 = (int)BackgroundLoader::GetInstance();
    if (arg0->unknown_8_ == -1) {
        arg0->unknown_8_ = ((BackgroundLoader*)(var0))->QueueLoadFile((const char*)((int)&data_ov017_021d7c3c), (SafeAllocator*)(0));
        return;
    }
    if (!((BackgroundLoader*)(var0))->GetTaskStatus((int)(arg0->unknown_8_))) return;
    if (((BackgroundLoader*)((struct Struct_020534ac_2*)var0))->GetDetailedTaskStatus((int)(arg0->unknown_8_)) == 2) {
        void* var1 = func_0205ec34();
        func_0206461c(var1, *(int*)((char*)func_02012fe4() + 8));
    }
    ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_8_));
    arg0->unknown_8_ = -1;
    arg0->unknown_1_ = 1;
}
