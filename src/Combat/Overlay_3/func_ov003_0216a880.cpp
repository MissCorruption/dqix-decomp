#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0205d81c;
struct Struct_0205d0e0;
extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" int func_0204c7cc(unsigned char* arg0);

struct Struct_02000c9c_8;
extern "C" int func_0200fb08(struct Struct_02000c9c_8*);

extern "C" void func_0205ac40(void* arg0, void* arg1);

extern unsigned char data_ov003_0217f530;
extern unsigned char data_ov003_0217f532;
extern unsigned char data_ov003_0217f533;
extern unsigned char data_ov003_0217f531;

// USA: func_ov003_0216a880
extern "C" ARM void func_ov003_0216a880(unsigned char* arg0) {
#if defined(jpn)
    enum { Enum_ov003_0216a880_228 = 0xe0, Enum_ov003_0216a880_1236 = 0x4d0, Enum_ov003_0216a880_1152 = 0x47c };
#else
    enum { Enum_ov003_0216a880_228 = 0xe4, Enum_ov003_0216a880_1236 = 0x4d4, Enum_ov003_0216a880_1152 = 0x480 };
#endif
    struct Struct_0205d0e0* var0 = func_0205d81c((struct Struct_0205d81c*)(arg0 + Enum_ov003_0216a880_228), 2);
    if (var0 == 0) return;
    if (!func_0204c7cc((unsigned char*)var0)) return;

#if !defined(jpn)
    int var1 = func_0200fb08((struct Struct_02000c9c_8*)GameState::GetInstance());
#endif

    unsigned int var2 = 0x90000;
#if defined(jpn)
    unsigned int var3 = 0xc9000;
#else
    unsigned int var3 = 0xc6000;
#endif
    unsigned int var4 = 6;
#if !defined(jpn)
    int var5;
    for (var5 = 0; var5 < 5; var5++) {
        if (var1 == (&data_ov003_0217f530)[var5 * 4]) {
            var2 = (&data_ov003_0217f532)[var5 * 4] << 0xc;
            var4 = (&data_ov003_0217f531)[var5 * 4];
            var3 = (&data_ov003_0217f533)[var5 * 4] << 0xc;
            break;
        }
    }
#endif

    unsigned int var6 = var4 * 0x28;
    unsigned char* var7 = *(unsigned char**)(arg0 + Enum_ov003_0216a880_1236) + var6;
    *(unsigned int*)(var7 + 0x14) = var2;
    *(unsigned int*)(var7 + 0x18) = 0x61000;
    func_0205ac40(arg0 + Enum_ov003_0216a880_1152, *(unsigned char**)(arg0 + Enum_ov003_0216a880_1236) + var6);

    unsigned int var8 = (var4 + 1) * 0x28;
    unsigned char* var9 = *(unsigned char**)(arg0 + Enum_ov003_0216a880_1236) + var8;
    *(unsigned int*)(var9 + 0x14) = var3;
    *(unsigned int*)(var9 + 0x18) = 0x61000;
    func_0205ac40(arg0 + Enum_ov003_0216a880_1152, *(unsigned char**)(arg0 + Enum_ov003_0216a880_1236) + var8);
}
