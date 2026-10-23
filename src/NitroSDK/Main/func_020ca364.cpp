#include <globaldefs.h>

struct Struct_02111684_5 {
    int unknown_0_;
    char unknown_4_[0xc];
    void (*unknown_10_)(void*);
    void* unknown_14_;
};
extern struct Struct_02111684_5 data_02111684;

// USA: func_020ca364
extern "C" ARM void func_020ca364(void) {
    void (*var0)(void*);
    void* var1;
    data_02111684.unknown_0_ = 0;
    var0 = data_02111684.unknown_10_;
    var1 = data_02111684.unknown_14_;
    if (var0 != NULL) {
        var0(var1);
    }
}
