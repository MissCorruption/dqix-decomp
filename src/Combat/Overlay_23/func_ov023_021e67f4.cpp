#include <globaldefs.h>

struct Canvas_021e67f4 {
    char pad0[0xac];
    short x_;
    short y_;
    char padb0[0xbc - 0xb0];
    short unk_bc;
    short unk_be;
};

struct Animation_021e67f4 {
    char pad0[4];
    short x_;
    short y_;
    char pad8[0x15 - 8];
    unsigned char flags_;
};

struct Struct_0205d81c;
struct Container0205a3d0;
struct Container0205a330;

extern "C" Canvas_021e67f4* func_0205d8c4(struct Struct_0205d81c* s);
extern "C" int func_0204c7e0(unsigned char* obj);
extern "C" void func_0205a370(struct Container0205a3d0* c, int key);
extern "C" Animation_021e67f4* func_0205a3d0(struct Container0205a3d0* c, int key);
extern "C" void func_0205a330(struct Container0205a330* c, int arg);
extern "C" void func_0205ae8c(void* obj);

#if defined(jpn)
struct ProfileEditor_021e67f4 {
    char pad0[0x90];
    char window_[0x1334 - 0x90];
    void* renderer_;
    void* unk_1360;
    char pad1364[0x1368 - 0x133c];
    unsigned char unk_13a0;
    char pad13a1[3];
    int unk_13a4;
};

#else
struct ProfileEditor_021e67f4 {
    char pad0[0xac];
    char window_[0x135c - 0xac];
    void* renderer_;
    void* unk_1360;
    char pad1364[0x13a0 - 0x1364];
    unsigned char unk_13a0;
    char pad13a1[3];
    int unk_13a4;
};

#endif
// USA: func_ov023_021e67f4
extern "C" ARM void func_ov023_021e67f4(ProfileEditor_021e67f4* self)
{
    if (self->unk_13a0 == 0)
        return;
    Canvas_021e67f4* canvas = func_0205d8c4((Struct_0205d81c*)self->window_);
    if (canvas == NULL)
        return;
    if (!func_0204c7e0((unsigned char*)canvas))
        return;
    short x = canvas->x_ * 8;
    short y = canvas->y_ * 8;
    x += canvas->unk_bc;
    y += canvas->unk_be;
    func_0205a370((Container0205a3d0*)self->unk_1360, 0);
    Animation_021e67f4* animation = func_0205a3d0((Container0205a3d0*)self->unk_1360, 0);
    if (animation != NULL)
        animation->flags_ |= 8;
    func_0205a330((Container0205a330*)self->unk_1360, self->unk_13a4);
    animation = func_0205a3d0((Container0205a3d0*)self->unk_1360, 0);
    if (animation != NULL)
    {
        animation->x_ = x - 8;
        animation->y_ = y - 2;
    }
    func_0205ae8c(self->renderer_);
}
