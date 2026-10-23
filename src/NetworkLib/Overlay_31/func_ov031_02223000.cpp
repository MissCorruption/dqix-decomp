#include <globaldefs.h>

struct Struct_ov031_02222ce4;
struct Struct_ov031_02223000_2 {
    Struct_ov031_02222ce4* unknown_0_[4];
    void* unknown_10_;
    unsigned short unknown_14_;
    signed char unknown_16_;
    unsigned char unknown_17_;
    unsigned char unknown_18_;
};
struct Struct_ov031_02248918 { unsigned short unknown_0_, unknown_2_; };
struct Struct_ov031_02223000 { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };
struct Struct_ov031_0224891e { unsigned short unknown_0_, unknown_2_; };
extern Struct_ov031_02223000_2* data_ov031_02250ba8;
extern unsigned char data_ov031_02248940[];
extern Struct_ov031_02248918 data_ov031_0224891c[];
extern unsigned char data_ov031_02248932[][2];
extern Struct_ov031_02248918 data_ov031_02248918;
extern unsigned char data_ov031_02248924[][2];
extern Struct_ov031_0224891e data_ov031_0224891e[];
extern "C" void func_ov031_0223cb34(Struct_ov031_02248918*, Struct_ov031_02248918*, Struct_ov031_02223000*);
extern "C" int func_ov031_0223d49c(Struct_ov031_02223000*);
extern "C" void* func_ov031_0223baa0(Struct_ov031_02222ce4*, int);
extern "C" void func_ov031_0223bdb0(int, int, void*);
extern "C" void func_ov031_0223bbd8(Struct_ov031_02222ce4*, int, int, int);
extern "C" void func_ov031_0223bcc8(Struct_ov031_02222ce4*, int, int);
extern "C" void* func_ov031_0223e218(void*, void*, void*, int);
extern "C" void func_ov031_02223268();

// USA: func_ov031_02223000
extern "C" ARM void func_ov031_02223000() {
    int var0 = data_ov031_02248940[data_ov031_02250ba8->unknown_17_];
    if (data_ov031_02250ba8->unknown_18_) goto reset;
    {
        if (data_ov031_02250ba8->unknown_16_ != -1) return;
        int var1 = 0;
        if (var0 > 0) do {
            Struct_ov031_02223000 var2;
            func_ov031_0223cb34(&data_ov031_0224891c[data_ov031_02248932[data_ov031_02250ba8->unknown_17_][var1]], &data_ov031_02248918, &var2);
            if (func_ov031_0223d49c(&var2)) {
                if (data_ov031_02250ba8->unknown_10_) break;
                int var3 = data_ov031_02248924[data_ov031_02250ba8->unknown_17_][var1];
                func_ov031_0223bdb0(0, var3 + 1, func_ov031_0223baa0(data_ov031_02250ba8->unknown_0_[var1], 0));
                int var4 = data_ov031_02248932[data_ov031_02250ba8->unknown_17_][var1];
                func_ov031_0223bbd8(data_ov031_02250ba8->unknown_0_[var1], -1, data_ov031_0224891c[var4].unknown_0_, data_ov031_0224891e[var4].unknown_0_);
                func_ov031_0223bcc8(data_ov031_02250ba8->unknown_0_[var1], -1, 1);
                data_ov031_02250ba8->unknown_10_ = func_ov031_0223e218(0, (void*)func_ov031_02223268, 0, 0x6e);
                data_ov031_02250ba8->unknown_16_ = var1;
                return;
            }
            var1++;
        } while (var1 < var0);
    }
reset:
    data_ov031_02250ba8->unknown_16_ = -1;
}
