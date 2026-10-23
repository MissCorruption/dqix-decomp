// USA: func_ov006_0215fcf0
#include <globaldefs.h>

struct StatusOwner02081164;
struct Obj2081;
extern "C" void func_0208103c(void*, int, int);
extern "C" void func_02080798(void*, int, int);
extern "C" void func_02081164(StatusOwner02081164*, int, int);
extern "C" int func_020813ec(void*, int);
extern "C" void func_02080c68(void*, int, int);
extern "C" void func_02080c20(Obj2081*, int);

struct Obj0215fcf0 {
#if defined(jpn)
    unsigned char unknown[0xc];
    void* menu;
    unsigned char unknownAfterMenu[0x386 - 0x10];
#else
    unsigned char unknown[0x14];
    void* menu;
    unsigned char unknownAfterMenu[0x386 - 0x18];
#endif
    unsigned char sortMode;
};

extern "C" ARM void func_ov006_0215fcf0(Obj0215fcf0* owner) {
    void* menu = owner->menu;
    int textKey = (short)(owner->sortMode + 0x29);
    func_0208103c(menu, 0x5a, textKey);
#if !defined(jpn)
    func_02080798(menu, 0x5a, 1);
#endif
    func_02081164((StatusOwner02081164*)menu, 0xf, 1);
    func_020813ec(menu, 0xf);
    func_02080c68(menu, 0xf, 2);
    func_02080c20((Obj2081*)menu, 0xf);
}
