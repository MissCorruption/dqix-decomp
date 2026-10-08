#include <globaldefs.h>

struct Vec3 {
    int x;
    int y;
    int z;
};

struct Menu {
    char pad0[0x3cf0];
    char dragModel_[0x1c];
    Vec3 position_;
    char pad1[0x60];
    short dragged_;
};

extern "C" int abs(int x);
extern "C" void _Z13SetVec3At0x1cP18Vec3Target0203a46ciii(void *model, int x, int y, int z);

// USA: func_ov005_02156e1c
extern "C" ARM void func_ov005_02156e1c(Menu *self, int x, int y) {
    if (self->dragged_ < 0) return;
    Vec3 position = self->position_;
    int currentX  = position.x >> 12;
    int currentY  = position.y >> 12;
    int modelX    = x - 12;
    if (modelX < 1) modelX = 1;
    if (modelX > 0xe7) modelX = 0xe7;
    int modelY = y - 12;
    if (modelY < 1) modelY = 1;
    if (modelY > 0xa7) modelY = 0xa7;
    if (abs(currentX - modelX) < 3) modelX = currentX;
    if (abs(currentY - modelY) < 3) modelY = currentY;
    _Z13SetVec3At0x1cP18Vec3Target0203a46ciii(self->dragModel_, modelX << 12, modelY << 12, 0x2000);
}
