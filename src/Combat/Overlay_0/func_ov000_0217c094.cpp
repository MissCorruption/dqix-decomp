#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_ov000_02184294_9 {
#if defined(jpn)
    void* unknown_8_;
    int unknown_0_;
    int unknown_4_;
#else
    int unknown_0_;
    int unknown_4_;
    void* unknown_8_;
#endif
};
extern Struct_ov000_02184294_9 data_ov000_02184294;

extern "C" void func_ov000_02175628(void* arg0);
extern "C" void func_ov000_021756b8(void* arg0);
extern "C" void func_ov000_0217ab8c(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02176e3c(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

// USA: func_ov000_0217c094
extern "C" ARM int func_ov000_0217c094(char* arg0) {
    func_ov000_02175628(data_ov000_02184294.unknown_8_);
    int var0 = g_keyManager.TestKeysPressed(0x802);
    if (var0 != 0 || g_touchInput.pressed_ != 0) {
        func_ov000_021756b8(data_ov000_02184294.unknown_8_);
        char* var1 = arg0 + 8;
        signed char var2 = *(signed char*)(var1 + 0x10);
        *(unsigned char*)(var1 + var2 + 8) = 0;
        *(signed char*)(var1 + 0x10) = *(signed char*)(var1 + 0x10) - 1;
        func_ov000_0217ab8c(arg0, data_ov000_02184294.unknown_4_, data_ov000_02184294.unknown_0_);
        func_ov000_02176e3c(data_ov000_02184294.unknown_8_, (int)arg0, *(signed char*)(arg0 + *(signed char*)(arg0 + 0x18) + 0x10), data_ov000_02184294.unknown_4_, data_ov000_02184294.unknown_0_, 0);
    }
    return -1;
}
