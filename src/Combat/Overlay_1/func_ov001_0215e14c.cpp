#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_1/EventArgs.h"

extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a2b38(void* arg0, int* arg1, int* arg2, int* arg3);
extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void func_ov001_02158f64(void* arg0, Struct_ov001_02158efc arg1, Struct_ov001_02158efc arg2, int arg3, int arg4, unsigned char arg5);

struct Struct_ov001_02165880_37 { char unknown_0_[0x24]; void* unknown_24_; };
extern Struct_ov001_02165880_37 data_ov001_02165880;

// USA: func_ov001_0215e14c
extern "C" ARM int func_ov001_0215e14c(void* arg0) {
    int var0 = func_020100f8((char*)GameState::GetInstance());
    if (var0 == 0) {
        return 0;
    }
    Struct_ov001_02158efc var1, var2, var3;
    func_020a2b38((void*)var0, (int*)&var1, (int*)&var2, (int*)&var3);
    int var4 = func_ov017_021d60f4(arg0);
    func_ov001_02158f64(data_ov001_02165880.unknown_24_, var1, var2, var4, 0, 0);
    return 1;
}
