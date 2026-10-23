#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Memory.h"

struct Struct_ov031_0224c980_12 {
    unsigned char unknown_0_[0xc];
    int unknown_c_;
    unsigned int unknown_10_;
    unsigned char unknown_14_[0x18];
    unsigned int unknown_2c_;
    unsigned char unknown_30_[0xc];
    void (*unknown_3c_)();
    void (*unknown_40_)(void*);
    int unknown_44_;
    int (*unknown_48_)();
    unsigned char unknown_4c_[0xd0];
    int unknown_11c_;
    void* unknown_120_;
    unsigned char unknown_124_[4];
    int unknown_128_;
    void* unknown_12c_;
};
struct Struct_ov031_0224ca00_2 {
    int unknown_0_;
    unsigned char unknown_4_[6];
    unsigned short unknown_a_;
};
struct Struct_ov031_0224cca8_3 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned char unknown_6_[0x26];
    int unknown_2c_;
    int unknown_30_;
    void* unknown_34_;
};
struct Struct_ov031_02203c6c {
    ProcessorContext* unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
    unsigned char unknown_9_[7];
    int unknown_10_;
    int unknown_14_;
    unsigned short unknown_18_, unknown_1a_;
    unsigned int unknown_1c_, unknown_20_;
};
extern Struct_ov031_0224c980_12 data_ov031_0224c980;
extern unsigned char data_ov031_0224ca60[0x64];
extern unsigned char data_ov031_0224d02c[], data_ov031_0224ceac[];
extern Struct_ov031_0224ca00_2 data_ov031_0224ca00[8];
extern Struct_ov031_0224cca8_3 data_ov031_0224cca8[8];
extern "C" void func_ov031_02203164(int);
extern "C" void func_ov031_02203178();
extern "C" int func_ov031_02203bcc();
extern "C" int func_ov031_022046b8();
extern "C" int func_ov031_02204710(unsigned int*, int);
extern "C" int func_ov031_02200160(int);
extern "C" void func_ov031_02200ccc(unsigned int);
extern "C" void func_ov031_0220aa98(int);
extern "C" void func_ov031_0220480c();

// USA: func_ov031_02203c6c
extern "C" ARM void func_ov031_02203c6c() {
    int var0;
    int var1;
    int var2;
    Struct_ov031_0224ca00_2* var3;
    int var4;
    int var5;
    data_ov031_0224c980.unknown_44_ = 0;
    VectorizedMemset(data_ov031_0224ca60, 0, 0x64);
    data_ov031_0224c980.unknown_11c_ = 0x180;
    data_ov031_0224c980.unknown_120_ = data_ov031_0224d02c;
    data_ov031_0224c980.unknown_128_ = 0x180;
    data_ov031_0224c980.unknown_12c_ = data_ov031_0224ceac;
    func_ov031_02203164((int)data_ov031_0224ca60);
    var4 = 1;
    var5 = 1;
    unsigned int var6 = 1;
    data_ov031_0224c980.unknown_c_ = 1;
    var1 = 0;
    while (1) {
        SleepCurrentContext(1000);
        if (data_ov031_0224c980.unknown_44_) break;
        var2 = (int)(GetCurrentTimestamp() >> 16);
        if (data_ov031_0224c980.unknown_48_()) {
            if (--var6 == 0) {
                if (data_ov031_0224c980.unknown_10_ & 1) {
                    if (var1 == 0) {
                        func_ov031_02203bcc();
                        var1 = 1;
                    }
                } else {
                    switch (var1) {
                    case 0:
                        if (var5) {
                            data_ov031_0224c980.unknown_c_ = 2;
                            var5 = 0;
                        }
                        if (!func_ov031_022046b8() || func_ov031_02204710(&var6, 0) == 0) {
                            func_ov031_02203bcc();
                            var1 = 3;
                        } else {
                            var1 = 1;
                        }
                        break;
                    case 1:
                        if (func_ov031_02204710(&var6, 1) == 0 && var6 < 60) var1 = 2;
                        break;
                    case 2:
                        if (func_ov031_02204710(&var6, 2)) var1 = 1;
                        else if (var6 < 60) {
                            func_ov031_02200160(3);
                            var4 = 1;
                            var6 = 1;
                            var1 = 0;
                        }
                        break;
                    case 3:
                        break;
                    }
                }
            }
        } else {
            func_ov031_02200160(1);
            var4 = 1;
            var6 = 1;
            var1 = 0;
        }
        var3 = data_ov031_0224ca00;
        var0 = 0;
        do {
            if (var3->unknown_0_ && (short)(var2 - var3->unknown_a_) > 957) var3->unknown_0_ = 0;
            var3++;
        } while (++var0 < 8);
        if (data_ov031_0224c980.unknown_2c_ && --var4 == 0) {
            func_ov031_02200ccc(data_ov031_0224c980.unknown_2c_);
            var4 = 105;
        }
        ProcessorContext* var7 = data_02111304.firstContext;
        if (var7) do {
            Struct_ov031_02203c6c* var8 = (Struct_ov031_02203c6c*)var7->unknown_A4;
            if (var8 && var8->unknown_0_) {
                int var9 = var8->unknown_8_;
                if (var9 == 3 && var2 - var8->unknown_10_ > 39) {
                    var8->unknown_8_ = 1;
                    var8->unknown_18_ = var8->unknown_1a_;
                    var8->unknown_1c_ = var8->unknown_20_;
                } else if (var9 == 2 && var2 - var8->unknown_10_ > 39) {
                    if (var8->unknown_4_ == 1) {
                        var8->unknown_8_ = 0;
                        var8->unknown_4_ = 0;
                        MarkContextReadyAndSwitch(var8->unknown_0_);
                    }
                } else if (var9 != 4 && var8->unknown_4_ == 2) {
                    var8->unknown_4_ = 0;
                    MarkContextReadyAndSwitch(var8->unknown_0_);
                }
            }
            var7 = var7->pNext;
        } while (var7);
        Struct_ov031_0224cca8_3* var10 = data_ov031_0224cca8;
        int var11 = 0;
        do {
            if (var10->unknown_4_ && var2 - var10->unknown_2c_ > 239) {
                data_ov031_0224c980.unknown_40_(var10->unknown_34_);
                var10->unknown_4_ = 0;
            }
            var10++;
        } while (++var11 < 8);
        func_ov031_0220aa98(var2);
        if (data_ov031_0224c980.unknown_3c_) data_ov031_0224c980.unknown_3c_();
    }
    if (!(data_ov031_0224c980.unknown_10_ & 1) && var1 != 3) func_ov031_0220480c();
    func_ov031_02203178();
}
