#include <globaldefs.h>
#include "NitroSDK/Memory.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void* func_ov031_02211b54(void* arg0, void* arg1);
extern "C" void func_ov031_02211b08(int arg0, int arg1);
extern "C" void func_020c9be0(void* arg0);
extern "C" void* func_ov031_02211b98(void* arg0, void* arg1, int arg2);
extern "C" int func_ov031_022167c8(void* arg0, void* arg1);
struct Struct_ov031_022125c8 {
    char unknown_0_[0x1c14];
    char unknown_1c14_[0x34];
    char unknown_1c48_[9];
    char unknown_1c51_[3];
    void* (*unknown_1c54_)(void*, void*);
    void* (*unknown_1c58_)(void*, void*, int);
    char unknown_1c5c_[0x1e20 - 0x1c5c];
};
extern Struct_ov031_022125c8* data_ov031_0224e5bc;
extern const char data_ov031_02249a88[9];

// USA: func_ov031_022125c8
extern "C" ARM int func_ov031_022125c8() {
    if (data_ov031_0224e5bc != NULL) func_020c9be0(data_ov031_0224e5bc);
    data_ov031_0224e5bc = (Struct_ov031_022125c8*)func_ov031_02211b54((void*)4, (void*)0x1e20);
    if (data_ov031_0224e5bc == NULL) {
        func_ov031_02211b08(9, 0xffffb17c);
        return 0;
    }
    VectorizedMemset(data_ov031_0224e5bc, 0, 0x1e20);
    VectorizedInvertedMemcpy(data_ov031_02249a88, data_ov031_0224e5bc->unknown_1c48_, 9);
    data_ov031_0224e5bc->unknown_1c54_ = func_ov031_02211b54;
    data_ov031_0224e5bc->unknown_1c58_ = func_ov031_02211b98;
    func_ov031_022167c8(data_ov031_0224e5bc->unknown_1c14_, data_ov031_0224e5bc);
    return 1;
}
