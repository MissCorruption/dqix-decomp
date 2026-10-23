#include <globaldefs.h>

struct Struct_0203d028;
extern "C" ARM void func_0207df50(struct Struct_0203d028 *arg0);
extern "C" ARM void func_0207df90(char* arg0);
extern "C" ARM void func_0207dfac(char* arg0);
extern "C" void func_0207de48(void* arg0, int arg1, int arg2);

struct Struct_020e7ce0 { int unknown_0_; int unknown_4_; };
extern struct Struct_020e7ce0 data_020e7ce0[];
extern struct Struct_020e7ce0 data_020e7ce4[];

// USA: func_020543ec
extern "C" ARM void func_020543ec(char* arg0, char* arg1) {
    int var0;
    func_0207df50((struct Struct_0203d028*)arg1);
    func_0207df90(arg1);
    for (var0 = 0; var0 < 10; var0++) {
        func_0207de48(arg0 + 0xcc + var0 * 0x70, data_020e7ce0[var0].unknown_0_, data_020e7ce4[var0].unknown_0_);
    }
    func_0207de48(arg0 + 0x168 + 0x400, 0x240, 0x20);
    func_0207dfac(arg1);
}
