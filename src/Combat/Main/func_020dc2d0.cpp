#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"
#include "Resource/GameResources.h"

extern "C" {
    void* func_0202ae18(GrottoStruct* grotto);
    int func_0202c508(void* something);
    void* func_02012fe4(void);
}

struct FlagWord020466f4;
struct ListHead02046b60;
struct Obj020941b0;

struct StructWithNibble020dc2d0 {
    char pad[0xc];
    unsigned char nibbleLo : 4;
    unsigned char nibbleHi : 4;
};

extern "C" void func_020dc214(int mode);
extern "C" int* func_020936f8(void);
extern "C" void func_020941b0(struct Obj020941b0* p);
extern "C" void* func_020d6c00(void);
extern "C" void func_020466f4(struct FlagWord020466f4* word, unsigned int mask);
extern "C" int func_02046b60(struct ListHead02046b60* list, int id);

#if defined(jpn)
enum { CombatModeListOffset = 0x4ec };
#else
enum { CombatModeListOffset = 0x6fc };
#endif

// USA: func_020dc2d0
extern "C" ARM void func_020dc2d0(int mode) {
    GameState* battle = GameState::GetInstance();
    GrottoStruct* grotto = battle->GetGrottoStruct();
    void* something = func_0202ae18(grotto);
    void* ptr = func_02012fe4();
    int flag1;
    int flag2;
    StructWithNibble020dc2d0* field8 = *(StructWithNibble020dc2d0**)((char*)ptr + 0x8);

    int base = ((int)GetGameResources());
    flag1 = 0;
    void* list = *(void**)(base + 0x3000 + CombatModeListOffset);
    flag2 = flag1;

    int listContains = func_02046b60((ListHead02046b60*)list, 0x43);
    if (listContains) {
        flag1 = 1;
    }

    if (grotto->unknown_0[0] != 0 && grotto->unknown_0[1] != 0) {
        if (func_0202c508(something) != 0 && field8 != NULL) {
            if (field8->nibbleLo == 0) {
                flag1 = 1;
            }
        }
    }

    if (mode == 1) {
        flag1 = 1;
    } else if (mode == 2) {
        flag1 = 0;
    } else if (mode == 3) {
        flag2 = 1;
    }

    if (flag1) {
        func_020dc214(1);
    } else if (flag2) {
        func_020dc214(2);
    } else {
        func_020dc214(0);
    }

    func_020941b0((Obj020941b0*)func_020936f8());
    func_020466f4((FlagWord020466f4*)func_020d6c00(), 0x41);
}
