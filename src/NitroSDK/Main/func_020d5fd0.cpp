#include <globaldefs.h>

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

typedef void (*Type_020d42e0)(void* arg);

struct Struct_020d5d34_2
{
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_[254];
};

struct Struct_020d5d34
{
    Struct_020d5d34_2 unknown_0_[4];
    unsigned short unknown_800_[4];
    unsigned short unknown_808_;
    unsigned short unknown_80a_;
    unsigned short unknown_80c_;
    unsigned short unknown_80e_;
    unsigned short unknown_810_;
    unsigned short unknown_812_;
    unsigned short unknown_814_;
    unsigned short unknown_816_;
    unsigned short unknown_818_;
    unsigned short unknown_81a_;
    unsigned short unknown_81c_;
    unsigned short unknown_81e_[1];
};

struct Struct_020d5fd0;
struct Struct_020d5fd0_2;

extern "C" int func_020d424c(int arg0, ...);
extern "C" void func_020ca3b8(const void* src, void* dst, unsigned long size);
extern "C" int func_020d59bc(Type_020d42e0 arg0, void* arg1, const unsigned short* arg2,
                             unsigned short arg3, unsigned short arg4, unsigned short arg5,
                             unsigned short arg6);
extern "C" void func_020d6318(void* arg0);
extern "C" unsigned short func_020d46cc();
extern "C" unsigned short func_020d46fc();
extern "C" void func_020d6610(Struct_020d5fd0* arg0, int arg1, int arg2);
extern "C" void func_020d66dc(Struct_020d5fd0_2* arg0, int arg1);

// USA: func_020d5fd0
extern "C" ARM int func_020d5fd0(Struct_020d5d34* arg0, const unsigned short* arg1, Struct_020d5d34_2* arg2)
{
    int var0;
    unsigned short var1;
    unsigned short var2;
    unsigned short var3;
    var0 = func_020d424c(2, 9, 10);
    if (var0 != 0)
        return var0;
    if (arg0 == NULL)
        return 6;
    if (arg1 == NULL)
        return 6;
    if (arg2 == NULL)
        return 6;
    var1 = func_020d46cc();
    if (var1 == 0)
        var2 = func_020d46fc();
    var3 = arg0->unknown_81c_;
    if (var3 == 5)
        return 1;
    if (var3 != 1 && var3 != 4)
        return 3;
    var0 = 5;
    if (var1 == 0)
    {
        int var4 = false;
        int var5 = false;
        if (var3 == 4)
        {
            int var6;
            int var7;
            arg0->unknown_81c_ = 1;
            var7 = (arg0->unknown_808_ + 4 - 1) & 3;
            var6 = func_020d59bc(func_020d6318, arg0, (unsigned short*)&arg0->unknown_0_[var7],
                                arg0->unknown_814_, arg0->unknown_80e_ & var2, arg0->unknown_816_, 1);
            if (var6 == 7)
            {
                arg0->unknown_800_[var7] = 0xffff;
                arg0->unknown_80a_ = (arg0->unknown_80a_ + 1) & 3;
            }
            else if (var6 != 0 && var6 != 2)
            {
                arg0->unknown_81c_ = 5;
                return 1;
            }
        }
        if (arg0->unknown_80c_ != arg0->unknown_80a_)
        {
            arg0->unknown_0_[arg0->unknown_80c_].unknown_0_ |= 1;
            func_020ca3b8(&arg0->unknown_0_[arg0->unknown_80c_], arg2, sizeof(Struct_020d5d34_2));
            arg0->unknown_81a_ = arg0->unknown_800_[arg0->unknown_80c_];
            arg0->unknown_80c_ = (arg0->unknown_80c_ + 1) & 3;
            var4 = true;
            var0 = 0;
            if (arg0->unknown_818_ == false && var2 != 0 && arg0->unknown_0_[arg0->unknown_808_].unknown_0_ == 1)
                var5 = true;
            else
                var5 = false;
        }
        func_020d66dc((Struct_020d5fd0_2*)arg0, false);
        if (var4)
        {
            func_020d6610((Struct_020d5fd0*)arg0, 0, (int)arg1);
            if (arg0->unknown_818_ == false)
                func_020d66dc((Struct_020d5fd0_2*)arg0, var5);
        }
    }
    else
    {
        int var8 = false;
        if (var3 == 4)
        {
            var8 = true;
            arg0->unknown_81c_ = 1;
        }
        else if (arg0->unknown_80c_ != arg0->unknown_808_)
        {
            if (!(arg0->unknown_0_[arg0->unknown_80c_].unknown_0_ & 1))
            {
                arg0->unknown_0_[arg0->unknown_80c_].unknown_0_ |= 1;
            }
            else
            {
                func_020ca3b8(&arg0->unknown_0_[arg0->unknown_80c_], arg2, sizeof(Struct_020d5d34_2));
                arg0->unknown_81a_ = arg0->unknown_800_[arg0->unknown_80c_];
                arg0->unknown_80c_ = (arg0->unknown_80c_ + 1) & 3;
                var8 = true;
                var0 = 0;
            }
        }
        if (var8)
        {
            unsigned short* const var9 = (unsigned short*)((unsigned char*)&arg0->unknown_0_[arg0->unknown_80a_] + 32);
            int var10;
            func_020ca3b8(arg1, var9, arg0->unknown_810_);
            var10 = func_020d59bc(func_020d6318, arg0, var9, arg0->unknown_810_, arg0->unknown_80e_, arg0->unknown_816_, 1);
            arg0->unknown_80a_ = (arg0->unknown_80a_ + 1) & 3;
            if (var10 != 2 && var10 != 0)
            {
                arg0->unknown_81c_ = 5;
                var0 = 1;
            }
        }
    }
    return var0;
}
