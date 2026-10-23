#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0217da48_144 = 0x8c };
#else
enum { Enum_ov003_0217da48_144 = 0x90 };
#endif


struct Struct_0205d1e0;
extern "C" void func_0205d1e0(Struct_0205d1e0*);
struct Struct_0205d228;
extern "C" void func_0205d228(Struct_0205d228*);
struct Struct_0205d274;
extern "C" void func_0205d274(Struct_0205d274*);
extern "C" void func_0205da88(void*, int, int, int);
extern "C" void func_ov003_0217e100(void* arg0);

// USA: func_ov003_0217da48
extern "C" ARM void func_ov003_0217da48(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    void* var1 = *(void**)(var0 + Enum_ov003_0217da48_144);
    if (var1 != 0) {
        signed char var2 = *(signed char*)(var0 + 4);
        if (var2 == 2 || *(signed char*)(var0 + 5) == 0) {
            func_0205d1e0((Struct_0205d1e0*)var1);
            func_0205d228((Struct_0205d228*)(*(void**)(var0 + Enum_ov003_0217da48_144)));
            func_0205da88(*(void**)(var0 + Enum_ov003_0217da48_144), 2, 1, 1);
            func_0205d274((Struct_0205d274*)(*(void**)(var0 + Enum_ov003_0217da48_144)));
        }
    }
    func_ov003_0217e100(arg0);
}
