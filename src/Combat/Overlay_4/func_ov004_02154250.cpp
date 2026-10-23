#include <globaldefs.h>

extern "C" int _s32_div_f(int a, int b);
extern char* data_ov004_021707c0; // pointer to struct with fields at 0x78 (short), 0x7a (short)

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" void func_ov004_021536e0(void*, int, int);
extern "C" int func_ov023_021f809c(void*, void*);
#if defined(jpn)
extern "C" unsigned int func_ov023_021f6f10(void* arg0);
#define NODE_KIND_CALL func_ov023_021f6f10
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#define NODE_KIND_CALL func_ov024_021f6f10
#endif

struct Struct_ov004_02154250 { char unknown_0_[0xe0]; void (*unknown_e0_)(void*, int); };
struct Struct_ov004_02154250_2 { struct Struct_ov004_02154250* unknown_0_; };

// USA: func_ov004_02154250
extern "C" ARM int func_ov004_02154250(void* arg0) {
    short var0 = *(short*)(data_ov004_021707c0 + 0x7a);
    short var1 = *(short*)(data_ov004_021707c0 + 0x78);
    int var2 = _s32_div_f(var0 * 100, var1);
    var2 = (short)var2;
    if (var2 == 0 && var0 == 0) var2 = 0;
    if (var2 == 0 && var0 != 0) var2 = 1;
    if (var2 > 100) var2 = 100;
    if (var2 < 0) var2 = 0;

    void* var3 = func_ov011_021849c8(arg0);
    struct Struct_ov004_02154250_2* var4 = (struct Struct_ov004_02154250_2*)func_ov023_021f6880(var3, 0x13);
    if (!var4) return 0;
    var4->unknown_0_->unknown_e0_(var4, var2);

    struct Struct_ov004_02154250_2* var5 = (struct Struct_ov004_02154250_2*)func_ov023_021f6880(var3, 0x14);
    if (!var5) return 0;
    var5->unknown_0_->unknown_e0_(var5, var0);

#if !defined(jpn)
    func_ov004_021536e0(arg0, 0x14, 0x19);
#endif

    void* var6 = func_ov023_021f6880(var3, 0x10);
    if (!var6) return 0;
    if (NODE_KIND_CALL(var6) != 6) return 0;
    func_ov023_021f809c(var6, arg0);
    return 0;
}
