#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021991e4_14012 = 0x34ac };
#else
enum { Enum_ov017_021991e4_14012 = 0x36bc };
#endif

extern "C" void func_ov017_021bf410(void* arg0);
extern "C" int func_ov017_021bf5f4(void* arg0);

struct Struct_0201bdac;
struct Struct_0201bdac_2;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

struct Struct_ov017_021991e4 {
    char unknown_0_[Enum_ov017_021991e4_14012];
    int unknown_36bc_;
    char unknown_36c0_[0x3c];
    struct Struct_0201bdac_2* unknown_36fc_;
    char unknown_3700_[0x20];
    void* unknown_3720_;
};

// USA: func_ov017_021991e4
extern "C" ARM void func_ov017_021991e4(struct Struct_ov017_021991e4* arg0) {
    func_ov017_021bf410(arg0->unknown_3720_);

    *(int*)((char*)arg0->unknown_3720_ + 0xc) = arg0->unknown_36bc_;

    if (!func_ov017_021bf5f4(arg0->unknown_3720_)) {
        return;
    }

    func_020469b4(arg0->unknown_36fc_, (struct Struct_0201bdac*)arg0->unknown_3720_);
}
