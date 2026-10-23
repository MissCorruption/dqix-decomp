#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020100a8(GameState* battleStruct);
extern "C" void func_ov017_021a7c94(unsigned char* obj, int id, int arg2);
struct FieldStruct021a85d4;
extern "C" void func_ov017_021a85d4(struct FieldStruct021a85d4* obj, int val);
extern "C" void func_ov017_021a5a28(void* obj, int mode);
extern "C" int func_ov017_021a5a48(void* obj);

struct Evt021d01e4 {
    unsigned char pad0[4];
    unsigned char kind;
    signed char idA;
    signed char idB;
    unsigned char pad7;
    short arg;
};

struct Work021d01e4 {
#if defined(jpn)
    unsigned char pad0[0x350c];
#else
    unsigned char pad0[0x371c];
#endif
    void* field371c;
#if defined(jpn)
    unsigned char pad3720[0x397c - 0x3510];
#else
    unsigned char pad3720[0x3b9c - 0x3720];
#endif
    struct FieldStruct021a85d4* field3b9c;
};

// USA: func_ov017_021d01e4
extern "C" ARM void func_ov017_021d01e4(int unused0, struct Evt021d01e4* evt, GameState* bs, struct Work021d01e4* work) {
    func_020100a8(bs);
    unsigned char* list = (unsigned char*)func_02010828(bs);
    unsigned char* ids = list + 0xf78;
    unsigned char count = list[0xf7c];
    int idA = evt->idA;
    int idB = evt->idB;
    int arg = evt->arg;
    int foundA = 0;
    int foundB = 0;
    for (int i = 0; i < count; i++) {
        unsigned char id = ids[i];
        if (id == idA) {
            foundA = 1;
        }
        if (id == idB) {
            foundB = 1;
        }
    }

    struct FieldStruct021a85d4* field = work->field3b9c;
    void* p = work->field371c;
    switch (evt->kind) {
    case 0:
        break;
    case 1:
        if (foundB) {
            func_ov017_021a7c94((unsigned char*)work, idA, arg);
        }
        break;
    case 2:
        if (foundB) {
            func_ov017_021a85d4(field, 6);
        }
        break;
    case 3:
        if (foundB) {
            func_ov017_021a85d4(field, 5);
        }
        break;
    case 4:
        if (foundA) {
            func_ov017_021a5a28(p, 2);
        }
        break;
    case 5:
        if (foundA) {
            func_ov017_021a5a28(p, 6);
        }
        break;
    case 6:
        if (foundA) {
            if (func_ov017_021a5a48(p) != 4) {
                func_ov017_021a5a28(p, 8);
            }
        }
        break;
    case 7:
        if (foundA) {
            func_ov017_021a5a28(p, 5);
        }
        break;
    case 8:
        if (foundA) {
            func_ov017_021a5a28(p, 7);
        }
        break;
    }
}
