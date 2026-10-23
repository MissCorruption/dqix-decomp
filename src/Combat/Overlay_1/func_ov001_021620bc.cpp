#include <globaldefs.h>
#include "Combat/Main/CopyRecord0200fbb4.h"
#include "GameState/GameState.h"

extern "C" void* func_0200fd0c(GameState*);
extern "C" void* func_02012fe4(void);
struct Vector3i;
extern "C" void func_02070378(char*);

#if defined(jpn)
enum { Enum_ov001_021620bc_9147 = 0x23db, Enum_ov001_021620bc_9152 = 0x23e0, Enum_ov001_021620bc_9164 = 0x23ec };
#else
enum { Enum_ov001_021620bc_9147 = 0x23bb, Enum_ov001_021620bc_9152 = 0x23c0, Enum_ov001_021620bc_9164 = 0x23cc };
#endif

struct Struct_ov001_021620bc {
    short unknown_0_;
    char unknown_2_;
    char unknown_3_[4];
    char unknown_7_;
    char unknown_8_[8];
    int unknown_10_[3];
    short unknown_1c_;
    char unknown_1e_[0x68 - 0x1e];
    char unknown_68_;
};

// USA: func_ov001_021620bc
extern "C" ARM int func_ov001_021620bc(void) {
    int var0[3];
    void* var1 = GameState::GetInstance();
    struct Struct_ov001_021620bc* var2 = (struct Struct_ov001_021620bc*)func_0200fd0c((GameState*)var1);
    char* var3 = (char*)func_02012fe4();
    *(Vector3i*)var0 = *(Vector3i const*)((int*)(var3 + Enum_ov001_021620bc_9152));
    short var4 = *(short*)(var3 + Enum_ov001_021620bc_9164);
    func_02070378((char*)var2);
    var2->unknown_2_ = 1;
    var2->unknown_7_ = 1;
    var2->unknown_0_ = (short)(*(signed char*)(var3 + Enum_ov001_021620bc_9147) + 0x1c40 + 0x8000);
    *(Vector3i*)var2->unknown_10_ = *(Vector3i const*)var0;
    var2->unknown_1c_ = var4;
    var2->unknown_68_ = 1;
    func_0200fcfc(var1, var2);
    return 1;
}
