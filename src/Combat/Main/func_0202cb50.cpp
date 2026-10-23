#include <globaldefs.h>
#include "NitroSDK/RequestSubmission.h"

#ifdef jpn
#define data_021023c0 data_02102100
#define data_020ef7a8 data_020ef698
#endif

struct Struct_0202cb50 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};

struct Struct_021015a0 {
    char unknown_0_[0x10];
    int unknown_10_;
    int unknown_14_;
    void (*unknown_18_)(Struct_0202cb50*);
    char unknown_1c_[0x18];
    int unknown_34_;
};

extern Struct_021015a0 data_021015a0 __attribute__((aligned(4)));
extern int data_021023c0;
extern int data_020ef7a8;
extern int data_02102be0;
extern "C" void func_0202c848(int);

// USA: func_0202cb50
extern "C" ARM void func_0202cb50(Struct_0202cb50* arg0)
{
    int var0 = arg0->unknown_2_;
    if (var0) {
        func_0202c848(var0);
        data_021015a0.unknown_10_ = 9;
    } else {
        switch (arg0->unknown_4_) {
        case 10:
            if (data_021015a0.unknown_34_ == 2) {
                if (data_021015a0.unknown_10_ == 4) {
                    data_021015a0.unknown_10_ = 6;
                    int var1 = func_020d68b4(&data_021023c0, 13);
                    if (!var1) var1 = 1;
                    else {
                        func_0202c848(var1);
                        var1 = 0;
                    }
                    if (!var1) data_021015a0.unknown_10_ = 9;
                    break;
                }
                if (data_021015a0.unknown_10_ != 6) goto fallback;
                break;
            } else if (data_021015a0.unknown_34_ == 4) {
                int var2 = 15;
                int var3 = func_020d5d34(&data_02102be0, 13, var2, 0x74, data_020ef7a8);
                if (var3) {
                    func_0202c848(var3);
                    data_021015a0.unknown_10_ = 9;
                } else {
                    data_021015a0.unknown_10_ = 5;
                    if (data_021015a0.unknown_18_) data_021015a0.unknown_18_(arg0);
                }
                break;
            }
        fallback:
            data_021015a0.unknown_10_ = 4;
            if (data_021015a0.unknown_18_) data_021015a0.unknown_18_(arg0);
            break;
        case 11:
        case 12:
        case 13:
            break;
        }
    }
}
