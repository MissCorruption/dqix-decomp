#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov005_02159b74_3684 = 0xe60 };
#else
enum { Enum_ov005_02159b74_3684 = 0xe64 };
#endif

#include <GameState/GameState.h>

struct Struct_02108760;

struct Struct_ov005_02159b74 {
    char unknown_0_[0x38];
    unsigned char unknown_38_;
    unsigned char unknown_39_;
};

struct Struct_ov005_02159b74_2 {
    char unknown_0_[0xc];
    Struct_ov005_02159b74* unknown_c_;
    unsigned char* unknown_10_;

    Struct_ov005_02159b74* inline_ov005_02159b74() { return unknown_c_; }
};

struct Struct_ov005_02153954 {
    char unknown_0_[Enum_ov005_02159b74_3684];
    Struct_ov005_02159b74_2* unknown_e64_;
};

extern int data_02108760;

struct Struct_020e280c;
extern "C" void func_020e280c(Struct_020e280c*, void*);
extern "C" void func_020e16dc(unsigned char* arg0, int arg1, short arg2);
struct Struct_020e1674_2;
extern "C" void func_020e1674(Struct_020e1674_2*, int, int);
struct Struct_020e1e24;
extern "C" void func_020e1e24(Struct_020e1e24*, unsigned short*, unsigned short*, int);
struct Struct_020e28f0;
extern "C" void func_020e28f0(Struct_020e28f0*, short, short);
struct Struct_020e263c_2;
extern "C" void func_020e263c(Struct_020e263c_2*, int);
extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);

// USA: func_ov005_02159b74
extern "C" ARM void func_ov005_02159b74(Struct_ov005_02153954* arg0) {
    short var0;
    short var1;
    func_020e280c((Struct_020e280c*)arg0->unknown_e64_, (void*)-1);
#if defined(jpn)
    Struct_ov005_02159b74* var2 = arg0->unknown_e64_->inline_ov005_02159b74();
    var2->unknown_38_ = 0xc2;
    var2->unknown_39_ = 0x4c;
#else
    arg0->unknown_e64_->inline_ov005_02159b74()->unknown_39_ = 0x4c;
#endif
    unsigned char* var3 = arg0->unknown_e64_->unknown_10_;
    func_020e16dc(var3, 0, 0x18c6);
    func_020e1674((Struct_020e1674_2*)var3, 1, 0);
    func_020e1e24((Struct_020e1e24*)var3, (unsigned short*)&var0, (unsigned short*)&var1, 0);
    func_020e28f0((Struct_020e28f0*)arg0->unknown_e64_, var0, var1 + 4);
    int var4 = GameState::GetInstance()->GetTickCount();
    if (var4 == 0)
        var4 = 1;
    func_020e263c((Struct_020e263c_2*)arg0->unknown_e64_, var4);
    func_0205eaa0((Struct_02108760*)&data_02108760, 5, 0);
}
