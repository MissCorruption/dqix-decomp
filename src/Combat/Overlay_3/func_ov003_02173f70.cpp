#include <globaldefs.h>
#include "Combat/BattleHeapOwner.h"
#if defined(jpn)
#define data_ov003_02180cc8 data_ov003_0217ef40
#endif
extern "C" void func_020e2490(Struct_020e2490*, int, int, void*, SafeAllocator*, int, unsigned char);
extern "C" void func_0205a198(Struct_02043368_2*);
extern unsigned int data_ov003_02180cc8[2];

#if defined(jpn)
extern char data_ov003_0217ece4[];
char *data_ov003_0217ece0 = data_ov003_0217ece4;
char data_ov003_0217ece4[] = "\x82\xbb\x82\xa4\x82\xd1\x82\xc8\x82\xb5";
#endif

// USA: func_ov003_02173f70
extern "C" ARM void func_ov003_02173f70(Struct_ov003_02173f70* arg0, SafeAllocator* arg1) {
    if (arg1 != NULL) {
        arg0->unknown_4_ = static_cast<SafeAllocator*>(arg1->Allocate(0x78));
        arg0->unknown_830_ = static_cast<Struct_02043368_2*>(arg1->Allocate(0x528));
        arg0->unknown_89c_ = static_cast<Struct_0207f7f0*>(arg1->Allocate(sizeof(Struct_0207f7f0)));
        arg0->unknown_82c_ = static_cast<Struct_02043368*>(arg1->Allocate(8));
        arg0->unknown_0_ = static_cast<Struct_020e2490*>(arg1->Allocate(0x24));
#if defined(jpn)
        func_020e2490(arg0->unknown_0_, 0, 1, arg0->unknown_82c_, arg1, 3, 0x40);
        static unsigned int sizes[6] = {0, 0x1800, 0x1e00, 0x400, 0x9800, 0x6000};
#else
        func_020e2490(arg0->unknown_0_, 0, 1, arg0->unknown_82c_, arg1, 4, 0x40);
        static unsigned int sizes[6] = {0, 0x2800, 0x1e00, 0x400, 0x9800, 0x6000};
#endif
        if (!(data_ov003_02180cc8[1] & 1)) {
#if defined(jpn)
            sizes[0] = 0x15c00;
#else
            sizes[0] = 0x16a66;
#endif
            data_ov003_02180cc8[1] |= 1;
        }
        for (unsigned char var0 = 0; var0 < 6; ++var0) {
            unsigned int var1 = sizes[var0];
            SafeAllocator* var2 = &arg0->unknown_4_[var0];
            var2->ResetAllocatorPointer();
            var2->CreateTypeA(arg1->Allocate(var1), var1);
            var2->Reset();
        }
        func_0207f84c(arg0->unknown_89c_);
        Struct_0207f7f0* var3 = arg0->unknown_89c_;
        var3->unknown_2c_ = arg0->unknown_8a0_;
        var3->unknown_38_ = 2;
        func_0207f7f0(arg0->unknown_89c_, arg0->unknown_8e0_, 8);
        arg0->unknown_89c_->unknown_3a_ = 2;
        for (unsigned char var4 = 0; var4 < 0x21; ++var4)
            func_0205a198(&arg0->unknown_830_[var4]);
        arg0->unknown_828_ = 0;
        arg0->unknown_818_ = arg0->unknown_830_;
        arg0->unknown_824_ = 0x21;
        arg0->unknown_814_ = arg0->unknown_82c_;
    }
}
