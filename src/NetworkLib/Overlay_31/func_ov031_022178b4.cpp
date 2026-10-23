#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov031_02217604_5 {
    char unknown_0_[14];
    char unknown_e_[7];
    char unknown_15_[4];
    char unknown_19_;
    char unknown_1a_[2];
    char unknown_1c_;
    char unknown_1d_;
    char unknown_1e_;
    char unknown_1f_[13];
    char unknown_2c_[3];
    char unknown_2f_[5];
    char unknown_34_[13];
    char unknown_41_[13];
    char unknown_4e_[33];
    char unknown_6f_[14];
    unsigned short unknown_7e_[11];
};

extern "C" int func_020c7170(char* arg0, unsigned long arg1, const char* arg2, ...);
extern "C" int func_ov031_02218604(void* arg0, const char* arg1, void* arg2, int arg3);
extern "C" int func_ov031_02218528(void* arg0, const char* arg1, const char* arg2);
extern "C" int func_02005aa8(void* arg0);

extern const char data_ov031_02249cd4[];
extern const char data_ov031_02249ce0[];
extern const char data_ov031_02249ce8[];
extern const char data_ov031_02249cf0[];
extern const char data_ov031_02249cf8[];
extern const char data_ov031_02249d00[];
extern const char data_ov031_02249d08[];
extern const char data_ov031_02249d10[];
extern const char data_ov031_02249d18[];
extern const char data_ov031_02249d20[];
extern const char data_ov031_02249d28[];
extern const char data_ov031_02249d30[];
extern const char data_ov031_02249d38[];
extern const char data_ov031_02249d40[];
extern const char data_ov031_02249d48[];
extern const char data_ov031_02249d50[];
extern const char data_ov031_02249d68[];
extern const char data_ov031_02249d74[];

// USA: func_ov031_022178b4
extern "C" ARM int func_ov031_022178b4(void* arg0, Struct_ov031_02217604_5* arg1, int arg2) {
    char var0[0x24];
    func_020c7170(var0, 0x21, data_ov031_02249cd4, 0x3, 1);
    if (func_ov031_02218604(arg0, data_ov031_02249ce0, var0, strlen(var0)) != 0) return 0;
    if (func_ov031_02218604(arg0, data_ov031_02249ce8, arg1->unknown_0_, strlen(arg1->unknown_0_)) != 0) return 0;
    if (func_ov031_02218604(arg0, data_ov031_02249cf0, arg1->unknown_e_, strlen(arg1->unknown_e_)) != 0) return 0;
    if (func_ov031_02218604(arg0, data_ov031_02249cf8, arg1->unknown_41_, strlen(arg1->unknown_41_)) != 0) return 0;
    if (func_ov031_02218604(arg0, data_ov031_02249d00, arg1->unknown_6f_, strlen(arg1->unknown_6f_)) != 0) return 0;
    if (func_ov031_02218604(arg0, data_ov031_02249d08, arg1->unknown_15_, strlen(arg1->unknown_15_)) != 0) return 0;
    if (func_ov031_02218604(arg0, data_ov031_02249d10, arg1->unknown_1a_, strlen(arg1->unknown_1a_)) != 0) return 0;
    if (func_ov031_02218604(arg0, data_ov031_02249d18, &arg1->unknown_1d_, strlen(&arg1->unknown_1d_)) != 0) return 0;
    if (func_ov031_02218604(arg0, data_ov031_02249d20, arg1->unknown_1f_, strlen(arg1->unknown_1f_)) != 0) return 0;
    if (func_ov031_02218604(arg0, data_ov031_02249d28, arg1->unknown_2c_, strlen(arg1->unknown_2c_)) != 0) return 0;
    if (func_ov031_02218604(arg0, data_ov031_02249d30, arg1->unknown_2f_, strlen(arg1->unknown_2f_)) != 0) return 0;
    if (func_ov031_02218604(arg0, data_ov031_02249d38, arg1->unknown_34_, strlen(arg1->unknown_34_)) != 0) return 0;
    if (func_ov031_02218604(arg0, data_ov031_02249d40, arg1->unknown_7e_, func_02005aa8(arg1->unknown_7e_)*2) != 0) return 0;
    if (arg2 == 1) {
        if (func_ov031_02218604(arg0, data_ov031_02249d48, arg1->unknown_4e_, strlen(arg1->unknown_4e_)) != 0) return 0;
    }
    func_020c7170(var0, 0x21, data_ov031_02249d50, 0x3, 1);
    if (func_ov031_02218528(arg0, data_ov031_02249d68, var0) != 0) return 0;
    return func_ov031_02218528(arg0, data_ov031_02249d74, arg1->unknown_15_) == 0;
}
