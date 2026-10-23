#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02168438_1244 = 0x4d8 };
#else
enum { Enum_ov003_02168438_1244 = 0x4dc };
#endif


struct Struct_ov003_02168438 { char unknown_0_[Enum_ov003_02168438_1244]; void* unknown_4dc_; char unknown_4e0_[0xc]; unsigned char unknown_4ec_; char unknown_4ed_[0xb2]; unsigned char unknown_59f_; };

extern "C" ARM void func_ov003_021694b8(void* arg0, int arg1);
extern "C" ARM void func_ov003_021685dc(void* arg0);
extern "C" ARM void func_ov003_0216adbc(void* arg0);
extern "C" void func_ov003_02168654(void* arg0);
extern "C" void func_ov003_02168b50(void* arg0);
extern "C" ARM void func_ov003_02168cc8(void* arg0);
extern "C" void func_ov003_02168d3c(void* arg0, void* arg1, int arg2);
extern "C" ARM void func_ov003_02169430(void* arg0);
extern "C" void func_ov003_0216aa28(void* arg0);

// USA: func_ov003_02168438
extern "C" ARM int func_ov003_02168438(struct Struct_ov003_02168438* arg0, void* arg1) {
    arg0->unknown_4dc_ = arg1;
    unsigned char var0 = arg0->unknown_4ec_;
    if (var0 != 0 && var0 != 3 && var0 != 4) {
        unsigned char var1 = arg0->unknown_59f_;
        if (!(var1 & 2) || (var1 & 4)) {
            func_ov003_021694b8(arg0, (int)arg1);
        }
    }
    if (arg0->unknown_4ec_ != 0) {
        func_ov003_021685dc(arg0);
    }
    unsigned char var2 = arg0->unknown_59f_;
    if ((var2 & 2) && !(var2 & 4)) {
        func_ov003_0216adbc(arg0);
        return arg0->unknown_4ec_ == 6;
    }
    switch (arg0->unknown_4ec_) {
        case 0: func_ov003_02168654(arg0); break;
        case 1: func_ov003_02168b50(arg0); break;
        case 2: func_ov003_02168cc8(arg0); break;
        case 3: func_ov003_02168d3c(arg0, arg1, 0x3f2); break;
        case 4: func_ov003_02168d3c(arg0, arg1, 0x3fc); break;
        case 5: func_ov003_02169430(arg0); break;
        case 6: return 1;
        default: break;
    }
    func_ov003_0216aa28(arg0);
    return 0;
}
