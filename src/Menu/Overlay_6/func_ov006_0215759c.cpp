#include <globaldefs.h>
#include <Memory/SafeAllocator.h>
#include <GameState/GameState.h>

struct Struct_ov006_02153a78 {
    short unknown_0_[2];
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    unsigned short unknown_a_0_ : 4;
    unsigned short unknown_a_4_ : 4;
    unsigned short unknown_b_0_ : 4;
    unsigned short unknown_b_4_ : 4;
};
struct Struct_ov006_0215759c { char unknown_0_[0x18]; short unknown_18_; };
struct Struct_ov006_0215759c_2 { SafeAllocator unknown_0_; char unknown_14_[0x24]; };
extern "C" {
void* func_02010828(GameState*);
void func_020de824(void*);
void func_0207cbe8(void*);
void func_0207d300(void*, short, signed char, int);
void func_0207cc0c(void*);
void func_02086d88(void*, short);
}
extern "C" ARM void func_ov006_0215759c(Struct_ov006_0215759c* arg0, Struct_ov006_02153a78* arg1, unsigned int arg2)
{
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02010828(var0);
    Struct_ov006_0215759c_2 var2;
    var2.unknown_0_.ResetAllocatorPointer();
    func_020de824(var2.unknown_14_);
    func_0207cbe8(&var2);
    func_0207cbe8(&var2);
    func_0207d300(&var2, arg0->unknown_18_, (signed char)arg2, 0);
    func_0207cc0c(&var2);
    for (unsigned char var3 = 0; var3 < arg2; var3++) {
        for (unsigned char var4 = 0; var4 < arg1->unknown_a_0_; var4++) func_02086d88(var1, arg1->unknown_4_);
        for (unsigned char var5 = 0; var5 < arg1->unknown_a_4_; var5++) func_02086d88(var1, arg1->unknown_6_);
        for (unsigned char var6 = 0; var6 < arg1->unknown_b_0_; var6++) func_02086d88(var1, arg1->unknown_8_);
    }
}
