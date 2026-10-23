#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_0217d9d8_2456 = 0x868 };
enum { Enum_ov003_0217d9d8_2478 = 0x7de };
enum { Enum_ov003_0217d9d8_2464 = 0x870 };
#else
enum { Enum_ov003_0217d9d8_2456 = 0x998 };
enum { Enum_ov003_0217d9d8_2478 = 0x9ae };
enum { Enum_ov003_0217d9d8_2464 = 0x9a0 };
#endif


extern "C" int func_020421a0();
extern "C" void func_ov003_0217dd10(char* arg0, int arg1);
extern "C" void func_02043204(char* arg0);

struct Struct_ov003_0217d9d8 {
    char unknown_0_[4];
    signed char unknown_4_;
    signed char unknown_5_;
};

// USA: func_ov003_0217d9d8
extern "C" ARM void func_ov003_0217d9d8(struct Struct_ov003_0217d9d8* arg0) {
    char* var0 = (char*)func_020421a0();
    signed char var1 = arg0->unknown_5_;

    if (var1 == 0) {
        func_ov003_0217dd10((char*)arg0, 0x1869f);
        *(int*)(var0 + Enum_ov003_0217d9d8_2456) = 1;
        arg0->unknown_5_ = 1;
        return;
    }

    if (var1 != 1) return;

    *(unsigned char*)(var0 + 0x1000 + Enum_ov003_0217d9d8_2478) = 0;
    if (*(int*)(var0 + Enum_ov003_0217d9d8_2464) != 0) return;

    func_02043204(var0);
    arg0->unknown_4_ = 4;
    arg0->unknown_5_ = 0;
}
