#include <globaldefs.h>

struct Struct_ov031_0224e234_2 {
    void* unknown_0_;
    void (*unknown_4_)(void*, void*, unsigned int);
};

extern Struct_ov031_0224e234_2 data_ov031_0224e234;

// USA: func_ov031_02207620
extern "C" ARM void func_ov031_02207620(void* arg0) {
    if (arg0 != NULL) {
        unsigned int var0 = *((unsigned int*)arg0 - 1);
        data_ov031_0224e234.unknown_4_(0, (unsigned int*)arg0 - 1, var0);
    }
}
