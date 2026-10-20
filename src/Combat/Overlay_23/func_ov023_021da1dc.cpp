#include <globaldefs.h>
#include "Input/Input.h"

extern "C" void* memset(void* dst, int value, unsigned int length);

struct StructA0205d5d0;
int TryApplyElemFields0205d5d0(struct StructA0205d5d0* a, int b, int c, int d, unsigned char e);

struct WindowFrame_021da1dc {
    char pad0[0x30];
    int unk_30;
};

struct CharacterCreation_021da1dc {
    char pad0[0xf8];
    void* unk_f8;
    char padfc[0x2b4 - 0xfc];
    char window1[0xd85 - 0x2b4];
    unsigned char unk_d85;
};

extern "C" void func_ov023_021da100(CharacterCreation_021da1dc* self, char* text, int highlighted);

static inline WindowFrame_021da1dc* GetFrame(void* window)
{
    return (WindowFrame_021da1dc*)((char*)window + 4);
}

// USA: func_ov023_021da1dc
#if defined(jpn)
int TryApplyElemFields0205d5d0(struct StructA0205d5d0* a, int b, int c, int d);

struct CharacterCreation_021da9a8 {
    char pad0[0xd8];
    void* unk_d8;
    char paddc[0x278 - 0xdc];
    char window1[0xd49 - 0x278];
    unsigned char unk_d49;
};

extern "C" ARM void func_ov023_021da1dc(CharacterCreation_021da9a8* self)
{
    unsigned char unk = self->unk_d49;
    if (unk != 0)
    {
        int highlighted = 0;
        if (unk == 2 && g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0)
        {
            WindowFrame_021da1dc* frame = GetFrame(self->window1);
            if (frame->unk_30 < 0)
                return;
            highlighted = 1;
        }
        memset(self->unk_d8, 0, 0x800);
        func_ov023_021da100((CharacterCreation_021da1dc*)self, (char*)self->unk_d8, highlighted);
        TryApplyElemFields0205d5d0((StructA0205d5d0*)self->window1, 1, (int)self->unk_d8, 0);
    }
}
#else
extern "C" ARM void func_ov023_021da1dc(CharacterCreation_021da1dc* self)
{
    unsigned char unk = self->unk_d85;
    if (unk != 0)
    {
        int highlighted = 0;
        if (unk == 2 && g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0)
        {
            WindowFrame_021da1dc* frame = GetFrame(self->window1);
            if (frame->unk_30 < 0)
                return;
            highlighted = 1;
        }
        char* text = (char*)self->unk_f8;
        memset(text, 0, 0x960);
        func_ov023_021da100(self, text, highlighted);
        TryApplyElemFields0205d5d0((StructA0205d5d0*)self->window1, 1, (int)text, 0, 1);
    }
}
#endif
