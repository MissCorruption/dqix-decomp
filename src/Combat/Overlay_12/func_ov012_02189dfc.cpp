#if defined(jpn)
#include <globaldefs.h>
#include "GameState/GameState.h"

struct TableA68;
struct UnkStruct0205c508;
struct StoreStruct;
struct ProfileNavigation {
    int count;
    int pages;
    int columns;
    int rows;
    int mode;
    int page;
};

struct ProfileWindowNavigation {
    unsigned char unknown[0x54];
    ProfileNavigation navigation;
    ProfileNavigation* GetNavigation() { return &navigation; }
};

extern "C" void func_02041c08(char*, int, int, int, int, int);
extern "C" int func_02041ea4(char*, int);
extern "C" void* func_020421a0();
extern "C" void func_0205c508(UnkStruct0205c508*, int*, int*);
extern "C" int func_02042058(char*, const char*);
extern "C" const char* func_02072a68(TableA68*, int);
extern "C" int func_02041b70(char*, int, const char*);
extern "C" int func_02041a28(char*, int);
extern "C" void func_02046380(void*);
extern "C" void func_020465c0(StoreStruct*, int, int);
extern "C" void func_020465f0(unsigned char*, int, unsigned char);
extern "C" void func_020465d8(unsigned char*, int, unsigned char);
extern "C" void func_02042428(char*, int);
extern "C" void func_0202ae18();

struct ProfileListCounts {
    unsigned short available : 5;
    unsigned short other : 11;
};

extern "C" ARM void func_ov012_02189dfc(char* editor, char* text, int hidden) {
    if (!text) return;
    int selection = *(int*)(editor + 0x143c) % 9;
    if (hidden)
        func_02041c08(text, selection, 8, 5, 5, 5);
    func_02041ea4(text, selection);
    void* messages = func_020421a0();
    int i;
    ProfileNavigation* navigation = ((ProfileWindowNavigation*)(editor + 0x90))->GetNavigation();
    int page = navigation->page;
    int pages = navigation->pages;
    int first, last;
    func_0205c508((UnkStruct0205c508*)navigation, &first, &last);
    for (i = first; i < last; ++i) {
        if (i != first)
            func_02042058(text, *(const char**)(editor + 0x1348));
        const char* name = func_02072a68((TableA68*)(editor + 0x1314), (short)((*(signed char**)(editor + 0x1418))[i] + 10000));
        func_02041b70(text, i % 9, name);
    }
    if (((ProfileListCounts*)(editor + 0x141c))->available > 9) {
        func_02046380(messages);
        func_020465c0((StoreStruct*)messages, 0, page + 1);
        func_020465c0((StoreStruct*)messages, 1, pages);
        func_020465f0((unsigned char*)messages, 0, 2);
        func_020465f0((unsigned char*)messages, 1, 2);
        func_020465d8((unsigned char*)messages, 0, 1);
        func_020465d8((unsigned char*)messages, 1, 0);
        func_02042428(text, 8);
        func_02042058(text, func_02072a68((TableA68*)(editor + 0x1314), 0x6b));
    }
}

#else
#include <globaldefs.h>

struct UnkStruct0205c508;
struct TableA68;

struct Cursor02189dfc
{
    int unk_0;
    int unk_4;
    int words_[6];
};

struct Window02189dfc
{
    char unk_0[0x54];
    Cursor02189dfc cursor_;
    char unk_74[0x133c - 0xac - 0x74];

    Cursor02189dfc* GetCursor() { return &cursor_; }
};

struct ProfileEditor02189dfc
{
    char unk_0[0xac];
    Window02189dfc window_;
    char strings_[0x1378 - 0x133c];
    const char* unk_1378;
    char unk_137c[0x13c0 - 0x137c];
    signed char* unk_13c0;
    unsigned short unk_13c4_0 : 5;
    unsigned short unk_13c4_5 : 11;
    char unk_13c6[0x13d8 - 0x13c6];
    int selections_[6];

    Window02189dfc* GetWindow() { return &window_; }
};

extern "C" void func_02041c08(char* text, int a, int b, int c, int d, int e);
extern "C" void func_02041ea4(char* text, int a);
extern "C" void* func_020421a0();
extern "C" void func_0205c508(UnkStruct0205c508* cursor, int* first, int* last);
extern "C" void func_02042058(char* text, const char* append);
extern "C" const char* func_02072a68(TableA68* texts, int id);
extern "C" void func_02041b70(char* text, int item, const char* itemText);
extern "C" void func_02041a90(char* text, int x, int y);
extern "C" void func_ov012_021842a0(ProfileEditor02189dfc* self, int canvas, int color, int shadow);

extern "C" const char data_ov012_0218b310[];

// USA: func_ov012_02189dfc
extern "C" ARM void func_ov012_02189dfc(ProfileEditor02189dfc* self, char* text, int hidden)
{
    if (text == 0)
        return;

    int selection = self->selections_[3] % 9;
    if (hidden)
        func_02041c08(text, selection, 8, 5, 5, 5);
    func_02041ea4(text, selection);
    func_020421a0();
    int i;
    Cursor02189dfc* cursor = self->GetWindow()->GetCursor();
    int shadow = cursor->words_[3];
    int color = cursor->unk_4;
    int first;
    int last;
    func_0205c508((UnkStruct0205c508*)cursor, &first, &last);
    for (i = first; i < last; i++)
    {
        if (i != first)
            func_02042058(text, self->unk_1378);
        func_02041b70(text, i % 9, func_02072a68((TableA68*)self->strings_, (short)(self->unk_13c0[i] + 10000)));
    }
    if (self->unk_13c4_0 > 9)
    {
        func_ov012_021842a0(self, 5, shadow, color);
        func_02041a90(text, 0x2a, 0x94);
        func_02042058(text, data_ov012_0218b310);
    }
}

#endif
