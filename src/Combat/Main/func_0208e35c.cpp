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

struct Struct_0208e35c {
    struct {
        unsigned int unknown_0_0_ : 16;
        unsigned int unknown_2_0_ : 7;
        unsigned int unknown_2_7_ : 2;
        unsigned int unknown_3_1_ : 7;
    } unknown_0_;
    struct {
        unsigned int unknown_0_0_ : 4;
        unsigned int unknown_0_4_ : 13;
        unsigned int unknown_2_1_ : 4;
        unsigned int unknown_2_5_ : 8;
        unsigned int unknown_3_5_ : 3;
    } unknown_4_;
    unsigned int unknown_8_;
    int unknown_c_[7][3];
    char unknown_60_[0xc];
    struct Struct_0208e0c4_2* unknown_6c_;
};

// USA: func_0208e35c
extern "C" ARM int func_0208e35c(char* arg0) {
    SafeAllocator* var0 = (SafeAllocator*)((int)GetGameResources() + 0x1a0);
    struct Struct_0208e35c* var1 = (struct Struct_0208e35c*)var0->Allocate(0x70);
    var1->unknown_6c_ = NULL;
    int var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var1->unknown_0_.unknown_2_0_ = var2;
    var1->unknown_4_.unknown_2_1_ = 8;
    var1->unknown_0_.unknown_2_7_ = 1;
    arg0 += 8;
    var1->unknown_4_.unknown_0_0_ = 9;
    var1->unknown_0_.unknown_0_0_ = 0;
    for (int var3 = 0; var3 < 7; var3++) {
        arg0 = (char*)(Struct_0201d530*)((Script::Parameter*)((struct Struct_0201d530*)arg0))->ToVec3fix((Vector3i*)var1->unknown_c_[var3]);
    }
    var1->unknown_8_ = 0;
    var1->unknown_4_.unknown_2_5_ = 0;
    func_0208e778((struct Struct_0208e0c4*)&data_02108fe4, (struct Struct_0208e0c4_2*)var1);
    return 1;
}
