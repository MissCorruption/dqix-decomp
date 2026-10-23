#include <globaldefs.h>

struct Struct_01ffd34c;
struct Mutex;
void ZeroInitializeMutex(Mutex*);

struct Struct_ov031_0224e540 {
    unsigned char unknown_0_;
    char unknown_1_[3];
    int unknown_4_;
    int unknown_8_;
    char unknown_c_[0x24 - 0xc];
    int unknown_24_;
};

extern struct Struct_ov031_0224e540 data_ov031_0224e540;
extern struct Struct_01ffd34c data_ov031_0224e54c;

// USA: func_ov031_0220ef5c
extern "C" ARM void func_ov031_0220ef5c(void) {
    if (data_ov031_0224e540.unknown_0_ != 0) {
        return;
    }
    data_ov031_0224e540.unknown_0_ = 1;
    data_ov031_0224e540.unknown_24_ = 0;
    data_ov031_0224e540.unknown_8_ = 0;
    data_ov031_0224e540.unknown_4_ = 0;
    ZeroInitializeMutex((Mutex*)&data_ov031_0224e54c);
}
