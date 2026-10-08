#include <globaldefs.h>

struct Canvas {
    char pad[0xc5];
    unsigned char flags_;
};

struct WindowFrame {
    char pad[0x30];
    int unk_30;
    char rest[0x1c];
};

struct WindowBase {
    char pad[4];
    WindowFrame frame_;
    char rest[0x44];
};

struct Window {
    WindowBase base_;
    char mid[0x18];
    unsigned char unk_b0;
    char tail[3];
};

struct Menu {
    char pad0[0xe10];
    char *text_;
    char pad1[0xd0];
    Window window_;
    char pad2[0x2e45];
    unsigned char menuResult_;
    char pad3;
    unsigned char menuState_;
};

extern "C" Canvas *_Z21FindElementForFieldB0P15Struct_0205d81c(Window *window);
extern "C" int _Z17IsField0x9cEqual3Ph(Canvas *canvas);
extern "C" void _Z14SetFieldAt0x30Pvi(WindowFrame *frame, int value);
extern "C" int func_0205d0e0(Window *window, int ticks);
extern "C" void func_ov005_02158f80(Menu *self);
extern "C" void func_ov005_0215916c(Menu *self);
extern "C" void func_ov005_02159208(Menu *self);
extern "C" void func_ov005_02159274(Menu *self);
extern "C" void func_ov005_02159850(Menu *self);
extern "C" void func_ov005_02158ed0(Menu *self);

// USA: func_ov005_02158e04
extern "C" ARM void func_ov005_02158e04(Menu *self, int ticks) {
    Canvas *canvas = _Z21FindElementForFieldB0P15Struct_0205d81c(&self->window_);
    if (canvas != 0 && _Z17IsField0x9cEqual3Ph(canvas) && !(canvas->flags_ & 2)) {
        // The +4 stays its own add; folding it into the window offset drops one instruction.
        char *frame = (char *) &self->window_;
        frame += 4;
        _Z14SetFieldAt0x30Pvi((WindowFrame *) frame, -1);
    }
    self->menuResult_ = func_0205d0e0(&self->window_, ticks);
    switch (self->menuState_) {
        case 0: func_ov005_02158f80(self); break;
        case 1: func_ov005_0215916c(self); break;
        case 2: func_ov005_02159208(self); break;
        case 3: func_ov005_02159274(self); break;
        case 4: func_ov005_02159850(self); break;
    }
    func_ov005_02158ed0(self);
}
