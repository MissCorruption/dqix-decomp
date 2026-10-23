#include <globaldefs.h>

extern "C" int func_ov004_021666bc(void* arg0, int* arg1);
#if defined(jpn)
struct Struct_ov004_0217101c { unsigned int unknown_0_; char* unknown_4_; };
extern Struct_ov004_0217101c data_ov004_0217101c;
#define CONTEXT_VALUE data_ov004_0217101c.unknown_4_
#else
extern char* data_ov004_0217101c;
#define CONTEXT_VALUE data_ov004_0217101c
#endif
extern "C" void func_ov004_02166608(void* arg0);
extern "C" void func_ov004_021660f4(void);
extern "C" void func_ov004_02165f2c(void);
extern "C" void func_ov004_02166730(void* arg0, int arg1);
extern "C" void func_ov004_02166bd8(void* arg0);
struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern struct Struct_02108760 data_02108760;

struct Struct_ov004_02166fe4 {
    char unknown_0_[0x50];
    unsigned char unknown_50_0_ : 7;
    unsigned char unknown_50_7_ : 1;
};

// USA: func_ov004_02166fe4
extern "C" ARM int func_ov004_02166fe4(void* arg0) {
    int var0;
    int var1 = func_ov004_021666bc(arg0, &var0);

    struct Struct_ov004_02166fe4* var2 = (struct Struct_ov004_02166fe4*)CONTEXT_VALUE;
    var2->unknown_50_7_ = var2->unknown_50_7_ + 1;

    func_ov004_02166608(arg0);
    func_ov004_021660f4();
    func_ov004_02165f2c();
    func_ov004_02166730(arg0, var1);
    func_ov004_02166bd8(arg0);
    func_0205eaa0(&data_02108760, 1, 0);
    return 0;
}
