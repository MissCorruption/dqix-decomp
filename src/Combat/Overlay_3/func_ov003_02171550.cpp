#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_02171550_1840 = 0x62c };
enum { Enum_ov003_02171550_1836 = 0x628 };
enum { Enum_ov003_02171550_1828 = 0x618 };
enum { Enum_ov003_02171550_1820 = 0x61c };
#else
enum { Enum_ov003_02171550_1840 = 0x730 };
enum { Enum_ov003_02171550_1836 = 0x72c };
enum { Enum_ov003_02171550_1828 = 0x724 };
enum { Enum_ov003_02171550_1820 = 0x71c };
#endif

struct Struct_0202b2f0;
struct Struct_ov003_02171550 {
    unsigned char unknown_0_;
    char unknown_1_[Enum_ov003_02171550_1840 - 1];
    unsigned char unknown_730_;
};

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b000(void* arg0);
extern "C" void func_0202b0f4(void* arg0);
extern "C" int func_0202b7ec(void* arg0);
extern "C" void func_0202c360(void* arg0, int arg1);
extern "C" void func_0202b2f0(void* arg0);
extern "C" void func_0202c410(void* arg0);
extern "C" void func_0202b828(unsigned char* arg0);
extern "C" void func_0202c21c(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void func_0202c1e8(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void func_0202c288(void* arg0);

// USA: func_ov003_02171550
extern "C" ARM void func_ov003_02171550(struct Struct_ov003_02171550* arg0) {
    if (!(arg0->unknown_730_ & 1)) {
        arg0->unknown_0_ = 8;
        return;
    }

    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    GameObject* var2 = var0->GetProtagonist();

    int var3 = func_0202b000(var1);
    if (var3 != 0) {
        if (var3 == 3) return;
        func_0202b0f4(var1);
        arg0->unknown_0_ = 0xa;
        return;
    }

    func_0202b7ec(var1);
    func_0202c360(var1, *(int*)((char*)var2 + 0x134));
    func_0202b2f0(var1);
    func_0202c410(var1);
    func_0202b828((unsigned char*)var1);
    func_0202c21c((struct Struct_0202b2f0*)var1, 0xf);
    func_0202c1e8((struct Struct_0202b2f0*)var1, 0);
    func_0202c288(var1);

    *(int*)((char*)arg0 + 4) = (rand() % 4 + 2) * 500;

    *(int*)((char*)arg0 + Enum_ov003_02171550_1836) = 0;
    *(int*)((char*)arg0 + Enum_ov003_02171550_1828) = 0;
    *(int*)((char*)arg0 + Enum_ov003_02171550_1820) = 0;
#if !defined(jpn)
    *(int*)((char*)arg0 + 0x720) = 0;
#endif
    arg0->unknown_0_ = 1;
}
