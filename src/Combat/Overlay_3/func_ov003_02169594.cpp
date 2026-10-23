#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02169594_232 = 0xe4 };
enum { Enum_ov003_02169594_404 = 0x190 };
enum { Enum_ov003_02169594_392 = 0x184 };
enum { Enum_ov003_02169594_1261 = 0x4e9 };
enum { Enum_ov003_02169594_405 = 0x191 };
#else
enum { Enum_ov003_02169594_232 = 0xe8 };
enum { Enum_ov003_02169594_404 = 0x194 };
enum { Enum_ov003_02169594_392 = 0x188 };
enum { Enum_ov003_02169594_1261 = 0x4ed };
enum { Enum_ov003_02169594_405 = 0x195 };
#endif

struct Struct_0205ba68;
struct Struct_0205bacc;
struct Struct_0205bcdc;

extern "C" void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);
extern "C" void func_0205bcdc(struct Struct_0205bcdc* arg0, int arg1);
extern "C" void func_0205bb04(void* arg0, int arg1);

struct Struct_ov003_02169594 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x3c - 0x8];
    unsigned char unknown_3c_;
    char unknown_3d_[0x50 - 0x3d];
};

struct Struct_ov003_02169594_2 {
    char unknown_0_[Enum_ov003_02169594_232];
    struct Struct_ov003_02169594 unknown_e8_[2];
    char unknown_188_[Enum_ov003_02169594_404 - Enum_ov003_02169594_392];
    unsigned char unknown_194_;
    char unknown_195_[Enum_ov003_02169594_1261 - Enum_ov003_02169594_405];
    signed char unknown_4ed_;
    signed char unknown_4ee_;
};

static inline struct Struct_ov003_02169594* inline_ov003_02169594(struct Struct_ov003_02169594_2* arg0, int arg1) { return &arg0->unknown_e8_[arg1]; }

// USA: func_ov003_02169594
extern "C" ARM void func_ov003_02169594(struct Struct_ov003_02169594_2* arg0) {
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;

    switch (arg0->unknown_194_) {
    case 1:
        var0 = 1;
        var1 = 3;
        var2 = 3;
        var3 = 1;
        var4 = arg0->unknown_4ed_;
        break;
    case 2:
        var4 = arg0->unknown_4ee_;
        var0 = 4;
        var1 = 1;
        var2 = 4;
        var3 = 1;
        break;
    }

    func_0205ba68((struct Struct_0205ba68*)inline_ov003_02169594(arg0, 0), var0, var1, 0);
    func_0205ba68((struct Struct_0205ba68*)inline_ov003_02169594(arg0, 1), var0, var1, 0);
    func_0205bacc((struct Struct_0205bacc*)inline_ov003_02169594(arg0, 0), var2);
    func_0205bacc((struct Struct_0205bacc*)inline_ov003_02169594(arg0, 1), var2);
    inline_ov003_02169594(arg0, 0)->unknown_4_ = var3;
    inline_ov003_02169594(arg0, 1)->unknown_4_ = var3;
    func_0205bcdc((struct Struct_0205bcdc*)inline_ov003_02169594(arg0, 0), var4);
    func_0205bb04(inline_ov003_02169594(arg0, 1), var4);
    struct Struct_ov003_02169594* var5 = inline_ov003_02169594(arg0, 1);
    var5->unknown_3c_ = 0;
}
