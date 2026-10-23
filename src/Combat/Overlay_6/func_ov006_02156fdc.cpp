#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_02156fdc_2196 = 0x714 };
#else
enum { Enum_ov006_02156fdc_2196 = 0x894 };
#endif

#include "Filesystem/BackgroundLoader.h"

struct Struct_ov006_02156e54_2 {
    char unknown_0_[0x70];
};

extern "C" void func_02076080(Struct_ov006_02156e54_2* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);

struct Struct_ov006_02156e54 {
    Struct_ov006_02156e54_2 unknown_0_;
    int unknown_70_;
    short unknown_74_;
    short unknown_76_;
    short unknown_78_;
    unsigned char unknown_7a_;
};

struct Struct_ov006_02154614 {
    char unknown_0_[Enum_ov006_02156fdc_2196];
    Struct_ov006_02156e54 unknown_894_[4];
    SafeAllocator unknown_a84_[4];
};

// USA: func_ov006_02156fdc
extern "C" ARM void func_ov006_02156fdc(Struct_ov006_02154614* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    Struct_ov006_02156e54* var1 = arg0->unknown_894_;
    for (unsigned char var2 = 0; var2 < 4; var2++) {
        if (var1->unknown_7a_) {
            if (var0->GetTaskStatus(var1->unknown_70_)) {
                void* var3;
                unsigned int var4;
                var0->GetLoadedFileByID(var1->unknown_70_, &var3, &var4);
                if (var3 != 0) {
                    arg0->unknown_a84_[var2].Reset();
                    func_02076080(&var1->unknown_0_, &arg0->unknown_a84_[var2], var3, var4);
                }
                var0->RemoveTask(var1->unknown_70_);
                var1->unknown_70_ = -1;
                var1->unknown_7a_ = 0;
            }
            var1->unknown_76_ = 0x6f;
            var1->unknown_78_ = -0x1a;
        }
        var1++;
    }
}
