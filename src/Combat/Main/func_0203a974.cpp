#include <globaldefs.h>

struct Struct_0203a950;
extern "C" void func_020bd984(struct Struct_0203a950*);
extern "C" void func_0203a914(void*);
extern "C" void* func_020bd914(void* arg0, unsigned int arg1);
struct Struct_0203a974;
extern "C" int func_020bd110(struct Struct_0203a974* arg0, const char* arg1, int arg2, int arg3);
extern "C" int func_020be6c4(void* arg0);
extern "C" void func_020be9e8(void* arg0, void* arg1);
struct Struct_0203a974_2;
extern "C" int func_020bdac0(struct Struct_0203a974_2*);

struct Struct_0203a974_3 {
    void* unknown_0_;
    char unknown_4_[0x9c];
    int unknown_a0_;
};

// USA: func_0203a974
extern "C" ARM void func_0203a974(struct Struct_0203a974_3* arg0, const char* arg1, void* arg2, unsigned int arg3, void* arg4) {
    void* var0;
    if (arg3 <= 1) {
        return;
    }
    var0 = arg0->unknown_0_;
    if (var0 == 0) {
        goto skip_both;
    }
    if (var0 == 0) {
        goto skip_destroy;
    }
    func_020bd984((struct Struct_0203a950*)var0);
skip_destroy:
    func_0203a914(arg0);
skip_both:
    arg0->unknown_0_ = func_020bd914(arg2, arg3);
    func_020bd110((struct Struct_0203a974*)((char*)arg0 + 4), arg1, (int)arg0->unknown_0_, 0);
    if (func_020be6c4(arg0->unknown_0_) == 0) {
        return;
    }
    if (arg4 != 0) {
        func_020be9e8(0, arg0->unknown_0_);
    }
    arg0->unknown_a0_ = func_020bdac0((struct Struct_0203a974_2*)arg0->unknown_0_);
}
