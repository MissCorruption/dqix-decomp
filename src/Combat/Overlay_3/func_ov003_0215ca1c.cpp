#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0215ca1c_956 = 0x3d4 };
enum { Enum_ov003_0215ca1c_152 = 0xb0 };
#else
enum { Enum_ov003_0215ca1c_956 = 0x3bc };
enum { Enum_ov003_0215ca1c_152 = 0x98 };
#endif

struct Struct_0205d1e0;
struct Struct_0205d228;
struct Struct_0205d274;
extern "C" void func_0205d1e0(Struct_0205d1e0*);
extern "C" void func_0205d228(Struct_0205d228*);
extern "C" void func_0205d274(Struct_0205d274*);
extern "C" void func_0205da88(void*, int, int, int);
extern "C" void func_ov003_0215e2a8(char* arg0);

// USA: func_ov003_0215ca1c
extern "C" ARM void func_ov003_0215ca1c(char* arg0) {
    if (*(unsigned char*)(arg0 + Enum_ov003_0215ca1c_956) == 0) return;
    func_0205d1e0((Struct_0205d1e0*)(arg0 + Enum_ov003_0215ca1c_152));
    func_0205d228((Struct_0205d228*)(arg0 + Enum_ov003_0215ca1c_152));
    func_0205da88(arg0 + Enum_ov003_0215ca1c_152, 1, 2, 1);
    func_0205d274((Struct_0205d274*)(arg0 + Enum_ov003_0215ca1c_152));
    func_ov003_0215e2a8(arg0);
}
