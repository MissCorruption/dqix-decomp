#include <globaldefs.h>
#if defined(jpn)
#define data_020e93fc data_020e9508
#endif

#if defined(jpn)
#define func_020c0c3c func_020c2708
#endif

struct Struct_020e93fc {
    unsigned int unknown_0_[7];
};
extern Struct_020e93fc data_020e93fc;

struct Struct_020c089c;
extern "C" void func_020c089c(struct Struct_020c089c* arg0);
struct Struct_020c08ec;
extern "C" void func_020c08ec(struct Struct_020c08ec* arg0, const unsigned char* arg1, unsigned int arg2);
extern "C" void func_020c0a40(void);
extern "C" void func_020c0cd0(void* arg0, void* arg1, void* arg2, void* arg3, void* arg4, Struct_020e93fc* arg5);

// USA: func_020c0c3c
extern "C" ARM void func_020c0c3c(void* arg0, void* arg1, void* arg2, void* arg3, void* arg4) {
    unsigned char var0[0x14];
    Struct_020e93fc var1 = data_020e93fc;
    unsigned char var2[0x68];
    var1.unknown_0_[2] = (unsigned int)var2;
    var1.unknown_0_[3] = (unsigned int)var0;
    var1.unknown_0_[4] = (unsigned int)func_020c089c;
    var1.unknown_0_[5] = (unsigned int)func_020c08ec;
    var1.unknown_0_[6] = (unsigned int)func_020c0a40;
    func_020c0cd0(arg0, arg1, arg2, arg3, arg4, &var1);
}
