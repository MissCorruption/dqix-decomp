// USA: func_ov006_02159db0
#include <globaldefs.h>

struct Obj2081 {
#if defined(jpn)
    unsigned char unknown[0x2a];
#else
    unsigned char unknown[0x36];
#endif
    unsigned short cursor;
};
struct RepeatInput {
    unsigned short buttons;
    unsigned char phase;
};
struct Obj0208203c {
    RepeatInput* input;
    unsigned short state;
    signed char initialDelay;
    signed char repeatInterval;
    signed char countdown;
};
struct ChoicePanel {
    unsigned char unknown[0x38];
    unsigned char x, y, width, height;
};
struct ChoiceWindow {
    unsigned char unknown[0x28];
    int fields28[3];
};
struct Obj020e280c {
    void* entries;
    void* sharedEntry;
    void* entryStates;
    ChoicePanel* panel;
    ChoiceWindow* window;
};
struct Obj0205eaa0;
extern Obj0205eaa0 data_02108760;
extern "C" int func_020813ec(void*, int);
extern "C" void func_0208203c(Obj0208203c*);
extern "C" void func_0205eaa0(Obj0205eaa0*, int, int);
extern "C" void func_02080c04(Obj2081*, int);
extern "C" void func_020e280c(Obj020e280c*, void*);
extern "C" void func_020e2d24(int*, int, int);

struct Ctx02159db0 {
#if defined(jpn)
    unsigned char unknown[0xc];
    Obj2081* menu;
    Obj020e280c* choice;
    unsigned char unknownBeforeCursor[0x3c - 0x14];
    short* activeCursor;
    unsigned char unknownBeforeRepeat[0x94 - 0x40];
    Obj0208203c repeat;
    unsigned char unknownBeforePrevious[0x35e - 0xa0];
#else
    unsigned char unknown[0x14];
    Obj2081* menu;
    Obj020e280c* choice;
    unsigned char unknownBeforeCursor[0x44 - 0x1c];
    short* activeCursor;
    unsigned char unknownBeforeRepeat[0x9c - 0x48];
    Obj0208203c repeat;
    unsigned char unknownBeforePrevious[0x35e - 0xa8];
#endif
    short previousCursor;
    unsigned char unknownBeforeChoiceCursor[0x36c - 0x360];
    short choiceCursor;
    short group;
};

extern "C" ARM void func_ov006_02159db0(Ctx02159db0* owner) {
    func_0205eaa0(&data_02108760, 5, 0);
    owner->group = 7;
    owner->previousCursor = owner->choiceCursor = 0x22;
    owner->menu->cursor = owner->choiceCursor;
    func_020813ec(owner->menu, owner->group);
    func_0208203c(&owner->repeat);
    owner->activeCursor = 0;
    if (owner->choice == 0)
        return;
    func_02080c04(owner->menu, owner->group);
    func_020e280c(owner->choice, (void*)-1);
#if defined(jpn)
    ChoicePanel* panel = owner->choice->panel;
    panel->x = 0xc2;
    panel->y = 0x48;
#endif
    func_020e2d24(owner->choice->window->fields28, 0x18, 1);
}
