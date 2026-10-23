#include <globaldefs.h>

extern "C" void func_02098364(void* arg0);

struct Struct_02098970_2 { unsigned char unknown_0_[0xe8]; };
struct Struct_02098970 {
    struct Struct_02098970_2 unknown_0_[0x1e];
};

// USA: func_02098970
extern "C" ARM int func_02098970(struct Struct_02098970* arg0, struct Struct_02098970_2* arg1) {
    int var0;
    int var1 = 0;
    struct Struct_02098970_2* var2;
    for (var0 = 0; var0 < 0x1e; var0++) {
        var2 = &arg0->unknown_0_[var0];
        if (arg1 == var2) {
            var1 = 1;
            break;
        }
    }
    if (var1 == 0) return 0;
    *(int*)((char*)arg0 + 0x1b38) -= 1;
    func_02098364(var2);
    return 1;
}
