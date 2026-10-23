#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_021570b4_2196 = 0x714 };
#else
enum { Enum_ov006_021570b4_2196 = 0x894 };
#endif

struct Struct_ov006_02156e54 {
    char unknown_0_[0x70];
    int unknown_70_;
    short unknown_74_;
    short unknown_76_;
    short unknown_78_;
    unsigned char unknown_7a_;
};

struct Struct_ov006_02154614 {
    char unknown_0_[Enum_ov006_021570b4_2196];
    Struct_ov006_02156e54 unknown_894_[4];
};

// USA: func_ov006_021570b4
extern "C" ARM int func_ov006_021570b4(char* arg0) {
    Struct_ov006_02154614* var0 = (Struct_ov006_02154614*)arg0;
    Struct_ov006_02156e54* var1 = var0->unknown_894_;
    int var2 = 0;
    for (unsigned char var3 = 0; var3 < 4; var3++, var1++) {
        var2 = (var2 | var1->unknown_7a_) != 0;
    }
    return var2;
}
