#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0201d530;

extern "C" void func_0209953c(unsigned short);

struct Struct_0206ed44;
struct Struct_0206ed44_2;
extern "C" void func_0206eeec(struct Struct_0206ed44* arg0, struct Struct_0206ed44_2* arg1);

struct Struct_02108d04 {
    short unknown_0_;
    short unknown_2_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
};
extern struct Struct_02108d04 data_02108d04;

struct Struct_0206ed44_3 {
    short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
};

// USA: func_0206ed44
extern "C" ARM int func_0206ed44(void* arg0) {
    struct Struct_0206ed44_3* var0;
    int var1;
    short* var2;
    int var3;
    var3 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var2 = (short*)data_02108d04.unknown_8_;
    if (var2 != 0) {
        for (var1 = 0; var1 < data_02108d04.unknown_0_; var1++) {
            if (var2[var1] == var3) break;
        }
        if (var1 == data_02108d04.unknown_0_) {
            return 1;
        }
    }
    var0 = (struct Struct_0206ed44_3*)((SafeAllocator*)data_02108d04.unknown_4_)->Allocate(0x14);
    if (var0 == 0) {
        func_0209953c(2);
        return 0;
    }
    var0->unknown_0_ = (short)var3;
    var0->unknown_2_ = (unsigned char)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    var0->unknown_3_ = (unsigned char)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x10)))->ToInt();
    var0->unknown_4_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x18)))->ToInt();
    var0->unknown_8_ = (short)(int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x20)))->ToFloat());
    var0->unknown_a_ = (short)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x28)))->ToInt();
    var0->unknown_c_ = (short)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x30)))->ToInt();
    if (((unsigned int)var0->unknown_4_ << 26 >> 29) == 0) {
        var0->unknown_4_ &= ~7;
    }
    func_0206eeec((struct Struct_0206ed44*)data_02108d04.unknown_c_, (struct Struct_0206ed44_2*)var0);
    return 1;
}
