#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021b5250_68 = 0x40, Enum_ov017_021b5250_760 = 0x2f4 };
#else
enum { Enum_ov017_021b5250_68 = 0x44, Enum_ov017_021b5250_760 = 0x2f8 };
#endif

#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

extern "C" void __clear(void* arg0, int arg1);
struct Struct_0209c0c0 {
    unsigned short unknown_0_[12];
    unsigned short unknown_18_;
};
extern "C" ARM unsigned short func_0209c0c0(struct Struct_0209c0c0* arg0, struct Struct_0209c0c0* arg1);
extern "C" void* func_0206efc4(void* arg0);
struct Struct_0206efd8;
#if defined(jpn)
extern "C" void func_0206f230(void* arg0, SafeAllocator* arg1, Struct_0206efd8* arg2, int arg3, short* arg4, int arg5);
#else
extern "C" void func_0206f230(void* arg0, SafeAllocator* arg1, Struct_0206efd8* arg2, int arg3, short* arg4, int arg5, SafeAllocator* arg6, unsigned char* arg7);
#endif

extern char data_ov017_021d7bc3;

struct Struct_ov017_021b5250_2 {
    char unknown_0_[0x10];
    SafeAllocator* unknown_10_;
    SafeAllocator* unknown_14_;
    char unknown_18_[Enum_ov017_021b5250_68 - 0x18];
    Struct_0209c0c0 unknown_44_;
    char unknown_5e_[Enum_ov017_021b5250_760 - Enum_ov017_021b5250_68 - sizeof(Struct_0209c0c0)];
    char unknown_2f8_[12];
};

struct Struct_ov017_021b5250 {
    char unknown_0_[8];
    Struct_ov017_021b5250_2* unknown_8_;
    int unknown_c_;
    unsigned char unknown_10_;
    char unknown_11_[3];
    unsigned char* unknown_14_;
};

// USA: func_ov017_021b5250
extern "C" ARM void func_ov017_021b5250(Struct_ov017_021b5250* arg0) {
    GameState::GetInstance();
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (!var0->GetTaskStatus(arg0->unknown_c_)) {
        return;
    }

    if (var0->GetDetailedTaskStatus(arg0->unknown_c_) == BackgroundLoader::TaskStatus_Complete) {
        unsigned int var1;
        void* var2;
        var0->GetLoadedFileByID(arg0->unknown_c_, &var2, &var1);
        if (var2 != NULL) {
            Struct_ov017_021b5250_2* var3 = arg0->unknown_8_;
            unsigned short var4[12];
            __clear(var4, sizeof(var4));
            short var5 = (short)func_0209c0c0(&var3->unknown_44_, (Struct_0209c0c0*)var4);
            char* var6 = arg0->unknown_8_->unknown_2f8_;
            func_0206efc4(var6);
            Struct_ov017_021b5250_2* var7 = arg0->unknown_8_;
            func_0206f230(var6, var7->unknown_10_, (Struct_0206efd8*)var2, var1, (short*)var4, var5
#if !defined(jpn)
                , var7->unknown_14_, arg0->unknown_14_
#endif
            );
        }
    }

    var0->RemoveTask(arg0->unknown_c_);
    arg0->unknown_c_ = -1;
    arg0->unknown_c_ = var0->QueueLoadFile(&data_ov017_021d7bc3, NULL);
    arg0->unknown_10_ = 7;
}
