#include <globaldefs.h>

#if defined(jpn)
extern "C" void func_ov004_02168ed8(void* arg0, int arg1, int arg2);
extern "C" void func_ov004_02168eac(void* arg0, int arg1, int arg2);
#define func_ov023_021f6600 func_ov004_02168ed8
#define func_ov023_021f65d4 func_ov004_02168eac
#else
extern "C" void func_ov023_021f6600(void* arg0, int arg1, int arg2);
extern "C" void func_ov023_021f65d4(void* arg0, int arg1, int arg2);
#endif
extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern void* data_ov004_02171030;

#if defined(jpn)
enum { Enum_ov004_02169adc_400 = 0x10 };
#else
enum { Enum_ov004_02169adc_400 = 0x190 };
#endif

// USA: func_ov004_02169adc
extern "C" ARM int func_ov004_02169adc(void* arg0) {
    func_ov023_021f6600(arg0, 0x1e, 0x18);
    func_ov023_021f6600(arg0, 0x1f, 0x18);
    func_ov023_021f65d4(arg0, 2, 8);
    void* var0 = *(void**)((char*)data_ov004_02171030 + Enum_ov004_02169adc_400);
    if (!var0) return 0;
    if (*(unsigned char*)var0 != 0) {
        func_ov011_021848a0(arg0, 0x48);
    }
    return 0;
}
