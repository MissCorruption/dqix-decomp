#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020dbc5c_15304 = 0x39a8, Enum_020dbc5c_14084 = 0x34f4 };
#else
enum { Enum_020dbc5c_15304 = 0x3bc8, Enum_020dbc5c_14084 = 0x3704 };
#endif

struct Struct_020dbc5c;
extern "C" void func_020dbc9c(struct Struct_020dbc5c* arg0);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

struct Struct_020dbc5c_2 {
    char unknown_0_[8];
    signed char unknown_8_;
    char unknown_9_[11];
};

// USA: func_020dbc5c
extern "C" ARM void func_020dbc5c(char* arg0, int arg1) {
    struct Struct_020dbc5c_2* var0 = (struct Struct_020dbc5c_2*)(arg0 + Enum_020dbc5c_15304 + (arg1 - 1) * 0x14);
    func_020dbc9c((struct Struct_020dbc5c*)var0);
    var0->unknown_8_ = (signed char)arg1;
    func_020469b4(*(struct Struct_0201bdac_2**)(arg0 + Enum_020dbc5c_14084), (struct Struct_0201bdac*)var0);
}
