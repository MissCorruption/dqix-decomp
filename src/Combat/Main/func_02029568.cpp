#include <globaldefs.h>
#include "Graphics/GlyphMetrics.h"

struct Struct_02029568 {
    int unknown_0_;
    char unknown_4_[0x3c];
    int unknown_40_;
    void* unknown_44_;
    int unknown_48_;
    int unknown_4c_;
    short unknown_50_;
    short unknown_52_;
    short unknown_54_;
    short unknown_56_;
    short unknown_58_;
    unsigned short unknown_5a_;
    short unknown_5c_;
    short unknown_5e_;
    short unknown_60_;
    unsigned short unknown_62_;
    short unknown_64_;
    short unknown_66_;
    short unknown_68_;
    short unknown_6a_;
    unsigned char unknown_6c_;
    unsigned char unknown_6d_;
    unsigned char unknown_6e_;
    unsigned char unknown_6f_;
    unsigned char unknown_70_;
    unsigned char unknown_71_;
    unsigned char unknown_72_;
    unsigned char unknown_73_;
    unsigned char unknown_74_;
    char unknown_75_[3];
    int unknown_78_[2];
};

extern "C" void func_0202949c(char* arg0);

// USA: func_02029568
extern "C" ARM void func_02029568(struct Struct_02029568* arg0) {
    func_0202949c((char*)arg0);
    arg0->unknown_0_ = 1;
    arg0->unknown_50_ = 0;
    arg0->unknown_52_ = 0;
    arg0->unknown_54_ = 0;
    arg0->unknown_56_ = 0;
    arg0->unknown_58_ = 0;
    arg0->unknown_6c_ = 1;
    arg0->unknown_5a_ = 0;
    arg0->unknown_5c_ = -1;
    arg0->unknown_5e_ = -1;
    arg0->unknown_60_ = -1;
    arg0->unknown_6d_ = 0;
    arg0->unknown_6e_ = 0;
    arg0->unknown_44_ = 0;
    arg0->unknown_48_ = 0;
    arg0->unknown_62_ = 10;
    arg0->unknown_64_ = 0;
    arg0->unknown_66_ = (short)(arg0->unknown_62_ + arg0->unknown_64_);
    arg0->unknown_6f_ = 0;
    arg0->unknown_6a_ = 0;
    arg0->unknown_68_ = 0;
    data_020ef74c.unknown_0_ = 0x7d40;
    arg0->unknown_71_ = 0;
    arg0->unknown_72_ = 0;
    arg0->unknown_73_ = 0;
    arg0->unknown_74_ = 0;
    arg0->unknown_40_ = 0;
    arg0->unknown_70_ = 0;
    arg0->unknown_4c_ = 8;
    for (int var0 = 0; var0 < 2; var0++) {
        arg0->unknown_78_[var0] = 0;
    }
}
