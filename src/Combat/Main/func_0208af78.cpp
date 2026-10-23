#include <globaldefs.h>

struct Struct_0208a9c0;
extern "C" void func_0208a9c0(struct Struct_0208a9c0* arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3);

struct Struct_0208aa18;
extern "C" void func_0208aa18(struct Struct_0208aa18* arg0, int arg1, int arg2, int arg3);

struct Struct_0208af78 {
    char unknown_0_[0x94];
    unsigned char unknown_94_[4];
    unsigned char unknown_98_[4];
    unsigned char unknown_9c_;
    char unknown_9d_[0xb];
    unsigned char unknown_a8_;
    char unknown_a9_[3];
    int unknown_ac_;
    int unknown_b0_;
};

// USA: func_0208af78
extern "C" ARM void func_0208af78(struct Struct_0208af78* arg0) {
    func_0208a9c0((struct Struct_0208a9c0*)((char*)arg0 + 0x4), 0, 1, 0x50);
    func_0208a9c0((struct Struct_0208a9c0*)((char*)arg0 + 0x24), 0, 1, 0x14);
    func_0208a9c0((struct Struct_0208a9c0*)((char*)arg0 + 0x40), 1, 5, 0x14);
    func_0208a9c0((struct Struct_0208a9c0*)((char*)arg0 + 0x5c), 2, 5, 0x14);
    func_0208a9c0((struct Struct_0208a9c0*)((char*)arg0 + 0x78), 3, 3, 0x14);

    func_0208aa18((struct Struct_0208aa18*)((char*)arg0 + 0x4), 0x1f, 0, 0x14);
    func_0208aa18((struct Struct_0208aa18*)((char*)arg0 + 0x24), 0x1f, 0, 0x14);
    func_0208aa18((struct Struct_0208aa18*)((char*)arg0 + 0x40), 0x1c, 0x1c, 0);
    func_0208aa18((struct Struct_0208aa18*)((char*)arg0 + 0x5c), 0x1c, 0x1c, 0);
    func_0208aa18((struct Struct_0208aa18*)((char*)arg0 + 0x78), 0x19, 0, 0);

    unsigned char var0 = 0x28;
    int var1;
    for (var1 = 0; var1 < 4; var1++) {
        arg0->unknown_94_[var1] = var0;
        arg0->unknown_98_[var1] = var0;
    }

    arg0->unknown_9c_ = 0;
    arg0->unknown_a8_ = 0;
    arg0->unknown_b0_ = 0;
    arg0->unknown_ac_ = -1;
}
