#include <globaldefs.h>

struct Struct_02057930;
extern "C" unsigned char* func_02059cb4(unsigned char* arg0);
extern "C" void func_02057930(struct Struct_02057930* arg0);

struct Struct_02058704_2 { unsigned char unknown_0_[0xd4]; };
struct Struct_02058704 {
    int unknown_0_;                       // 0x0
    int unknown_4_;                       // 0x4
    struct Struct_02058704_2 unknown_8_[16]; // 0x8 .. 0xd48
};

// USA: func_02058704
extern "C" ARM struct Struct_02058704* func_02058704(struct Struct_02058704* arg0) {
    struct Struct_02058704_2* var0 = arg0->unknown_8_;
    do {
        func_02059cb4((unsigned char*)var0);
        var0++;
    } while (var0 < &arg0->unknown_8_[16]);
    func_02057930((struct Struct_02057930*)arg0);
    return arg0;
}
