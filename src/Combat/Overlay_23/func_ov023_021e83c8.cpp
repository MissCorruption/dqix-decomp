#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"

#if defined(jpn)
enum { ValueOffset = 0x604, TagOffset = 0x14 };
#else
enum { ValueOffset = 0x60e, TagOffset = 0x38 };
#endif
namespace {
struct ProfileFormatState {
    unsigned char unknown0[0x4c];
    Container020e0310 messages;
    unsigned char unknown54[0x5d8 - 0x54];
    char* text;
    unsigned char unknown5dc[ValueOffset - 0x5dc];
    unsigned short firstValue;
    unsigned char secondValue;
};
struct ProfileTagFormats {
    unsigned char unknown0[TagOffset];
    int first;
    int second;
};
}

extern "C" int func_020421a0(void);

struct StoreStruct;
extern "C" void func_020465c0(struct StoreStruct* base, int index, int value);
extern "C" void func_020465d8(unsigned char* base, int index, unsigned char value);
extern "C" void func_020465f0(unsigned char* base, int index, unsigned char value);

struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);

#if defined(jpn)
extern "C" void func_020474a8(void* messages, unsigned char font, const char* format, char* output);
#else
extern "C" ARM void func_02046608(void* a, int b, void* c, void* d, int e, int f, int g);
#endif

struct Struct0200fb08;
extern "C" ARM unsigned char func_0200fb08(Struct0200fb08* obj);

#if defined(jpn)
#define data_ov023_021fd75c data_ov023_021fd760
#endif
extern ProfileTagFormats data_ov023_021fd75c;
extern char data_ov023_021fddb0;
extern char data_ov023_021fddb4;

struct EntryTagData021e83c8 { char pad[0x38]; int a; int b; };

// USA: func_ov023_021e83c8
// JPN: func_ov023_021e8404
extern "C" ARM void func_ov023_021e83c8(void* obj) {
    ProfileFormatState* state = static_cast<ProfileFormatState*>(obj);
    int field = func_020421a0();

    int* p_arr1;
    int i;
    int arr2[2];
    int arr1[2];
    arr2[0] = state->firstValue;
    arr2[1] = state->secondValue;
    arr1[0] = data_ov023_021fd75c.first;
    arr1[1] = data_ov023_021fd75c.second;

    p_arr1 = arr1;
    i = 0;
    for (; i < 2; i++) {
        func_020465c0((struct StoreStruct*)field, i, arr2[i]);
        func_020465d8((unsigned char*)field, i, 1);
        func_020465f0((unsigned char*)field, i, p_arr1[i] & 0xff);
    }

    int key = func_020e0434(&state->messages, 0);
#if defined(jpn)
    func_020474a8(((void*)(field)), 0xa, ((const char*)(key)), state->text);
#else
    func_02046608(((void*)(field)), 0xa, ((void*)(key)), state->text, 0x100, 0, 0);

    int a, b;
    char* p1 = strstr(state->text, &data_ov023_021fddb0);
    char* p2 = strstr(p1 + 1, &data_ov023_021fddb0);
    a = 0x82; b = 0xb4;
    int norm = func_0200fb08((struct Struct0200fb08*)GameState::GetInstance());
    switch (norm) {
    case 2:
    case 5:
        a = 0xa5; b = 0xc1;
        break;
    case 3:
        a = 0x92; b = 0xb6;
        break;
    }

    char buf1[4];
    char buf2[4];
    sprintf(buf1, &data_ov023_021fddb4, a);
    sprintf(buf2, &data_ov023_021fddb4, b);
    memcpy(p1 + 3, buf1, 3);
    memcpy(p2 + 3, buf2, 3);
#endif
}

#if defined(jpn)
#undef data_ov023_021fd75c
#endif
