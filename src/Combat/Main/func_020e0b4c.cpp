#include <globaldefs.h>

struct Struct_020200c0_3 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
};

struct Struct_020200c0_4 {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
};

extern "C" void func_02023064(struct Struct_020200c0_3* arg0, unsigned int arg1, short* arg2, short* arg3, short* arg4, short* arg5);
extern "C" void func_0205b20c(struct Struct_020200c0_4* arg0);
extern "C" void func_0205b220(void* arg0, int arg1);
extern "C" void func_0205b228(void* arg0, int arg1, unsigned char arg2);
extern "C" int func_020d2ff0(const char* arg0);
extern "C" int func_0205b234(void*, short, short, int, unsigned char, unsigned char);

#if defined(jpn)
extern short data_020ee9e6[];
extern short data_020ee998[];
extern short data_020ee9b2[];
#else
extern short data_020ee864[];
extern short data_020ee87e[];
extern short data_020ee898[];
#endif
extern short data_020ee8b2[];

#if defined(jpn)
enum {
    Enum_020e0b4c_72 = 0x24, Enum_020e0b4c_1748 = 0x668,
    Enum_020e0b4c_116 = 100, Enum_020e0b4c_120 = 110, Enum_020e0b4c_125 = 120, Enum_020e0b4c_15 = 16,
    Enum_020e0b4c_15_2 = 10, Enum_020e0b4c_0 = 15
};
#else
enum {
    Enum_020e0b4c_72 = 0x48, Enum_020e0b4c_1748 = 0x6d4,
    Enum_020e0b4c_116 = 116, Enum_020e0b4c_120 = 120, Enum_020e0b4c_125 = 125, Enum_020e0b4c_15 = 15,
    Enum_020e0b4c_15_2 = 15, Enum_020e0b4c_0 = 0
};
#endif

// JPN: func_020e2788
// USA: func_020e0b4c
extern "C" ARM void func_020e0b4c(void* arg0, void* arg1, int arg2, int) {
    struct Struct_020200c0_3 var0[13];
#if defined(jpn)
    func_02023064(var0, 13, data_020ee9e6, data_020ee998, data_020ee9b2, data_020ee8b2);
#else
    func_02023064(var0, 13, data_020ee864, data_020ee87e, data_020ee898, data_020ee8b2);
#endif
    struct Struct_020200c0_4 var1;
    func_0205b20c(&var1);
    func_0205b220(&var1, (int)arg1 + arg2);
    func_0205b228(&var1, (int)var0, 13);
    for (int var2 = 0; var2 < 3; var2++) {
        func_0205b234(&var1, (short)0xa, (short)(var2 * 13 + 0x10), (int)((char*)arg0 + 0x1fc + 0x400 + var2 * Enum_020e0b4c_72), (unsigned char)Enum_020e0b4c_15_2, (unsigned char)Enum_020e0b4c_0);
        char* var3 = (char*)arg0 + Enum_020e0b4c_1748 + var2 * 8;
        if (func_020d2ff0(var3) == 3) {
            func_0205b234(&var1, (short)Enum_020e0b4c_116, (short)(var2 * 13 + 0x10), (int)var3, (unsigned char)Enum_020e0b4c_15_2, (unsigned char)Enum_020e0b4c_0);
        } else if (func_020d2ff0(var3) == 2) {
            func_0205b234(&var1, (short)Enum_020e0b4c_120, (short)(var2 * 13 + 0x10), (int)var3, (unsigned char)Enum_020e0b4c_15_2, (unsigned char)Enum_020e0b4c_0);
        } else if (func_020d2ff0(var3) == 1) {
            func_0205b234(&var1, (short)Enum_020e0b4c_125, (short)(var2 * 13 + Enum_020e0b4c_15), (int)var3, (unsigned char)Enum_020e0b4c_15_2, (unsigned char)Enum_020e0b4c_0);
        } else {
            func_0205b234(&var1, (short)Enum_020e0b4c_116, (short)(var2 * 13 + 0x10), (int)var3, (unsigned char)Enum_020e0b4c_15_2, (unsigned char)Enum_020e0b4c_0);
        }
    }
}
