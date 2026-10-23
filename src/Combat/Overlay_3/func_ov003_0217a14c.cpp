#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_0217a14c_4068 = 0xf60 };
enum { Enum_ov003_0217a14c_4096 = 0xf7c };
enum { Enum_ov003_0217a14c_4088 = 0xf74 };
#else
enum { Enum_ov003_0217a14c_4068 = 0xfe4 };
enum { Enum_ov003_0217a14c_4096 = 0x1000 };
enum { Enum_ov003_0217a14c_4088 = 0xff8 };
#endif


extern "C" void func_ov003_02179ff0(void* arg0);
extern "C" void func_ov003_02177dd4(void* arg0);
extern "C" void func_ov003_021769ec(void* arg0);

// USA: func_ov003_0217a14c
extern "C" ARM void func_ov003_0217a14c(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = *(int*)(var0 + Enum_ov003_0217a14c_4068);
    int var2 = 0;
    if (var1 & 0x10) {
        var2 = 1;
    } else if (var1 & 0x20) {
        var2 -= 1;
    }

    *(short*)(var0 + Enum_ov003_0217a14c_4096 + 0x14) = *(short*)(var0 + Enum_ov003_0217a14c_4096 + 0x14) + var2;
    if (*(short*)(var0 + Enum_ov003_0217a14c_4096 + 0x16) <= *(short*)(var0 + Enum_ov003_0217a14c_4096 + 0x14)) {
        *(short*)(var0 + Enum_ov003_0217a14c_4096 + 0x14) = 0;
    }
    if (*(short*)(var0 + Enum_ov003_0217a14c_4096 + 0x14) < 0) {
        *(short*)(var0 + Enum_ov003_0217a14c_4096 + 0x14) = *(short*)(var0 + Enum_ov003_0217a14c_4096 + 0x16) - 1;
    }

    if (var2 != 0) {
        func_ov003_02179ff0(var0);
        func_ov003_02177dd4(var0);
        if (*(short*)(var0 + Enum_ov003_0217a14c_4096 + 0xc) == 0x77) {
            func_ov003_021769ec(var0);
        }
    }
    func_ov003_02179ff0(var0);

    if (*(short*)(var0 + Enum_ov003_0217a14c_4096) == **(short**)(var0 + Enum_ov003_0217a14c_4088)) return;
    func_ov003_02177dd4(var0);
    if (*(short*)(var0 + Enum_ov003_0217a14c_4096 + 0xc) != 0x77) return;
    func_ov003_021769ec(var0);
}
