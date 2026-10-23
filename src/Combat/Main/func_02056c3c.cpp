#include <globaldefs.h>

#include "Combat/DistanceSort.h"

extern "C" int _fls(int a, int b);
extern "C" int _fgr(int a, int b);

// USA: func_02056c3c
extern "C" ARM void func_02056c3c(void* arg0, struct Struct_02056c3c* arg1, const int arg2, const int arg3) {
    int var0 = arg2;
    int var1 = arg3;
    int var2 = arg1[var0].unknown1_4_;
    for (;;) {
        while (_fls(arg1[var0].unknown1_4_, var2)) {
            var0++;
        }
        while (_fgr(arg1[var1].unknown1_4_, var2)) {
            var1--;
        }
        if (var0 >= var1) {
            break;
        }
        int var3 = arg1[var0].unknown1_4_;
        void* var4 = arg1[var0].unknown_0_;
        arg1[var0].unknown1_4_ = arg1[var1].unknown1_4_;
        arg1[var0].unknown_0_ = arg1[var1].unknown_0_;
        arg1[var1].unknown1_4_ = var3;
        arg1[var1].unknown_0_ = var4;
        var0++;
        var1--;
    }
    if (arg2 < var0 - 1) {
        func_02056c3c(arg0, arg1, arg2, var0 - 1);
    }
    if (var1 + 1 >= arg3) {
        return;
    }
    func_02056c3c(arg0, arg1, var1 + 1, arg3);
}
