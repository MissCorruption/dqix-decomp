#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

extern "C" unsigned char* func_020936f8(void);
extern "C" void func_ov003_021612c0(void* arg0);
extern "C" int func_ov003_02161344(void* arg0);
extern "C" int func_ov003_02160b84(void* arg0);
extern "C" int func_020100f8(char* arg0);
struct Vector3i;
extern "C" void func_0202e7d4(unsigned char* arg0, int* arg1, int* arg2, int* arg3);
extern "C" void func_ov017_021c37a4(void);
struct Struct_0202e6a8;
extern "C" void func_0202e784(struct Struct_0202e6a8* arg0, int arg1);
struct Struct_0202e6c0;
extern "C" void func_0202e6c0(struct Struct_0202e6c0* arg0, int arg1);
struct Struct_0202e71c;
extern "C" void func_0202e71c(struct Struct_0202e71c* arg0, int arg1);
struct Struct_0207fe44;
extern "C" void func_0207fe44(struct Struct_0207fe44* arg0);
extern "C" void func_020939fc(unsigned char* arg0);

struct Struct_ov003_0216552c_3 {
    char unknown_0_[0x4];
    int unknown_4_[3];
    int unknown_10_[3];
    char unknown_1c_[0x204];
    int unknown_220_;
};

struct Struct_ov003_0216552c {
    char unknown_0_[RG(0x36, 0x2a)];
    short unknown_36_;
};

struct Struct_ov003_0216552c_2 {
    char unknown_0_[RG(0x324, 0x20c)];
    Struct_ov003_0216552c* unknown_324_;
    char unknown_328_[RG(0x13c, 0x7c)];
    unsigned int unknown_464_;
    char unknown_468_[0xc];
    short unknown_474_;
    char unknown_476_[0xe];
    short unknown_484_[2];
    short unknown_488_;
    short unknown_48a_;
    char unknown_48c_[0x17];
    unsigned char unknown_4a3_;
    unsigned char unknown_4a4_;
};

// USA: func_ov003_0216552c
extern "C" ARM void func_ov003_0216552c(Struct_ov003_0216552c_2* arg0) {
    unsigned char* var0 = func_020936f8();
    Struct_ov003_0216552c* var1 = arg0->unknown_324_;
    short* var2 = arg0->unknown_484_;

    if (arg0->unknown_4a4_ == 0) {
        var2[0] = 0x20;
        arg0->unknown_4a4_++;
    } else if (arg0->unknown_4a4_ == 1) {
        func_ov003_021612c0(arg0);
        arg0->unknown_4a4_++;
    } else if (arg0->unknown_4a4_ == 2) {
        if (BackgroundLoader::GetInstance()->GetNumQueuedTasks() > 0) {
            return;
        }
        int var3 = func_ov003_02161344(arg0);
        if (var3 != -1) {
            if (var3 != 1) {
                return;
            }
            if (func_ov003_02160b84(arg0) != 0) {
                arg0->unknown_488_ = 0x1a;
                arg0->unknown_474_ = arg0->unknown_48a_ = 0xa9;
                var1->unknown_36_ = arg0->unknown_48a_;
                var2[0] = 0x2e;
                var2[1] = 1;
                arg0->unknown_4a3_ = 10;
                arg0->unknown_4a4_ = 1;
                arg0->unknown_464_ |= 0x2000;
            } else {
                int var4;
                int var5;
                int var6;
                int var7[3];
                int var8[3];
                Struct_ov003_0216552c_3* var9 = (Struct_ov003_0216552c_3*)func_020100f8((char*)GameState::GetInstance());
                if (var9 != NULL) {
                    *(Vector3i*)var7 = *(Vector3i const*)var9->unknown_4_;
                    *(Vector3i*)var8 = *(Vector3i const*)var9->unknown_10_;
                    func_0202e7d4((unsigned char*)var9, &var6, &var5, &var4);
                }
                func_ov017_021c37a4();
                if (var9 != NULL) {
                    *(Vector3i*)var9->unknown_4_ = *(Vector3i const*)var7;
                    *(Vector3i*)var9->unknown_10_ = *(Vector3i const*)var8;
                    func_0202e784((struct Struct_0202e6a8*)var9, var6);
                    func_0202e6c0((struct Struct_0202e6c0*)var9, var5);
                    func_0202e71c((struct Struct_0202e71c*)var9, var4);
                    var9->unknown_220_ = var6;
                }
                func_0207fe44((struct Struct_0207fe44*)var1);
                var2[0] = 0x21;
                var2[1] = 1;
                arg0->unknown_4a3_ = 10;
                arg0->unknown_4a4_ = 0;
                func_020939fc(var0);
            }
        } else {
            arg0->unknown_488_ = 0x1a;
            arg0->unknown_474_ = arg0->unknown_48a_ = 0xa9;
            var1->unknown_36_ = arg0->unknown_48a_;
            var2[0] = 0x22;
            var2[1] = 1;
            arg0->unknown_4a3_ = 10;
            arg0->unknown_4a4_ = 1;
            arg0->unknown_464_ |= 0x2000;
        }
    }
}
