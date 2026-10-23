#include <globaldefs.h>

#if defined(jpn)
#define func_02041d9c func_02042428
#define func_ov013_02185900 func_ov013_02186aec
#endif

struct Struct_ov013_021846a0_2 {
#if defined(jpn)
    char unknown_0_[0x5ac];
#else
    char unknown1_0_[0x620];
#endif
    char unknown_620_[0x18];
    unsigned char unknown_638_[4];
    unsigned char unknown_63c_;
};

#if defined(jpn)
enum { Enum_ov013_02185900_1000 = 2000, Enum_ov013_02185900_1001 = 2001, Enum_ov013_02185900_1002 = 2002 };
#else
enum { Enum_ov013_02185900_1000 = 1000, Enum_ov013_02185900_1001 = 1001, Enum_ov013_02185900_1002 = 1002 };
#endif
extern "C" int func_02041d9c(char* arg0, int arg1);
struct Struct_0201099c_3;
extern "C" int func_020e0434(Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02042058(char* arg0, const char* arg1);

// USA: func_ov013_02185900
extern "C" ARM void func_ov013_02185900(Struct_ov013_021846a0_2* arg0, char* arg1) {
    func_02041d9c(arg1, 12);

    unsigned char var0 = arg0->unknown_63c_;
    if (var0 == 4) {
        func_02042058(arg1, (const char*)func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, Enum_ov013_02185900_1000));
    } else if (var0 == 3) {
        func_02042058(arg1, (const char*)func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, Enum_ov013_02185900_1001));
    } else if (var0 == 2) {
        func_02042058(arg1, (const char*)func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, Enum_ov013_02185900_1002));
    }
}
