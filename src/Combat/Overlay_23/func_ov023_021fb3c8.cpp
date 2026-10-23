#include <globaldefs.h>
#include "GameState/GameState.h"


struct Struct_0205a254;
struct Struct_ov023_021fb3c8_2 {
    char unknown_0_[0x15];
    unsigned char unknown_15_;
};
extern "C" void func_0205a370(struct Struct_0205a254*, int);
extern "C" void func_0205a42c(struct Struct_0205a254*, int, int);
extern "C" struct Struct_ov023_021fb3c8_2* func_0205a3d0(struct Struct_0205a254*, int);

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" void* func_ov023_021fad18(void* arg0);
extern "C" void func_0205a254(struct Struct_0205a254*, unsigned char, unsigned int);
extern "C" void func_0205addc(void*, unsigned char);

struct Struct_ov023_021fb3c8 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
    char unknown_d_[0x20 - 0xd];
    unsigned short unknown_20_;
    unsigned short unknown_22_;
    unsigned short unknown_24_;
    char unknown_26_[0x28 - 0x26];
    short unknown_28_;
    short unknown_2a_;
};

// USA: func_ov023_021fb3c8
extern "C" ARM void func_ov023_021fb3c8(struct Struct_ov023_021fb3c8* arg0, void* arg1) {
    if (arg0->unknown_c_ & 8) {
        return;
    }
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_ov011_021849c8(arg1);
    void* var2 = func_ov023_021f6880(var1, arg0->unknown_20_);
    void* var3 = func_ov023_021fad18(var2);
    struct Struct_0205a254* var4 = *(struct Struct_0205a254**)((char*)var3 + 0x3c);
    if (var4 == NULL) {
        return;
    }
    func_0205a370(var4, arg0->unknown_22_);
    struct Struct_ov023_021fb3c8_2* var5 = func_0205a3d0(var4, arg0->unknown_22_);
    if (var5 != NULL) {
        var5->unknown_15_ |= 8;
    }
    func_0205a42c(var4, arg0->unknown_22_, (unsigned char)arg0->unknown_24_);
    unsigned int var6 = var0->GetTickCount();
    func_0205a254(var4, (unsigned char)arg0->unknown_22_, var6);
    short var7, var8;
    var8 = arg0->unknown_2a_;
    var7 = arg0->unknown_28_;
    struct Struct_ov023_021fb3c8_2* var9 = func_0205a3d0(var4, arg0->unknown_22_);
    if (var9 != NULL) {
        *(short*)((char*)var9 + 0x4) = var7;
        *(short*)((char*)var9 + 0x6) = var8;
    }
    func_0205addc(var3, (unsigned char)arg0->unknown_22_);
}
