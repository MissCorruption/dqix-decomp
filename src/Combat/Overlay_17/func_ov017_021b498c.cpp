#if defined(jpn)
enum { Enum_ov017_021b498c_24 = 0x14 };
#else
enum { Enum_ov017_021b498c_24 = 0x18 };
#endif

#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Filesystem/FileIO.h"

struct Struct_020534ac_2;
struct Struct_020534ac;
struct Struct_0201a300_5;
extern "C" ARM void func_020280b0(struct Struct_0201a300_5* arg0);
struct Struct_02028104;
extern "C" void func_02028104(struct Struct_02028104* arg0, int arg1, int arg2, int arg3);
extern "C" void func_02028214(void* arg0, int arg1);

extern char data_ov017_021d7b4f;
extern char data_ov017_021d7b3a;

struct Struct_ov017_021b498c {
    char unknown_0_[8];
    void* unknown_8_;
    int unknown_c_;
    unsigned char unknown_10_;
    char unknown_11_[3];
    int unknown_14_;
};

// USA: func_ov017_021b498c
extern "C" ARM void func_ov017_021b498c(struct Struct_ov017_021b498c* arg0) {
    GameState::GetInstance();
    int var0 = (int)BackgroundLoader::GetInstance();
    if (!((BackgroundLoader*)(var0))->GetTaskStatus((int)(arg0->unknown_c_))) {
        return;
    }

    if (((BackgroundLoader*)((struct Struct_020534ac_2*)var0))->GetDetailedTaskStatus((int)(arg0->unknown_c_)) == 2) {
        int var1, var2;
        ((BackgroundLoader*)((struct Struct_020534ac*)var0))->GetLoadedFileByID((int)(arg0->unknown_c_), (void**)(&var2), (unsigned int*)(&var1));
        if (var2 != 0) {
            unsigned int var3;
            const void* var4;
            FindFilesInNarcBySubstring((const void*)var2, &data_ov017_021d7b4f, &var4, &var3, 1);
            if (var4 != 0) {
                char* var5 = (char*)arg0->unknown_8_;
                func_020280b0((struct Struct_0201a300_5*)(var5 + Enum_ov017_021b498c_24));
                func_02028104((struct Struct_02028104*)(var5 + Enum_ov017_021b498c_24), *(int*)((char*)arg0->unknown_8_ + 0x10), (int)var4, (int)var3);
                func_02028214(var5 + Enum_ov017_021b498c_24, *(int*)((char*)arg0->unknown_8_ + 0x10));
                var5[0xc] = 1;
            }
        }
    }

    ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_c_));
    arg0->unknown_c_ = -1;
    arg0->unknown_c_ = ((BackgroundLoader*)(var0))->QueueLoadFile((const char*)((int)&data_ov017_021d7b3a), (SafeAllocator*)(0));
    arg0->unknown_10_ = 3;
}
