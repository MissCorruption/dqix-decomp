#include <globaldefs.h>
#include "World/Object3D.h"
#include "Resource/Brightness.h"

#if defined(jpn)
enum { Enum_0208f410_1788 = 0x4ec };
#else
enum { Enum_0208f410_1788 = 0x6fc };
#endif

extern "C" void* func_02012fe4(void);
extern "C" void* func_0208e0a8(void);

struct Struct_02015438;
extern "C" int func_02046b24(Struct_02015438** arg0);
extern "C" int func_0208e824(void* arg0, char* arg1);
struct Struct_0208f410;
struct Vector3i;

struct Struct_0208f410_2 {
    char unknown_0_[4];
    int unknown_4_[3];
    unsigned int unknown_10_;
    Struct_0208f410_2* unknown_14_;
};

struct Struct_0208f410_3 {
    char unknown_0_[8];
    void* unknown_8_;
    Struct_0208f410_2* unknown_c_;
};

// USA: func_0208f410
extern "C" ARM void func_0208f410(Struct_0208f410_3* arg0) {
    if (arg0->unknown_8_ == 0) return;

    int var0 = (int)GetGameResources();
    Struct_02015438** var1 = *(Struct_02015438***)(var0 + 0x3000 + Enum_0208f410_1788);
    if (func_02046b24(var1) == 0xa) return;
    if (TestFlags04((GameResources*)var0, 2) != 0) return;

    void* var2 = func_02012fe4();
    char* var3 = *(char**)((char*)var2 + 8);
    void* var4 = func_0208e0a8();
    if (var3 == 0) return;
    if (func_0208e824(var4, var3 + 5) == 0) return;

    Struct_0208f410_2* var5 = arg0->unknown_c_;
    int var6 = 1;
    while (var5) {
        ((Object3D*)((Struct_0208f410*)arg0->unknown_8_))->SetCurrentAnimationTime(var5->unknown_10_);
        *(Vector3i*)((int*)((char*)arg0->unknown_8_ + 0x44)) = *(Vector3i const*)((int*)&var5->unknown_4_);
        ((Object3D*)arg0->unknown_8_)->Draw(var6);
        var5 = var5->unknown_14_;
    }
}
