#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#include <std_library_functions.h>
#define func_0205ec34 func_0205ff20
#endif

struct Transition0215657c {
    char field_0;
    unsigned char done;
    char field_2[6];
    unsigned short destination;
    unsigned short state;
    char field_c[0xa];
    unsigned short currentId;
    unsigned short currentKind;
#if defined(jpn)
    char field_1a[0x76];
#else
    char field_1a[0x7a];
#endif
    int context;
    char field_98[0xba];
    unsigned short targetId;
    unsigned short flag;
    unsigned short area;
    unsigned short targetKind;
};
#if defined(jpn)
struct Obj02046574 {
    char field_0[0x868];
    int active;
    char field_86c[0xf76];
    unsigned char field_19b2;
    char field_17e3[0xb];
    unsigned char field_19be;
};
extern const char data_ov001_021661e8[];
#else
struct Obj02046574 {
    char field_0[0x998];
    int active;
    char field_99c[0x1016];
    unsigned char field_19b2;
    char field_19b3[0xb];
    unsigned char field_19be;
};
#endif
struct Rgb02070900 { int red; int green; int blue; };
struct EffectParam02070900;
struct Timer020707c8;
struct EventFlags0215657c { char field_0[0x8c]; unsigned char flags[1]; };
extern "C" char* func_020100f8(char*);
extern "C" EventFlags0215657c* func_0205ec34();
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" unsigned short* func_02012fe4();
extern "C" Obj02046574* func_020421a0();
extern "C" void func_02046574(Obj02046574*, int, char*);
extern "C" int func_020e51cc(int);
extern "C" void func_02046608(Obj02046574*, int, int, char*, int, int, int);
#if defined(jpn)
extern "C" void func_0204500c(Obj02046574*, char*, int);
#else
extern "C" void func_0204500c(Obj02046574*, char*, int, int);
#endif
void SetMainBrightness(GameResources*, int, int);
extern "C" EffectParam02070900* func_020704fc();
extern "C" void func_02070900(EffectParam02070900*, Rgb02070900*, unsigned int);
extern "C" void func_020707c8(Timer020707c8*);
extern "C" void func_0209c2e0(void*, int, int);
extern "C" void func_02046a8c(void*, void*);
extern "C" void func_ov017_021bb0c4(unsigned char*);
void SetBrightness(GameResources*, int, int);
extern "C" void func_020a2794(void*);
extern "C" void func_020a2718(char*);
extern "C" void func_ov017_021bb27c(void*);
extern int data_02109bf4 __attribute__((aligned(4)));

// USA: func_ov001_0215657c
extern "C" ARM int func_ov001_0215657c(Transition0215657c* transition, void* list) {
    if (BackgroundLoader::GetInstance()->GetNumQueuedTasks() > 0) return transition->state;
    GameState* game = GameState::GetInstance();
    GameResources* resources = GetGameResources();
    game->GetUnknownGameObject();
    char* field = func_020100f8((char*)game);
    int blocked = 0;
    int sameArea = 0;
    void* node = resources->unknown_ptr_3718;
    if (transition->currentId == transition->targetId) blocked = 1;
    else if (transition->currentKind == transition->targetKind) blocked = 1;
    else {
        EventFlags0215657c* flags = func_0205ec34();
        if (func_0206dfb0((int)flags, flags->flags, transition->flag + 0x38e)) blocked = 1;
        else if (transition->area == *func_02012fe4()) sameArea = 1;
    }
    if (blocked) {
        GameState* state = GameState::GetInstance();
        GameResources* display = GetGameResources();
        Obj02046574* message = func_020421a0();
        GameObject* member = func_0200ff1c(state, 0);
        if (member) {
            char* name = (char*)member->baseStats_;
#if defined(jpn)
            char text[0x50];
            sprintf(text, data_ov001_021661e8, name);
            func_0204500c(message, text, 0);
#else
            func_02046574(message, 0, name);
            char text[0x100];
            int messageId = func_020e51cc(0x34);
            func_02046608(message, 12, messageId, text, 0xe3, 0, 1);
            func_0204500c(message, text, 0, 0xe3);
#endif
            message->active = 1;
            message->field_19b2 = 0;
            message->field_19be = 1;
        }
        SetMainBrightness(display, 0, 1);
        EffectParam02070900* effect = func_020704fc();
        Rgb02070900 color = {};
        func_02070900(effect, &color, 0);
        func_020707c8((Timer020707c8*)effect);
        return 5;
    }
    if (sameArea) {
        transition->destination = transition->targetId;
        func_0209c2e0(&data_02109bf4, transition->context, 0);
        func_02046a8c(list, node);
        func_ov017_021bb0c4((unsigned char*)transition);
        return 0;
    }
    SetBrightness(resources, 0, 30);
    func_020a2794(field);
    func_020a2718(field);
    func_0209c2e0(&data_02109bf4, transition->context, 0);
    func_ov017_021bb27c(transition);
    transition->done = 1;
    func_02046a8c(list, node);
    return transition->state;
}
