#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Mutex.h"

struct Struct_ov031_02216ca0 {
    char unknown_0_[0x1020];
    int unknown_1020_;
    char unknown_1024_[0xb14];
    ProcessorContext unknown_1b38_;
};
struct Struct_ov031_02216ca0_2 {
    char unknown_0_[0x1004];
    int unknown_1004_;
    int unknown_1008_;
    char unknown_100c_[0x308];
    Struct_ov031_02216ca0* unknown_1314_;
    ProcessorContext unknown_1318_;
    Mutex unknown_13e0_;
    int unknown_13f8_;
};
struct Struct_ov031_0224e5e8_9 { int unknown_0_; int unknown_4_; Struct_ov031_02216ca0_2* unknown_8_; };
extern Struct_ov031_0224e5e8_9 data_ov031_0224e5e8;
extern "C" void func_ov031_02217598(int);
extern "C" int func_ov031_02216f54();
extern "C" void func_ov031_022183b4(Struct_ov031_02216ca0*);
extern "C" int func_ov031_02216b90(int);

// USA: func_ov031_02216ca0
extern "C" ARM void func_ov031_02216ca0() {
    int var0 = 0;
    while (true) {
        if (data_ov031_0224e5e8.unknown_8_->unknown_1314_->unknown_1b38_.uniqueID != 0)
            AwaitContextCompletion(&data_ov031_0224e5e8.unknown_8_->unknown_1314_->unknown_1b38_);
        int var1;
        if (data_ov031_0224e5e8.unknown_8_->unknown_1314_->unknown_1020_ != 8) {
            data_ov031_0224e5e8.unknown_8_->unknown_1008_ = 0x4e84;
            int var2 = data_ov031_0224e5e8.unknown_8_->unknown_1314_->unknown_1020_;
            if (var2 == 7) { func_ov031_02217598(20); return; }
            if (var0 > 2) {
                if (var2 == 2) { func_ov031_02217598(9); return; }
                if (var2 == 3) { func_ov031_02217598(11); return; }
                func_ov031_02217598(13); return;
            }
            var1 = 1;
            ++var0;
        } else {
            int var3 = func_ov031_02216f54();
            switch (var3) {
            case 21:
                func_ov031_02217598(21); return;
            case 16:
                if (var0 > 2) { func_ov031_02217598(16); return; }
                var1 = 0;
                ++var0;
                break;
            case 17:
                func_ov031_02217598(var3); return;
            default:
                if (var0 >= 2) { func_ov031_02217598(var3); return; }
                var1 = 1;
                ++var0;
                break;
            }
        }
        unsigned long long var4 = GetCurrentTimestamp();
        if ((((GetCurrentTimestamp() - var4) << 6) / 33514ULL) < 5000ULL) {
          do {
            LockMutex(&data_ov031_0224e5e8.unknown_8_->unknown_13e0_);
            if (data_ov031_0224e5e8.unknown_8_->unknown_13f8_ == 1) {
                data_ov031_0224e5e8.unknown_8_->unknown_1008_ = 0x4e84;
                UnlockMutex(&data_ov031_0224e5e8.unknown_8_->unknown_13e0_);
                func_ov031_02217598(20);
                return;
            }
            UnlockMutex(&data_ov031_0224e5e8.unknown_8_->unknown_13e0_);
            SleepCurrentContext(5000);
          } while ((((GetCurrentTimestamp() - var4) << 6) / 33514ULL) < 5000ULL);
        }
        func_ov031_022183b4(data_ov031_0224e5e8.unknown_8_->unknown_1314_);
        LockMutex(&data_ov031_0224e5e8.unknown_8_->unknown_13e0_);
        data_ov031_0224e5e8.unknown_8_->unknown_1004_ = func_ov031_02216b90(var1);
        if (data_ov031_0224e5e8.unknown_8_->unknown_1004_ != 0) {
            data_ov031_0224e5e8.unknown_8_->unknown_1008_ = 0x4e84;
            UnlockMutex(&data_ov031_0224e5e8.unknown_8_->unknown_13e0_);
            return;
        }
        UnlockMutex(&data_ov031_0224e5e8.unknown_8_->unknown_13e0_);
    }
}
