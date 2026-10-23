#include <globaldefs.h>

struct Struct_02029634_2 {
    char unknown_0_[0x34];
    struct Struct_02029634_2* unknown_34_;
};

struct Struct_02029634 {
    char unknown_0_[0x44];
    struct Struct_02029634_2* unknown_44_;
    char unknown_48_[0x12];
    unsigned short unknown_5a_;
};

// USA: func_0202a9ac
extern "C" ARM struct Struct_02029634_2* func_0202a9ac(struct Struct_02029634* arg0, int arg1) {
    struct Struct_02029634_2* var0;
    int var1;
    if (arg1 < 0 || arg0->unknown_5a_ <= arg1) {
        return 0;
    }
    var0 = arg0->unknown_44_;
    for (var1 = 0; var1 < arg1; var1++) {
        if (var0 == 0) {
            return 0;
        }
        var0 = var0->unknown_34_;
    }
    return var0;
}
