#include <globaldefs.h>

extern "C" int func_ov023_021ed014(struct Struct_ov023_021ec480* arg0);

struct Struct_0205d0e0;
struct Struct_0205d81c;
extern "C" ARM struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" ARM int func_0204c7e0(unsigned char* arg0);
extern "C" ARM void func_0205deb4(struct Struct_0205d81c* arg0, int arg1, int arg2);

extern "C" void func_ov023_021ed194(char* arg0);
extern "C" void func_ov023_021ed354(char* arg0);
extern "C" void func_ov023_021ed4b8(void* arg0);

extern unsigned char data_ov023_021fd844[];

// USA: func_ov023_021ed064
extern "C" ARM int func_ov023_021ed064(void* arg0) {
    if (func_ov023_021ed014((struct Struct_ov023_021ec480*)arg0) == 0) {
        return 0;
    }

    *(unsigned short*)((char*)arg0 + 0x43e) = 0;
    *(unsigned short*)((char*)arg0 + 0x43a) = 0;
    *((unsigned char*)arg0 + 0x433) = 0;
    *(short*)((char*)arg0 + 0x448) = -0x24;
    *((unsigned char*)arg0 + 0x43c) = 0;
    *(unsigned short*)((char*)arg0 + 0x438) &= ~0x40;
    *(unsigned short*)((char*)arg0 + 0x438) &= ~0x80;
    *(unsigned short*)((char*)arg0 + 0x438) |= 0x200;
    *(unsigned short*)((char*)arg0 + 0x438) |= 0x2;

    struct Struct_0205d0e0* var0 = func_0205d81c((struct Struct_0205d81c*)((char*)arg0 + 0xc4), 0);
    if (var0 != 0 && func_0204c7e0((unsigned char*)var0) != 0) {
        *(unsigned short*)((char*)arg0 + 0x438) |= 0x1;
    } else {
        func_ov023_021ed194((char*)arg0);
    }

    if (func_0205d81c((struct Struct_0205d81c*)((char*)arg0 + 0xc4), 1) == 0) {
        func_ov023_021ed354((char*)arg0);
    }
    if (func_0205d81c((struct Struct_0205d81c*)((char*)arg0 + 0xc4), 2) == 0) {
        func_ov023_021ed4b8(arg0);
    }

    unsigned char var1[2];
    var1[0] = data_ov023_021fd844[2];
    var1[1] = data_ov023_021fd844[3];
    for (int var2 = 0; var2 < 2; var2++) {
        func_0205deb4((struct Struct_0205d81c*)((char*)arg0 + 0xc4), var1[var2], 0);
    }

    *(unsigned short*)((char*)arg0 + 0x438) |= 0x100;
    return 1;
}
