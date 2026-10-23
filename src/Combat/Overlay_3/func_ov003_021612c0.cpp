#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_021612c0_54 = 0x2a };
enum { Enum_ov003_021612c0_776 = 0x1f0 };
enum { Enum_ov003_021612c0_804 = 0x20c };
enum { Enum_ov003_021612c0_912 = 0x278 };
enum { Enum_ov003_021612c0_808 = 0x210 };
enum { Enum_ov003_021612c0_1136 = 0x298 };
enum { Enum_ov003_021612c0_916 = 0x27c };
enum { Enum_ov003_021612c0_1160 = 0x2b0 };
enum { Enum_ov003_021612c0_1142 = 0x29e };
enum { Enum_ov003_021612c0_1180 = 0x2c4 };
enum { Enum_ov003_021612c0_1162 = 0x2b2 };
#else
enum { Enum_ov003_021612c0_54 = 0x36 };
enum { Enum_ov003_021612c0_776 = 0x308 };
enum { Enum_ov003_021612c0_804 = 0x324 };
enum { Enum_ov003_021612c0_912 = 0x390 };
enum { Enum_ov003_021612c0_808 = 0x328 };
enum { Enum_ov003_021612c0_1136 = 0x470 };
enum { Enum_ov003_021612c0_916 = 0x394 };
enum { Enum_ov003_021612c0_1160 = 0x488 };
enum { Enum_ov003_021612c0_1142 = 0x476 };
enum { Enum_ov003_021612c0_1180 = 0x49c };
enum { Enum_ov003_021612c0_1162 = 0x48a };
#endif

struct Struct_0207fdcc_2 {
    char unknown_0_[Enum_ov003_021612c0_54];
    unsigned short unknown_36_;
};

struct Struct_02081f20_2;
struct Struct_020e280c;
struct Struct_02108760;

extern "C" int func_020813ec(void *arg0, int arg1);
extern "C" void func_0208203c(struct Struct_02081f20_2 *arg0);
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_02080c04(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_020e280c(struct Struct_020e280c* arg0, void* arg1);

extern struct Struct_02108760 data_02108760;

struct Struct_ov003_021612c0 {
    char unknown_0_[Enum_ov003_021612c0_776];
    char unknown_308_[Enum_ov003_021612c0_804 - Enum_ov003_021612c0_776];
    struct Struct_0207fdcc_2* unknown_324_;
    char unknown_328_[Enum_ov003_021612c0_912 - Enum_ov003_021612c0_808];
    struct Struct_020e280c* unknown_390_;
    char unknown_394_[Enum_ov003_021612c0_1136 - Enum_ov003_021612c0_916];
    int unknown_470_;
    short unknown_474_;
    char unknown_476_[Enum_ov003_021612c0_1160 - Enum_ov003_021612c0_1142];
    short unknown_488_;
    char unknown_48a_[Enum_ov003_021612c0_1180 - Enum_ov003_021612c0_1162];
    short unknown_49c_;
};

// USA: func_ov003_021612c0
extern "C" ARM void func_ov003_021612c0(struct Struct_ov003_021612c0* arg0) {
    arg0->unknown_488_ = 9;
    arg0->unknown_474_ = arg0->unknown_49c_ = 0x2c;
    arg0->unknown_324_->unknown_36_ = arg0->unknown_49c_;
    func_020813ec(arg0->unknown_324_, arg0->unknown_488_);
    func_0208203c((struct Struct_02081f20_2*)arg0->unknown_308_);
    arg0->unknown_470_ = 0;
    func_0205eaa0(&data_02108760, 5, 0);
    if (arg0->unknown_390_ == NULL) {
        return;
    }
    func_02080c04(arg0->unknown_324_, arg0->unknown_488_);
    func_020e280c(arg0->unknown_390_, (void*)-1);
}
