#include <globaldefs.h>
#include "Resource/QuestScript.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "Combat/ScriptElementList.h"

struct Struct_02013fb4;
struct Struct_02095e90;
struct Struct_02095ee0;
struct Struct_0208becc { unsigned char unknown_0_[0x100]; };
struct Struct_ov004_02167068 { unsigned char unknown_0_[0x34]; Struct_0208becc unknown_34_; };
struct Struct_ov004_02167068_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    Struct_0208d550 unknown_c_;
    SafeAllocator unknown_1c_;
    SafeAllocator unknown_30_;
    int unknown_44_;
    short unknown_48_;
    short unknown_4a_;
    short unknown_4c_;
    short unknown_4e_;
    unsigned char unknown_50_0_ : 6;
    unsigned char unknown_50_6_ : 1;
    unsigned char unknown_50_7_ : 1;
};
extern void* data_ov004_0217101c[2];
#if defined(jpn)
enum { Enum_ov004_02167068_0 = 1 };
extern char data_ov004_02170e60[];
extern char data_ov004_02170e7d[];
#else
enum { Enum_ov004_02167068_0 = 0 };
extern char data_ov004_021705a5[];
extern char data_ov004_021705c0[];
extern char data_ov004_021705d2[];
#endif
extern "C" int* func_02094d6c();
extern "C" int func_020957f4(void*, Struct_02013fb4*, int);
extern "C" int func_02095e90(Struct_02095e90*, SafeAllocator*);
extern "C" int func_02095ee0(Struct_02095ee0*);
extern "C" void func_ov004_02166198();
extern "C" void func_ov011_021848a0(void*, int);
extern "C" int func_ov004_02166b40(void*);
extern "C" short func_ov004_021666bc(void*, char*);
extern "C" void* func_ov004_02165e70(void*, int);
extern "C" void func_0208becc(Struct_0208becc*, int, unsigned char);

// USA: func_ov004_02167068
extern "C" ARM int func_ov004_02167068(void* arg0) {
    Struct_ov004_02167068_2* var0 = (Struct_ov004_02167068_2*)data_ov004_0217101c[Enum_ov004_02167068_0];
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    int* var2 = func_02094d6c();
    int var3 = 1;
    if (var0->unknown_50_0_ == 0) {
#if defined(jpn)
        var0->unknown_44_ = var1->QueueLoadFile(data_ov004_02170e60, 0);
#else
        var0->unknown_44_ = var1->QueueLoadFileInGP2(data_ov004_021705a5, data_ov004_021705c0, 0);
#endif
        var0->unknown_50_0_ = 1;
    } else if (var0->unknown_50_0_ == 1) {
        if (var1->GetTaskStatus(var0->unknown_44_)) {
            void* var4;
            unsigned int var5;
            var1->GetLoadedFileByID(var0->unknown_44_, &var4, &var5);
            if (var4) {
                var0->unknown_4e_ = func_020957f4(var2, (Struct_02013fb4*)var4, var5);
                func_0208d860(&var0->unknown_c_, &var0->unknown_1c_, var4, var5, NULL, 0, 1);
            }
            var1->RemoveTask(var0->unknown_44_);
            var0->unknown_44_ = -1;
            var0->unknown_50_0_ = 2;
        }
    } else if (var0->unknown_50_0_ == 2) {
        func_02095e90((Struct_02095e90*)var2, &var0->unknown_1c_);
        var0->unknown_50_0_ = 3;
    } else if (var0->unknown_50_0_ == 3) {
        if (func_02095ee0((Struct_02095ee0*)var2) != 1) return var3;
#if defined(jpn)
        var0->unknown_44_ = var1->QueueLoadFile(data_ov004_02170e7d, 0);
#else
        var0->unknown_44_ = var1->QueueLoadFile(data_ov004_021705d2, 0);
#endif
        var0->unknown_50_0_ = 4;
    } else if (var0->unknown_50_0_ == 4) {
        if (var1->GetTaskStatus(var0->unknown_44_)) {
            void* var6;
            unsigned int var7;
            var1->GetLoadedFileByID(var0->unknown_44_, &var6, &var7);
            if (var6) func_0209576c((Struct_020956b8*)var2, &var0->unknown_1c_, var6, var7, 0);
            var1->RemoveTask(var0->unknown_44_);
            var0->unknown_44_ = -1;
            var0->unknown_50_0_ = 5;
        }
    } else if (var0->unknown_50_0_ == 5) {
        func_ov004_02166198();
        var0->unknown_50_0_ = 6;
    } else {
        var0->unknown_50_0_ = 0;
        var3 = 0;
        char var8 = 0;
        if (var0->unknown_48_ == 0 && var0->unknown_4a_ == 0) {
            func_ov011_021848a0(arg0, 0x65);
        } else if (var0->unknown_4a_ == 0) {
            func_ov004_02166b40(arg0);
            func_ov004_021666bc(arg0, &var8);
        } else {
            func_ov011_021848a0(arg0, 0x12c);
        }
        unsigned char var9 = var8;
        Struct_ov004_02167068* var10 = (Struct_ov004_02167068*)func_ov004_02165e70(arg0, 7);
        if (var10) func_0208becc(&var10->unknown_34_, 0x270f, var9);
    }
    return var3;
}
