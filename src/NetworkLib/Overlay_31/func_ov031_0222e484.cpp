#include <globaldefs.h>
#include <Resource/UiArrayEntry.h>

extern "C" void func_ov031_02227520(int*, int*);
extern "C" unsigned char func_ov031_02227548(void);
extern "C" void* func_ov031_0223c560(int, int);
extern "C" int func_020c7170(char*, unsigned long, const char*, ...);
extern "C" void func_ov031_0223dd60(void*, const void*, int);
extern "C" void func_ov031_0223c8d4(void*, int, int, int, int, void*, int);
extern "C" int func_ov031_022236d0(void);
extern "C" void func_ov031_0223c980(void*, int, int, int, int, int, int, int);
extern "C" void func_ov031_0223caec(void*);
extern int data_ov031_02290c9c;
extern unsigned char data_ov031_02248f2c[];
extern Struct_ov031_022276b4* data_ov031_02290c4c;
extern const char data_ov031_0224bb08[];
extern unsigned short data_ov031_02248f3e[];
extern const unsigned short data_ov031_02248f3c[];

// USA: func_ov031_0222e484
extern "C" ARM void func_ov031_0222e484(void) {
    int var0;
    char var1[8];
    unsigned short var2[8];
    func_ov031_02227520(0, &var0);
    int var3 = data_ov031_02290c9c;
    int var4;
    if (var3 >= -20099) var4 = 0;
    else if (var3 >= -20100) var4 = 2;
    else if (var3 >= -20101) var4 = 19;
    else if (var3 >= -20107) var4 = 2;
    else if (var3 >= -20108) var4 = 18;
    else if (var3 >= -20109) var4 = 2;
    else if (var3 >= -20110) var4 = 3;
    else if (var3 >= -20999) var4 = 2;
    else if (var3 >= -22999) var4 = 0;
    else if (var3 >= -23999) var4 = 19;
    else if (var3 >= -49999) var4 = 0;
    else if (var3 >= -50002) var4 = 7;
    else if (var3 >= -50003) var4 = 5;
    else if (var3 >= -50098) var4 = 0;
    else if (var3 >= -50099) var4 = var0 == 2 ? 5 : 7;
    else if (var3 >= -51098) var4 = 0;
    else if (var3 >= -51099) var4 = var0 == 2 ? 5 : 8;
    else if (var3 >= -51102) var4 = 9;
    else if (var3 >= -51103) var4 = 5;
    else if (var3 >= -51199) var4 = 0;
    else if (var3 >= -51299) var4 = 20;
    else if (var3 >= -51302) var4 = 21;
    else if (var3 >= -51303) var4 = 4;
    else if (var3 >= -51999) var4 = 0;
    else if (var3 >= -52002) var4 = 10;
    else if (var3 >= -52003) var4 = 22;
    else if (var3 >= -52099) var4 = 0;
    else if (var3 >= -52103) var4 = 11;
    else if (var3 >= -52199) var4 = 0;
    else if (var3 >= -52203) var4 = 11;
    else if (var3 >= -52299) var4 = 0;
    else if (var3 >= -52399) var4 = 2;
    else if (var3 >= -52999) var4 = 0;
    else if (var3 >= -53299) var4 = 2;
    else var4 = 0;
    void* var5 = func_ov031_0223c560(0, data_ov031_02248f2c[func_ov031_02227548()]);
    int var6 = func_ov031_022276b4(data_ov031_02290c4c, var4);
    func_020c7170(var1, 8, data_ov031_0224bb08, -data_ov031_02290c9c);
    func_ov031_0223dd60(var2, var1, 8);
    unsigned short var7 = data_ov031_02248f3e[func_ov031_02227548() * 2];
    unsigned short var8 = data_ov031_02248f3c[func_ov031_02227548() * 2];
    func_ov031_0223c8d4(var5, var8, var7, 2, 10, var2, 0);
    if (var4 != 0) func_ov031_0223c980(var5, 13, 60, 230, 94, 2, func_ov031_022236d0(), var6);
    func_ov031_0223caec(var5);
}
