#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif
#if defined(jpn)
enum { Enum_02052d7c_336 = 0x144 };
#else
enum { Enum_02052d7c_336 = 0x150 };
#endif

extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);
extern "C" void* func_0205ec34(void);

struct Struct_02052d7c {
    unsigned char unknown_0_[Enum_02052d7c_336];
    char* unknown_150_;
};

// USA: func_02052d7c
extern "C" ARM void func_02052d7c(struct Struct_02052d7c* arg0, int arg1, short arg2) {
    char* var0 = arg0->unknown_150_;
    if (var0 == 0) return;
    short var1 = *(short*)(var0 + arg1 * 2 + 0x400 + 0x88);
    if (arg2 == var1) return;

    if (arg1 != 7 && arg1 != 8) {
        void* var2 = func_0205ec34();
        func_0206df6c(var2, (unsigned char*)var2 + 0x8c, 0x113f, 1);
    }

    var0 = arg0->unknown_150_;
    *(short*)(var0 + arg1 * 2 + 0x400 + 0x88) = arg2;
    if (arg1 != 9) return;

    var0 = arg0->unknown_150_;
    if (var0 != 0) {
        var0[0x56e] = 1;
    }
}
