#include <globaldefs.h>

struct Struct_0200e830 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    long unknown_10_;
    void* unknown_14_;
};

struct Struct_0200d958_13 {
    unsigned long unknown_0_[16];
    char* unknown_40_;
    unsigned long unknown_44_;
    unsigned long unknown_48_;
    unsigned short unknown_4c_;
    bool unknown_4e_;
    bool unknown_4f_;
    bool unknown_50_;
};

struct Struct_0200e830_2 {
    unsigned char* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    Struct_0200e830* unknown_c_;
    char* unknown_10_;
    char* unknown_14_;
    char* unknown_18_;
    Struct_0200d958_13 unknown_1c_;
};

struct Struct_0200e830_3 {
    char* unknown_0_;
    char* unknown_4_;
    char* unknown_8_;
    void* unknown_c_;
    void* unknown_10_;
    int unknown_14_;
};

struct Struct_0200e830_4 {
    Struct_0200e830_3 unknown_0_;
    Struct_0200e830_2 unknown_18_;
};

extern "C" unsigned char func_0200dbdc(const Struct_0200e830_4* arg0);
extern "C" unsigned char func_0200dbf8(Struct_0200e830_4* arg0);
extern "C" char* func_0200d958(char* arg0, long* arg1);

// USA: func_0200e830
extern "C" ARM Struct_0200e830* func_0200e830(Struct_0200e830_2* arg0, Struct_0200e830_3* arg1) {
    Struct_0200e830_4 var0;
    unsigned char var1;
    Struct_0200e830* var2;
    long var3;

    var0.unknown_0_ = *arg1;
    var0.unknown_18_ = *arg0;
    for (var1 = func_0200dbdc(&var0);; var1 = func_0200dbf8(&var0)) {
        switch (var1) {
            case 13:
                break;

            case 0:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 15:
            case 16:
            case 17:
            case 18:
                continue;

            case 14:
            default:
                return 0;
        }
        break;
    }

    func_0200d958(var0.unknown_0_.unknown_8_ + 1, &var3);
    var2 = (Struct_0200e830*)(var0.unknown_18_.unknown_18_ + var3);
    arg0->unknown_0_ = (unsigned char*)var2->unknown_4_;
    arg0->unknown_4_ = var2->unknown_0_;
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = var2;

    return var2;
}
