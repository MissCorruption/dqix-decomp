#include <globaldefs.h>

struct Struct_ov031_02223268_2;
struct Struct_ov031_022269d8;
extern "C" Struct_ov031_02223268_2* func_ov031_0223baa0(Struct_ov031_022269d8* arg0, int arg1);
extern "C" int func_ov031_0223bdb0(int, int, int);
struct Struct_ov031_02222ce4;
extern "C" void func_ov031_0223bcc8(Struct_ov031_02222ce4* arg0, int arg1, int arg2);
extern "C" void func_ov031_0223bbd8(void* arg0, int arg1, int arg2, int arg3);

struct Struct_ov031_02290cc0_8 { unsigned char unknown_0_; char unknown_1_[3]; char* unknown_4_; };
extern Struct_ov031_02290cc0_8 data_ov031_02290cc0;
extern unsigned short data_ov031_02249082[];
extern unsigned short data_ov031_02249084[];

// USA: func_ov031_02232f58
extern "C" ARM void func_ov031_02232f58(void) {
    int var0 = data_ov031_02290cc0.unknown_0_ - 4;
    Struct_ov031_02223268_2* var1 = func_ov031_0223baa0(
        (Struct_ov031_022269d8*)*(void**)(data_ov031_02290cc0.unknown_4_ + var0 * 4 + 0x10), 0);
    func_ov031_0223bdb0(0, 0x32, (int)var1);

    func_ov031_0223bbd8(*(void**)(data_ov031_02290cc0.unknown_4_ + var0 * 4 + 0x10), -1,
        data_ov031_02249082[(var0 + 3) * 2], data_ov031_02249084[(var0 + 3) * 2]);

    func_ov031_0223bcc8(
        (Struct_ov031_02222ce4*)*(void**)(data_ov031_02290cc0.unknown_4_ + var0 * 4 + 0x10), -1, 3);
}
