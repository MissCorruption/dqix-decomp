#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_02171854_1842 = 0x62e };
enum { Enum_ov003_02171854_1836 = 0x628 };
enum { Enum_ov003_02171854_1820 = 0x618 };
enum { Enum_ov003_02171854_1824 = 0x61c };
enum { Enum_ov003_02171854_1828 = 0x620 };
#else
enum { Enum_ov003_02171854_1842 = 0x732 };
enum { Enum_ov003_02171854_1836 = 0x72c };
enum { Enum_ov003_02171854_1820 = 0x71c };
enum { Enum_ov003_02171854_1824 = 0x720 };
enum { Enum_ov003_02171854_1828 = 0x724 };
#endif

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b000(void* arg0);
extern "C" void func_0202b0f4(void* arg0);
extern "C" int func_0202b800(int* arg0);
extern "C" void func_0202c360(void* arg0, int arg1);
extern "C" void func_0202b2f0(void* arg0);
extern "C" void func_0202c410(void* arg0);

struct Struct_0202b2f0;
extern "C" void func_0202c21c(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void func_0202c288(void* arg0);
extern "C" unsigned int _u32_div_f(unsigned int arg0, unsigned int arg1);

// USA: func_ov003_02171854
extern "C" ARM void func_ov003_02171854(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    GameObject* var2 = var0->GetProtagonist();

    int var3 = func_0202b000(var1);
    if (var3 != 0) {
        if (var3 == 3) {
            return;
        }
        func_0202b0f4(var1);
        arg0[0] = 0xa;
        return;
    }

    func_0202b800((int*)var1);
    func_0202c360(var1, *(int*)((char*)var2 + 0x134));
    func_0202b2f0(var1);
    func_0202c410(var1);
    func_0202c21c((struct Struct_0202b2f0*)var1, 0xf);
    func_0202c288(var1);

    int var4 = (rand() % 4 + 2) * 500;
    *(int*)(arg0 + 4) = var4;

    *(unsigned int*)(arg0 + 4) = *(unsigned int*)(arg0 + 4) / 2 + *(unsigned int*)(arg0 + 4) / 2 * *(signed char*)(arg0 + Enum_ov003_02171854_1842) / 3;

    *(int*)(arg0 + Enum_ov003_02171854_1836) = 0;
    *(int*)(arg0 + Enum_ov003_02171854_1820) = 0;
    *(int*)(arg0 + Enum_ov003_02171854_1824) = 0;
    *(int*)(arg0 + Enum_ov003_02171854_1828) = 0;
    arg0[0] = 5;
}
