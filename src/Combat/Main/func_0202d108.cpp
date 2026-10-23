#include <globaldefs.h>

extern "C" void func_0202c848(int arg0);
extern char data_021015a0;
extern "C" int func_0202d180(void);
extern "C" int func_0202d224(void);

struct Struct_0202d108 {
    char unknown_0_[2];
    unsigned short unknown_2_;
};

// USA: func_0202d108
extern "C" ARM void func_0202d108(struct Struct_0202d108* arg0) {
    unsigned short var0 = arg0->unknown_2_;
    if (var0 != 0) {
        func_0202c848(var0);
        return;
    }
    *(int*)(&data_021015a0 + 0x10) = 1;
    if (*(unsigned short*)(&data_021015a0 + 0x4) == 0) {
        return;
    }
    *(unsigned short*)(&data_021015a0 + 0x4) = 0;
    if (*(int*)(&data_021015a0 + 0x30) != 0) {
        int var1 = func_0202d180();
        if (var1 == 0) {
            *(int*)(&data_021015a0 + 0x10) = 9;
        }
        return;
    }
    {
        int var2 = func_0202d224();
        if (var2 == 0) {
            *(int*)(&data_021015a0 + 0x10) = 9;
        }
    }
}
