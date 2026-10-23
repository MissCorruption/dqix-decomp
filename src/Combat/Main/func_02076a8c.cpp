#include <globaldefs.h>

#include "Combat/FieldActorState.h"

// USA: func_02076a8c
extern "C" ARM void func_02076a8c(Struct_02076a8c* arg0) {
    func_02032e58(&arg0->unknown_0_.unknown_0_);

    arg0->unknown_0_.unknown_0_.unknown_0_.unknown_0_ |= 0x20;
    arg0->unknown_0_.unknown_0_.unknown_b4_ = 0x1c2;
    arg0->unknown_0_.unknown_130_ = 1;
    arg0->unknown_0_.unknown_134_ = 1;
    arg0->unknown_0_.unknown_138_ = 1;
    arg0->unknown_0_.unknown_139_ = 2;
    arg0->unknown_0_.unknown_13a_ = 1;
    arg0->unknown_0_.unknown_13b_ = 3;
    arg0->unknown_0_.unknown_13c_ = 1;
    arg0->unknown_0_.unknown_140_ = 0x1e;
    arg0->unknown_0_.unknown_144_ = 5;
    arg0->unknown_0_.unknown_148_ = 0x1000;
    arg0->unknown_0_.unknown_14c_ = 0;
    arg0->unknown_0_.unknown_150_ = 0;
    arg0->unknown_0_.unknown_154_ = 0;
    arg0->unknown_164_ = 0;
    arg0->unknown_166_ = 0;
    arg0->unknown_168_ = 0;
    arg0->unknown_17d_ = 0;
    arg0->unknown_170_ = 0;
    arg0->unknown_174_ = 0;
    arg0->unknown_176_ = 0;
    arg0->unknown_17a_ = 0;
    arg0->unknown_17b_ = 0;
    arg0->unknown_17c_ = 0;
    arg0->unknown_180_ = 0;
    arg0->unknown_184_ = 0;
    arg0->unknown_16a_ = 0;
    arg0->unknown_17e_ = 0;
    arg0->unknown_158_.x = 0;
    arg0->unknown_158_.y = 0;
    arg0->unknown_158_.z = 0;

    arg0->unknown_0_.unknown_0_.unknown_0_.DisableFlag(0x80);
}
