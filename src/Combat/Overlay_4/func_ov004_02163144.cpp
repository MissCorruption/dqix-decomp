#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"



struct Struct_020534ac;

struct Struct_02020cb8_4;
extern "C" int func_02046900(struct Struct_02020cb8_4* arg0);

struct Struct_02020aec;
extern "C" void* func_020467f0(struct Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);

struct Struct_02020cb8;
extern "C" void func_0204af64(struct Struct_02020cb8* arg0);

extern "C" void func_0204b2e0(void* arg0, char* arg1);

struct Struct_02020cb8_6;
extern "C" void func_0204b3a0(struct Struct_02020cb8_6* arg0, char* arg1);


struct Struct_ov004_02163144 {
    unsigned char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_[3];
};

#if defined(jpn)
struct Struct_ov004_021707e8_9 { char unknown_0_[0x10]; int unknown_20_; char unknown_14_[0xc]; int unknown_24_; };
#else
struct Struct_ov004_021707e8_9 { char unknown_0_[0x20]; int unknown_20_; int unknown_24_; };
#endif
extern Struct_ov004_021707e8_9 data_ov004_021707e8;
extern char data_ov004_02170542;

// USA: func_ov004_02163144
extern "C" ARM int func_ov004_02163144() {
    int var0 = 1;
    int var1 = (int)BackgroundLoader::GetInstance();

    if (data_ov004_021707e8.unknown_24_ == 0) {
        *(int*)0x4001010 = 0;
        *(int*)0x4001014 = 0;
        data_ov004_021707e8.unknown_20_ = ((BackgroundLoader*)(var1))->QueueLoadFile((const char*)((int)&data_ov004_02170542), (SafeAllocator*)(0));
        data_ov004_021707e8.unknown_24_ = data_ov004_021707e8.unknown_24_ + 1;
    } else if (data_ov004_021707e8.unknown_24_ == 1) {
        if (((BackgroundLoader*)(var1))->GetTaskStatus((int)(data_ov004_021707e8.unknown_20_))) {
            int var2;
            int var3;
            int var4;
            void* var5;
            Struct_ov004_02163144 var6;

            ((BackgroundLoader*)((struct Struct_020534ac*)var1))->GetLoadedFileByID((int)(data_ov004_021707e8.unknown_20_), (void**)(&var2), (unsigned int*)(&var3));
            int var7 = func_02046900((struct Struct_02020cb8_4*)var2);
            func_0204af64((struct Struct_02020cb8*)&var6);
            var6.unknown_1c_0_ = 1;
            var6.unknown_1c_4_ = 1;
            for (int var8 = 0; var8 < var7; var8++) {
                void* var9 = func_020467f0((struct Struct_02020aec*)var2, var8, &var5, &var4);
                if (var9) {
                    func_0204b2e0(&var6, (char*)var9);
                    func_0204b3a0((struct Struct_02020cb8_6*)&var6, (char*)var9);
                }
            }
            ((BackgroundLoader*)(var1))->RemoveTask((int)(data_ov004_021707e8.unknown_20_));
            data_ov004_021707e8.unknown_20_ = -1;
            var0 = 0;
        }
    }
    return var0;
}
