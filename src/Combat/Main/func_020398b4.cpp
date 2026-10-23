#include <globaldefs.h>
#include "Combat/ActorAction.h"

#if defined(jpn)
enum { Enum_020398b4_620 = 0x260 };
#else
enum { Enum_020398b4_620 = 0x26c };
#endif

// USA: func_020398b4
extern "C" ARM void func_020398b4(GameObject* arg0, Struct_02037d10* arg1) {
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_0_ = arg1->unknown_0_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_1_ = arg1->unknown_1_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_2_ = arg1->unknown_2_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_3_ = arg1->unknown_3_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_4_ = arg1->unknown_4_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_6_ = arg1->unknown_6_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_8_ = arg1->unknown_8_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_a_ = arg1->unknown_a_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_c_ = arg1->unknown_c_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_18_ = arg1->unknown_18_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_24_ = arg1->unknown_24_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_30_ = arg1->unknown_30_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_3c_ = arg1->unknown_3c_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_48_ = arg1->unknown_48_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_4c_ = arg1->unknown_4c_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_50_ = arg1->unknown_50_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_52_ = arg1->unknown_52_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_53_ = arg1->unknown_53_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_54_ = arg1->unknown_54_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_58_ = arg1->unknown_58_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_5c_ = arg1->unknown_5c_;
    ((Struct_02037d10*)((char*)arg0 + Enum_020398b4_620))->unknown_60_ = arg1->unknown_60_;
}
