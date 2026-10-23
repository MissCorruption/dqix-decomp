#include <globaldefs.h>
extern "C" void func_0204acd0(struct Struct_02020cb8_7*);

extern "C" void func_0204c684(void*);

struct Struct_0204c754 {
    char unknown_0_[0xc8];
    char unknown_c8_;
};

// USA: func_0204c754
extern "C" ARM void func_0204c754(struct Struct_0204c754* arg0) {
    func_0204acd0((struct Struct_02020cb8_7*)(&arg0->unknown_c8_));
    func_0204c684(arg0);
}
