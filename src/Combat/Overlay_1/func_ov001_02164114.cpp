#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov017_021d4cc0(void* arg0, int* arg1, int arg2);

struct Struct_ov001_02164d6c { unsigned int unknown_0_; int unknown_4_; };
extern struct Struct_ov001_02164d6c data_ov001_02164d6c[];
extern int data_ov001_02165d74[1000];

// USA: func_ov001_02164114
extern "C" ARM void func_ov001_02164114(void* arg0) {
    memset(data_ov001_02165d74, 0, 0xfa0);
    struct Struct_ov001_02164d6c* var0 = data_ov001_02164d6c;
    while (var0 != 0) {
        if (var0->unknown_0_ == 0) {
            break;
        }
        if (var0->unknown_4_ >= 0 && var0->unknown_4_ < 0x3e8) {
            if (data_ov001_02165d74[var0->unknown_4_] != 0) {
                while (1) {}
            }
            data_ov001_02165d74[var0->unknown_4_] = var0->unknown_0_;
        }
        var0++;
    }
    func_ov017_021d4cc0(arg0, data_ov001_02165d74, 0x3e8);
}
