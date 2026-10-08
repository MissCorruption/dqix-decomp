#include <globaldefs.h>

struct Menu {
    char pad0[0x3daa];
    unsigned char pageStep_;
    char pad1[0x11];
    unsigned char kind_;
    signed char page_;
    unsigned char unk_3dbe;
    signed char lastPage_;
    char pad2[0xc];
    unsigned int flags_;
    char pad3[0x2c];
    unsigned char pages_[8];
};

extern "C" void _Z28DispatchWithShortB4_0205eaa0P11Obj0205eaa0ii(void *obj, int a, int b);
extern "C" int data_02108760;

// USA: func_ov005_02158560
extern "C" ARM int func_ov005_02158560(Menu *self, int kind, int silent) {
    if (kind == self->kind_) return 0;
    if (!silent) _Z28DispatchWithShortB4_0205eaa0P11Obj0205eaa0ii(&data_02108760, 1, 0);
    self->unk_3dbe            = self->kind_;
    self->lastPage_           = self->page_;
    self->pages_[self->kind_] = self->page_;
    self->kind_               = (unsigned char) kind;
    self->page_               = self->pages_[kind & 0xff];
    self->flags_ |= 0x840;
    self->pageStep_ = 0;
    return 1;
}
