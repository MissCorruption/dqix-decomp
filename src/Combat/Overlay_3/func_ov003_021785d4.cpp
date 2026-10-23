#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_021785d4_4068 = 0xf60 };
enum { Enum_ov003_021785d4_4096 = 0xf7c };
enum { Enum_ov003_021785d4_2204 = 0x818 };
enum { Enum_ov003_021785d4_4088 = 0xf74 };
#else
enum { Enum_ov003_021785d4_4068 = 0xfe4 };
enum { Enum_ov003_021785d4_4096 = 0x1000 };
enum { Enum_ov003_021785d4_2204 = 0x89c };
enum { Enum_ov003_021785d4_4088 = 0xff8 };
#endif


extern "C" short func_02080468(void* arg0, int arg1);
extern "C" void func_ov003_02178548(void* arg0);
extern "C" void func_ov003_021767ec(void* arg0);
extern "C" void func_ov003_021769ec(void* arg0);
extern "C" void func_ov003_02176ed4(void* arg0);
extern "C" void func_ov003_02176f94(void* arg0);

// USA: func_ov003_021785d4
extern "C" ARM void func_ov003_021785d4(char* arg0) {
    int var0 = *(int*)(arg0 + Enum_ov003_021785d4_4068);
    int var1 = 0;
    if (var0 & 0x10) {
        var1 = 1;
    } else if (var0 & 0x20) {
        var1 -= 1;
    }

    *(short*)(arg0 + Enum_ov003_021785d4_4096 + 0x14) = *(short*)(arg0 + Enum_ov003_021785d4_4096 + 0x14) + var1;
    if (*(short*)(arg0 + Enum_ov003_021785d4_4096 + 0x16) <= *(short*)(arg0 + Enum_ov003_021785d4_4096 + 0x14)) {
        *(short*)(arg0 + Enum_ov003_021785d4_4096 + 0x14) = 0;
    }
    if (*(short*)(arg0 + Enum_ov003_021785d4_4096 + 0x14) < 0) {
        *(short*)(arg0 + Enum_ov003_021785d4_4096 + 0x14) = *(short*)(arg0 + Enum_ov003_021785d4_4096 + 0x16) - 1;
    }

    if (var1 != 0) {
        void* var2 = *(void**)(arg0 + Enum_ov003_021785d4_2204);
        short var3 = func_02080468(var2, 3);
        *(short*)(*(void**)(arg0 + Enum_ov003_021785d4_4088)) = var3;
        func_ov003_02178548(arg0);
        func_ov003_021767ec(arg0);
        func_ov003_021769ec(arg0);
        func_ov003_02176ed4(arg0);
        func_ov003_02176f94(arg0);
    }

    func_ov003_02178548(arg0);
    if (*(short*)(arg0 + Enum_ov003_021785d4_4096) == *(short*)(*(void**)(arg0 + Enum_ov003_021785d4_4088))) {
        return;
    }
    func_ov003_021767ec(arg0);
    func_ov003_021769ec(arg0);
    func_ov003_02176ed4(arg0);
    func_ov003_02176f94(arg0);
}
