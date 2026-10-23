#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02168560_228 = 0xe0 };
#else
enum { Enum_ov003_02168560_228 = 0xe4 };
#endif

struct Struct_0205d1e0;
extern "C" void func_0205d1e0(struct Struct_0205d1e0* arg0);
struct Struct_0205d228;
extern "C" void func_0205d228(struct Struct_0205d228* arg0);
struct Struct_0205d274;
extern "C" void func_0205d274(struct Struct_0205d274* arg0);
extern "C" void func_0205da88(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov003_0216acf0(char* arg0);
extern "C" void func_ov003_0216a880(char* arg0);

// USA: func_ov003_02168560
extern "C" ARM void func_ov003_02168560(char* arg0) {
    func_0205d1e0((struct Struct_0205d1e0*)(arg0 + Enum_ov003_02168560_228));
    func_0205d228((struct Struct_0205d228*)(arg0 + Enum_ov003_02168560_228));
    func_0205da88(arg0 + Enum_ov003_02168560_228, 1, 2, 1);
    func_0205d274((struct Struct_0205d274*)(arg0 + Enum_ov003_02168560_228));
    func_ov003_0216acf0(arg0);
    func_ov003_0216a880(arg0);
}
