#include <globaldefs.h>

extern "C" void func_ov004_02153978(void* arg0, short* arg1, short* arg2, short* arg3);
extern "C" void func_ov023_021f645c(void* arg0, int arg1, unsigned short arg2, int arg3);
extern "C" void func_ov023_021f64a8(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov004_021536e0(void* arg0, int arg1, int arg2);

struct Struct_ov004_021546c0 { short unknown_0_; short unknown_2_; unsigned char unknown_4_; unsigned char unknown_5_; };
extern Struct_ov004_021546c0* data_ov004_021707c0;
extern "C" void func_ov004_021546c0(Struct_ov004_021546c0* arg0, int arg1, int arg2, unsigned char* arg3, unsigned char* arg4);

// USA: func_ov004_02154748
extern "C" ARM int func_ov004_02154748(void* arg0) {
    short var0, var1, var2;
    func_ov004_02153978(arg0, &var0, &var1, &var2);
    unsigned short var3 = (unsigned short)(var1 - 1);
    unsigned short var4 = (unsigned short)(var3 + 0x25);
    func_ov023_021f645c(arg0, 0x27, 5, 0xf);
    func_ov023_021f645c(arg0, 0x28, var4, 0xf);

    unsigned char var5, var6;
    func_ov004_021546c0(data_ov004_021707c0, var1, -1, &var5, &var6);
    func_ov023_021f64a8(arg0, 0x38, var6, 0xf);
#if !defined(jpn)
    func_ov004_021536e0(arg0, 0x38, 0x19);
#endif
    return 0;
}
