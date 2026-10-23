#include <globaldefs.h>
#if defined(jpn)
enum { kRegion150 = 0x144 };
enum { kRegion9a0 = 0x870 };
enum { kRegion960 = 0x800 };
enum { kRegion860 = 0x700 };
#else
enum { kRegion150 = 0x150 };
enum { kRegion9a0 = 0x9a0 };
enum { kRegion960 = 0x960 };
enum { kRegion860 = 0x860 };
#endif
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct StatusData0215a5b4 {
    char pad0[0x56b];
    unsigned char ailment : 4;
};

struct Combatant0215a5b4 {
    char pad0[kRegion150];
    struct StatusData0215a5b4* status;
};

struct MessageWork0215a5b4 {
    char pad0[kRegion9a0];
    int state;
};

struct BattleMenu0215a5b4 {
    char pad0[0x64];
    char messages[0x7c - 0x64];
    char* text;
    char pad80[0xf4 - 0x80];
    char menu[0x580 - 0xf4];
    unsigned char step;
    char pad581[0x588 - 0x581];
    unsigned char mode;
};

struct Container020e0310;
struct Struct_0205d81c;

extern "C" struct MessageWork0215a5b4* func_020421a0();
extern "C" void func_0205deb4(struct Struct_0205d81c* s, int key, int value);
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02042058(char* dst, const char* src);
extern "C" void __clear(void* buf, int n);
extern "C" unsigned char func_020114ec(char* obj, void* dst);
extern "C" void func_ov003_021592d8(struct BattleMenu0215a5b4* self, struct Combatant0215a5b4* combatant, char* out);
extern "C" void func_ov003_02159250(struct BattleMenu0215a5b4* self, char* text);
extern "C" void func_ov003_0215c01c(struct BattleMenu0215a5b4* self, int mode, int flag);

// USA: func_ov003_0215a5b4
extern "C" ARM void func_ov003_0215a5b4(struct BattleMenu0215a5b4* self) {
    struct MessageWork0215a5b4* work = func_020421a0();
    unsigned char step = self->step;
    if (step == 0) {
        GameState* game = GameState::GetInstance();
        func_0205deb4((struct Struct_0205d81c*)self->menu, 0, 1);
        func_0205deb4((struct Struct_0205d81c*)self->menu, 1, 1);
        func_0205deb4((struct Struct_0205d81c*)self->menu, 2, 1);
        memset(self->text, 0, kRegion960);
        func_02042058(self->text,
                             (const char*)func_020e0434((struct Container020e0310*)self->messages, 0x3fc));
        unsigned char ids[4];
        char* line = self->text + kRegion860;
        __clear(ids, sizeof(ids));
        int count = func_020114ec((char*)game, ids);
        for (int i = 0; i < count; i++) {
            struct Combatant0215a5b4* combatant =
                (struct Combatant0215a5b4*)func_0200ff1c(game, ids[i]);
            if (combatant == NULL) {
                continue;
            }
            int ailing;
            if (combatant->status != NULL) {
                ailing = combatant->status->ailment != 0;
            } else {
                ailing = 0;
            }
            if (ailing) {
                continue;
            }
            memset(line, 0, 0x80);
            func_ov003_021592d8(self, combatant, line);
            func_02042058(self->text, line);
        }
        func_02042058(self->text,
                             (const char*)func_020e0434((struct Container020e0310*)self->messages, 0x42e));
        func_ov003_02159250(self, self->text);
        self->step++;
    }
    if (step == 1 && work->state == 3) {
        func_ov003_0215c01c(self, 1, 0);
        self->mode = 2;
        self->step = 0;
    }
}
