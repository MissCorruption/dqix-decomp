#include <globaldefs.h>

struct Struct_02040468;
struct Struct_0203f008_2;
struct Struct_0203f0fc_2;

extern "C" ARM struct Struct_0203f008_2* func_02040468(struct Struct_02040468* arg0, int arg1);
extern "C" ARM int func_02040184(struct Struct_0203f0fc_2* arg0, const char* arg1);

struct Struct_0203f0fc {
    struct Struct_02040468* unknown_0_;
    char unknown_4_[0x24];
    short unknown_28_;
};

// USA: func_0203f0fc
extern "C" ARM int func_0203f0fc(struct Struct_0203f0fc* arg0, const char* arg1) {
    struct Struct_0203f008_2* var0;
    short var1 = arg0->unknown_28_;
    if (var1 < 0) {
        return -1;
    }
    var0 = func_02040468(arg0->unknown_0_, var1);
    if (var0 == NULL) {
        return -1;
    }
    return func_02040184((struct Struct_0203f0fc_2*)((char*)var0 + 0x10), arg1);
}
