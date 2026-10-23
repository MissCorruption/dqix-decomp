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
extern "C" int func_020420e8(char*, int);
extern "C" int func_0205b234(void*, short, short, int, unsigned char, unsigned char);

#if defined(jpn)
extern short data_020ee908[];
extern short data_020ee926[];
extern short data_020ee90e[];
extern short data_020ee932[];
enum { Enum_020e0cfc_4 = 3 };
#else
extern short data_020ee818[];
extern short data_020ee800[];
extern short data_020ee810[];
extern short data_020ee808[];
enum { Enum_020e0cfc_4 = 4 };
#endif

// JPN: func_020e292c
// USA: func_020e0cfc
extern "C" ARM void func_020e0cfc(void* arg0, int arg1, int arg2, int) {
    struct Struct_020200c0_3 var0[Enum_020e0cfc_4];
#if defined(jpn)
    func_02023064(var0, Enum_020e0cfc_4, data_020ee908, data_020ee926, data_020ee90e, data_020ee932);
#else
    func_02023064(var0, Enum_020e0cfc_4, data_020ee818, data_020ee800, data_020ee810, data_020ee808);

    int var1 = func_020420e8((char*)arg0 + 0x2f4 + 0x400, 0);
    int var2 = func_020420e8((char*)arg0 + 0x324 + 0x400, 0);

#endif
    struct Struct_020200c0_4 var3;
    func_0205b20c(&var3);
    func_0205b220(&var3, arg1 + arg2);
    func_0205b228(&var3, (int)var0, Enum_020e0cfc_4);

#if defined(jpn)
    func_0205b234(&var3, (short)45, (short)5, (int)((char*)arg0 + 0x288 + 0x400), (unsigned char)10, (unsigned char)15);
    func_0205b234(&var3, (short)45, (short)17, (int)((char*)arg0 + 0x298 + 0x400), (unsigned char)10, (unsigned char)15);
#else
    func_0205b234(&var3, (short)(0x5f - var1), (short)0x14, (int)((char*)arg0 + 0x2f4 + 0x400), (unsigned char)0xf, (unsigned char)0);
    func_0205b234(&var3, (short)(0x5f - var2), (short)0x2c, (int)((char*)arg0 + 0x324 + 0x400), (unsigned char)0xf, (unsigned char)0);
#endif
}
