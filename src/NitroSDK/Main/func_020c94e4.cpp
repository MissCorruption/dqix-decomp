#include <globaldefs.h>

typedef void (*Type_020c94e4)(void* arg);

struct Struct_020c94e4_2
{
    Type_020c94e4 unknown_0_;
    void* unknown_4_;
    unsigned long unknown_8_;
    unsigned long unknown_c_;
    short unknown_10_;
    short unknown_12_;
    Struct_020c94e4_2* unknown_14_;
    Struct_020c94e4_2* unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
};

struct Struct_02111654_5
{
    unsigned short unknown_0_;
    long unknown_4_;
    long unknown_8_;
    Struct_020c94e4_2* unknown_c_;
    Struct_020c94e4_2* unknown_10_;
};

extern Struct_02111654_5 data_02111654;
extern "C" char data_027e0000[];

struct Struct_020c94e4;
struct Struct_020c9384;
struct Struct_020c92d0;

unsigned int DisableSpecificInterrupts(unsigned int flagMask);
unsigned int AcknowledgeSpecificInterrupts(unsigned int flagMask);
extern "C" long func_020c96a8(int arg0);
extern "C" int func_020c965c(Struct_020c94e4* arg0, int arg1, int arg2);
extern "C" void func_020c9384(Struct_020c9384* arg0);
extern "C" void func_020c92d0(Struct_020c92d0* arg0);
extern "C" void func_020c945c(Struct_020c94e4_2* arg0);

#define DISPSTAT (*(volatile unsigned short*)0x04000004)
#define VCOUNT (*(volatile unsigned short*)0x04000006)

static inline long inline_020c94e4()
{
    return VCOUNT;
}

// USA: func_020c94e4
extern "C" ARM void func_020c94e4()
{
    Struct_020c94e4_2* var0;
    Type_020c94e4 var1;
    long var2;
    long var3;
    long var4;

    DisableSpecificInterrupts(4);
    DISPSTAT &= ~0x20;
    *(unsigned int*)((unsigned int)data_027e0000 + 0x3ff8) |= 4;
    unsigned short var5 = DISPSTAT;
    var3 = ((var5 >> 8) & 0xff) | ((var5 << 1) & 0x100);
    var4 = func_020c96a8(var3 - 1);

    if (NULL == (var0 = data_02111654.unknown_c_))
    {
        return;
    }
    do
    {
        var3 = inline_020c94e4();
        var4 = func_020c96a8(var3);
        var2 = func_020c965c((Struct_020c94e4*)var0, var4, var3);
        switch (var2)
        {
        case 0:
            func_020c945c(var0);
            if (var0->unknown_10_ != inline_020c94e4() || var0->unknown_c_ != var4)
            {
                return;
            }
            DisableSpecificInterrupts(4);
            DISPSTAT &= ~0x20;
            AcknowledgeSpecificInterrupts(4);
        case 1:
            var1 = var0->unknown_0_;
            func_020c9384((Struct_020c9384*)var0);
            var0->unknown_0_ = NULL;
            if (var1)
            {
                var1(var0->unknown_4_);
            }
            if (var0->unknown_1c_ && !var0->unknown_24_)
            {
                var0->unknown_0_ = var1;
                var0->unknown_c_ = data_02111654.unknown_8_ + 1;
                func_020c92d0((Struct_020c92d0*)var0);
            }
            break;
        case 2:
            func_020c9384((Struct_020c9384*)var0);
            var0->unknown_c_ = data_02111654.unknown_8_ + 1;
            func_020c92d0((Struct_020c92d0*)var0);
            break;
        }
    } while (NULL != (var0 = data_02111654.unknown_c_));
}
