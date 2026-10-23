#include <globaldefs.h>

#if defined(jpn)
#define func_02041d9c func_02042428
#define func_ov013_02185900 func_ov013_02186aec
#endif

struct SkillPointMenu {
#if defined(jpn)
    char unknown0[0x5ac];
#else
    char unknown0[0x620];
#endif
    char texts[0x18];
    unsigned char unknownStateBytes[4];
    unsigned char state;
};

#if defined(jpn)
enum { CancelMessage = 2000, ConfirmMessage = 2001, PointLimitMessage = 2002 };
#else
enum { CancelMessage = 1000, ConfirmMessage = 1001, PointLimitMessage = 1002 };
#endif
extern "C" int func_02041d9c(char* dst, int size);
struct Container020e0310;
extern "C" int func_020e0434(Container020e0310* texts, int key);
extern "C" int func_02042058(char* dst, const char* src);

// USA: func_ov013_02185900
extern "C" ARM void func_ov013_02185900(SkillPointMenu* menu, char* dst) {
    func_02041d9c(dst, 12);

    unsigned char state = menu->state;
    if (state == 4) {
        func_02042058(dst, (const char*)func_020e0434((Container020e0310*)menu->texts, CancelMessage));
    } else if (state == 3) {
        func_02042058(dst, (const char*)func_020e0434((Container020e0310*)menu->texts, ConfirmMessage));
    } else if (state == 2) {
        func_02042058(dst, (const char*)func_020e0434((Container020e0310*)menu->texts, PointLimitMessage));
    }
}
