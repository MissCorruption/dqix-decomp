#include <globaldefs.h>

extern "C" void* func_ov004_02168aa0(void* arg0, int arg1);
extern "C" void func_ov023_021fb274(void* arg0, int arg1);
struct Struct_ov004_02158dcc;
extern "C" void func_ov011_021849e0(struct Struct_ov004_02158dcc* arg0, unsigned short arg1);
extern "C" void func_ov004_0216920c(void* arg0);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

#if defined(jpn)
struct Struct_ov004_0216986c { char unknown_0_[0x20]; unsigned char unknown_1a0_; };
#else
struct Struct_ov004_0216986c { char unknown_0_[0x1a0]; unsigned char unknown_1a0_; };
#endif
extern Struct_ov004_0216986c* data_ov004_02171030;
extern struct Struct_02108760 data_02108760;

// USA: func_ov004_0216986c
extern "C" ARM int func_ov004_0216986c(void* arg0) {
    void* var0 = func_ov004_02168aa0(arg0, 0x1e);
    if (!var0) {
        return 0;
    }
    func_ov023_021fb274(var0, 2);
    func_ov011_021849e0((struct Struct_ov004_02158dcc*)arg0, 0x64);
    func_ov004_0216920c(arg0);
    func_ov011_021848a0(arg0, 0x46);
    if (data_ov004_02171030->unknown_1a0_ == 0) {
        func_0205eaa0(&data_02108760, 1, 0);
    }
    data_ov004_02171030->unknown_1a0_ = 1;
    return 0;
}
