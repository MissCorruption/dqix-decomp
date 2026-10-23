#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"
#include "Resource/GameResources.h"

struct Struct_0201c1c8;
struct Struct_0201d530;
struct Vector3i;

struct Struct_0208e0c4;
struct Struct_0208e0c4_2;
extern "C" void func_0208e778(struct Struct_0208e0c4*, struct Struct_0208e0c4_2*);

extern int data_02108fe4;

struct Struct_02108ff4 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};
extern Struct_02108ff4 data_02108ff4[];

struct Struct_0208e0c4_3 {
    unsigned int unknown_0_0_ : 4;
    unsigned int unknown_0_4_ : 9;
    unsigned int unknown_1_5_ : 4;
    unsigned int unknown_2_1_ : 4;
    unsigned int unknown_2_5_ : 8;
    unsigned int unknown_3_5_ : 3;
};

struct Struct_0208e0c4_4 {
    struct {
        unsigned int unknown_0_0_ : 16;
        unsigned int unknown_2_0_ : 7;
        unsigned int unknown_2_7_ : 2;
        unsigned int unknown_3_1_ : 7;
    } unknown_0_;
    union {
        unsigned int unknown_0_;
        struct Struct_0208e0c4_3 unknown1_0_;
    } unknown_4_;
    int unknown_8_;
    int unknown_c_[8][3];
    struct Struct_0208e0c4_2* unknown_6c_;
};

// USA: func_0208e0c4
extern "C" ARM int func_0208e0c4(char* arg0) {
    SafeAllocator* var0 = (SafeAllocator*)((int)GetGameResources() + 0x1a0);
    struct Struct_0208e0c4_4* var1 = (struct Struct_0208e0c4_4*)var0->Allocate(0x70);
    var1->unknown_6c_ = 0;
    var1->unknown_0_.unknown_2_0_ = (unsigned short)((Script::Parameter*)((Struct_0201c1c8*)arg0))->ToInt();
    var1->unknown_0_.unknown_0_0_ = (unsigned short)((Script::Parameter*)((Struct_0201c1c8*)(arg0 + 8)))->ToInt();
    var1->unknown_0_.unknown_2_7_ = (unsigned char)((Script::Parameter*)((Struct_0201c1c8*)(arg0 + 0x10)))->ToInt();
    var1->unknown_4_.unknown1_0_.unknown_0_0_ = (unsigned char)((Script::Parameter*)((Struct_0201c1c8*)(arg0 + 0x20)))->ToInt();
    if (var1->unknown_4_.unknown1_0_.unknown_0_0_ == 8) {
        var1->unknown_4_.unknown1_0_.unknown_0_4_ = (unsigned short)((Script::Parameter*)((Struct_0201c1c8*)(arg0 + 0x28)))->ToInt();
        var1->unknown_4_.unknown1_0_.unknown_1_5_ = (unsigned char)((Script::Parameter*)((Struct_0201c1c8*)(arg0 + 0x30)))->ToInt();
        Struct_0201c1c8* var2 = (Struct_0201c1c8*)(arg0 + 0x38);
        arg0 += 0x40;
        var1->unknown_4_.unknown1_0_.unknown_2_1_ = (unsigned char)((Script::Parameter*)var2)->ToInt();
    } else {
        unsigned char* var3 = (unsigned char*)data_02108ff4;
        var1->unknown_4_.unknown1_0_.unknown_0_4_ = *(unsigned short*)(var3 + var1->unknown_4_.unknown1_0_.unknown_0_0_ * 4);
        var1->unknown_4_.unknown1_0_.unknown_1_5_ = ((Struct_02108ff4*)(var3 + var1->unknown_4_.unknown1_0_.unknown_0_0_ * 4))->unknown_2_;
        arg0 += 0x40;
        var1->unknown_4_.unknown1_0_.unknown_2_1_ = ((Struct_02108ff4*)(var3 + var1->unknown_4_.unknown1_0_.unknown_0_0_ * 4))->unknown_3_;
    }
    for (int var4 = 0; var4 < 8; var4++) {
        arg0 = (char*)(Struct_0201d530*)((Script::Parameter*)((Struct_0201d530*)arg0))->ToVec3fix((Vector3i*)var1->unknown_c_[var4]);
    }
    var1->unknown_8_ = 0;
    var1->unknown_4_.unknown_0_ &= 0xe01fffff;
    func_0208e778((Struct_0208e0c4*)&data_02108fe4, (Struct_0208e0c4_2*)var1);
    return 1;
}
