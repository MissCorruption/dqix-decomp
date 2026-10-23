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
extern "C" int func_0205b234(void*, short, short, int, unsigned char, unsigned char);

#if defined(jpn)
extern "C" int func_020d2ff0(const char*);
extern short data_020ee980[];
extern short data_020ee938[];
extern short data_020ee950[];
extern short data_020ee968[];
enum { Enum_020e0df8_7 = 12, Enum_020e0df8_2 = 7, Enum_020e0df8_15 = 10, Enum_020e0df8_0 = 15 };
#else
extern short data_020ee82c[];
extern short data_020ee848[];
extern short data_020ee856[];
extern short data_020ee83a[];
enum { Enum_020e0df8_7 = 7, Enum_020e0df8_2 = 2, Enum_020e0df8_15 = 15, Enum_020e0df8_0 = 0 };
#endif

// JPN: func_020e29f0
// USA: func_020e0df8
extern "C" ARM void func_020e0df8(void* arg0, int arg1, int arg2, int) {
    struct Struct_020200c0_3 var0[Enum_020e0df8_7];
#if defined(jpn)
    func_02023064(var0, Enum_020e0df8_7, data_020ee980, data_020ee938, data_020ee950, data_020ee968);
#else
    func_02023064(var0, Enum_020e0df8_7, data_020ee82c, data_020ee848, data_020ee856, data_020ee83a);
#endif
    struct Struct_020200c0_4 var1;
    func_0205b20c(&var1);
    func_0205b220(&var1, arg1 + arg2);
    func_0205b228(&var1, (int)var0, Enum_020e0df8_7);
#if defined(jpn)
    func_0205b234((void*)&var1, (short)6, (short)Enum_020e0df8_2, (int)((char*)arg0 + 0x1b4 + 0x400), (unsigned char)Enum_020e0df8_15, (unsigned char)Enum_020e0df8_0);
    int var2 = func_020d2ff0((char*)arg0 + 0x1b4 + 0x400);
    short var4 = (var2 / 2) * 10 + 7;
#else
    int var3 = func_0205b234((void*)&var1, (short)6, (short)Enum_020e0df8_2, (int)((char*)arg0 + 0x1b4 + 0x400), (unsigned char)Enum_020e0df8_15, (unsigned char)Enum_020e0df8_0);
    short var4 = var3 + 9;
#endif
    func_0205b234((void*)&var1, var4, (short)Enum_020e0df8_2, (int)((char*)arg0 + 0x1f4 + 0x400), (unsigned char)Enum_020e0df8_15, (unsigned char)Enum_020e0df8_0);
}
