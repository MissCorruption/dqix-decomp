#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_020546c8;
extern "C" void* func_02055168(struct Struct_020546c8* arg0);

struct Struct_020557a4;
extern "C" float func_020578e8(Struct_020557a4* arg0, Struct_020557a4* arg1);

struct Struct_020557a4_2 {
    char unknown_0_[4];
    int unknown_4_;
    char unknown_8_[0x28];
    void* unknown_30_;
    char unknown_34_[0x18];
    float unknown_4c_;
    float unknown_50_;
    float unknown_54_;
    float unknown_58_;
    unsigned short unknown_5c_;
    unsigned short unknown_5e_;
    unsigned short unknown_60_;
    unsigned short unknown_62_;
};

// USA: func_020557a4
extern "C" ARM void func_020557a4(struct Struct_020557a4_2* arg0) {
    void* var0 = func_02055168((struct Struct_020546c8*)arg0->unknown_30_);

    {
        if (*(unsigned char*)((char*)var0 + 0x10) <= 1)
            goto b2;
        if (*(unsigned char*)((char*)var0 + 0x10) <= arg0->unknown_5c_)
            goto b2;
        SignedAllocatorHeader* var1 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0xec))->GetNthElement(arg0->unknown_5c_);
        if (var1 == NULL)
            goto b2;
        if ((unsigned int)(**(int**)var1) >= (unsigned int)arg0->unknown_4_)
            goto b2;
        arg0->unknown_5c_ = arg0->unknown_5c_ + 1;
        if (arg0->unknown_5c_ >= *(unsigned char*)((char*)var0 + 0x10)) {
            arg0->unknown_4c_ = 0;
            goto b2;
        }
        SignedAllocatorHeader* var2 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0xec))->GetNthElement(arg0->unknown_5c_);
        if (var2 == NULL)
            goto b2;
        arg0->unknown_4c_ = func_020578e8((Struct_020557a4*)var1, (Struct_020557a4*)var2);
    }

b2:
    {
        if (*(unsigned char*)((char*)var0 + 0x11) <= 1)
            goto b3;
        if (*(unsigned char*)((char*)var0 + 0x11) <= arg0->unknown_5e_)
            goto b3;
        SignedAllocatorHeader* var3 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0xf8))->GetNthElement(arg0->unknown_5e_);
        if (var3 == NULL)
            goto b3;
        if ((unsigned int)(**(int**)var3) >= (unsigned int)arg0->unknown_4_)
            goto b3;
        arg0->unknown_5e_ = arg0->unknown_5e_ + 1;
        if (arg0->unknown_5e_ >= *(unsigned char*)((char*)var0 + 0x11)) {
            arg0->unknown_50_ = 0;
            goto b3;
        }
        SignedAllocatorHeader* var4 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0xf8))->GetNthElement(arg0->unknown_5e_);
        if (var4 == NULL)
            goto b3;
        arg0->unknown_50_ = func_020578e8((Struct_020557a4*)var3, (Struct_020557a4*)var4);
    }

b3:
    {
        if (*(unsigned char*)((char*)var0 + 0x12) <= 1)
            goto b4;
        if (*(unsigned char*)((char*)var0 + 0x12) <= arg0->unknown_60_)
            goto b4;
        SignedAllocatorHeader* var5 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x104))->GetNthElement(arg0->unknown_60_);
        if (var5 == NULL)
            goto b4;
        if ((unsigned int)(**(int**)var5) >= (unsigned int)arg0->unknown_4_)
            goto b4;
        arg0->unknown_60_ = arg0->unknown_60_ + 1;
        if (arg0->unknown_60_ >= *(unsigned char*)((char*)var0 + 0x12)) {
            arg0->unknown_54_ = 0;
            goto b4;
        }
        SignedAllocatorHeader* var6 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x104))->GetNthElement(arg0->unknown_60_);
        if (var6 == NULL)
            goto b4;
        arg0->unknown_54_ = func_020578e8((Struct_020557a4*)var5, (Struct_020557a4*)var6);
    }

b4:
    {
        if (*(unsigned char*)((char*)var0 + 0x13) <= 1)
            goto done;
        if (*(unsigned char*)((char*)var0 + 0x13) <= arg0->unknown_62_)
            goto done;
        SignedAllocatorHeader* var7 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x110))->GetNthElement(arg0->unknown_62_);
        if (var7 == NULL)
            goto done;
        if ((unsigned int)(**(int**)var7) >= (unsigned int)arg0->unknown_4_)
            goto done;
        arg0->unknown_62_ = arg0->unknown_62_ + 1;
        if (arg0->unknown_62_ >= *(unsigned char*)((char*)var0 + 0x13)) {
            arg0->unknown_58_ = 0;
            goto done;
        }
        SignedAllocatorHeader* var8 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x110))->GetNthElement(arg0->unknown_62_);
        if (var8 == NULL)
            goto done;
        arg0->unknown_58_ = func_020578e8((Struct_020557a4*)var7, (Struct_020557a4*)var8);
    }

done:
    ;
}
