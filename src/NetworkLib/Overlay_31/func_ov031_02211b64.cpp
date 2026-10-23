#include <globaldefs.h>

struct Struct_ov031_02211b28;
struct Struct_ov031_0224e5ac {
    void* unknown_0_;
    void* unknown_4_;
};

extern Struct_ov031_0224e5ac data_ov031_0224e5ac;
extern "C" void* func_ov031_02211b28(Struct_ov031_02211b28*, int);
typedef Struct_ov031_02211b28* (*Type_ov031_02211b64)(void*, int, int);

// USA: func_ov031_02211b64
extern "C" ARM void* func_ov031_02211b64(void* arg0, void* arg1, int arg2) {
    Type_ov031_02211b64 var0 = (Type_ov031_02211b64)data_ov031_0224e5ac.unknown_4_;
    Struct_ov031_02211b28* var1 = var0(arg0, (int)arg1 + 0x20, arg2);
    if (var1 == NULL) return NULL;
    return func_ov031_02211b28(var1, (int)arg1);
}
