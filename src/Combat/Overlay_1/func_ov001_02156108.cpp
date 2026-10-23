#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

#if defined(jpn)
enum { Enum_ov001_02156108_140 = 0x4c };
#else
enum { Enum_ov001_02156108_140 = 0x8c };
#endif

extern "C" char* func_020421a0(void);
extern "C" void func_0208beb4(unsigned char* arg0);
extern "C" void func_0208bb78(void* arg0, int arg1);
struct Struct_0208ba54;
extern "C" void func_0208ba54(struct Struct_0208ba54*);
extern "C" int func_ov001_02153948(unsigned short arg0);

struct Struct_ov001_02156108 {
    char unknown_0_[0xa];
    unsigned short unknown_a_;
    char unknown_c_[0x42];
    unsigned short unknown_4e_;
    unsigned short unknown_50_;
#if defined(jpn)
    char unknown_52_[0xa8];
#else
    char unknown1_52_[0xac];
#endif
    unsigned char unknown_fe_;
    char unknown_ff_[0x21];
    void* unknown_120_;
};

// USA: func_ov001_02156108
extern "C" ARM int func_ov001_02156108(struct Struct_ov001_02156108* arg0) {
    GameState* var0 = GameState::GetInstance();
    char* var1 = func_020421a0();
    unsigned int* var2 = (unsigned int*)((int)GetGameResources());

    if ((arg0->unknown_50_ & 0x2) || (arg0->unknown_50_ & 0x8)) {
        void* var3 = arg0->unknown_120_;
        if (var3) {
            if (*(short*)((char*)var3 + 0xd2) >= 0) {
                func_0208beb4((unsigned char*)var3);
                unsigned int var4 = var0->GetTickCount();
                func_0208bb78(arg0->unknown_120_, var4);
                return arg0->unknown_a_;
            }
            func_0208ba54((struct Struct_0208ba54*)var3);
        }
        *(int*)(var1 + Enum_ov001_02156108_140) = 0;
        arg0->unknown_120_ = 0;
    }

    if (TestFlags00((GameResources*)var2, 0x1000) == 0) {
        Struct_0208cb08* var5 = func_02094a00();
        func_02094b40(var5);
        func_02094ab0(var5);
        func_02094b34(var5, 0x6f, 0x1388, 1, 1);
    }
    arg0->unknown_fe_ = 0;
    func_ov001_02153948(arg0->unknown_4e_);
    return 0xb;
}
