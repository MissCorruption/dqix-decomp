#if defined(jpn)
#define R(j,u) (j)
#define data_ov008_0218b490 data_ov008_0218c0f1
#define data_ov014_021896d4 data_ov014_0218a4e4
#define data_ov014_0218981c data_ov014_0218a5fc
#define data_ov015_02193d20 data_ov015_02194850
#define data_ov015_02193fe0 data_ov015_02194b20
#define data_ov015_02194052 data_ov015_02194b92
#define data_ov015_02194078 data_ov015_02194bb8
#define data_ov015_0219415c data_ov015_02194c9c
#define data_ov015_02194160 data_ov015_02194ca0
#define data_ov015_02194167 data_ov015_02194ca7
#define func_ov008_021895a8 func_ov008_0218a2b0
#define func_ov008_02189c70 func_ov008_0218a930
#define func_ov008_0218aee4 func_ov008_0218bb50
#define func_ov014_021886f8 func_ov014_021895c8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_0205d1e0;
extern "C" void func_0205d1e0(struct Struct_0205d1e0*);
struct Struct_0205d228;
extern "C" void func_0205d228(struct Struct_0205d228*);
struct Struct_0205d274;
extern "C" void func_0205d274(struct Struct_0205d274*);
extern "C" void func_0205da88(void*, int, int, int);
extern "C" void func_ov008_0218aee4(void* arg0);
extern "C" void func_ov008_02184878(void* arg0);

struct Struct_ov008_02189404 { char unknown_0_[R(0xeb8, 0xec0)]; unsigned char unknown_ec0_0_ : 1; };

// USA: func_ov008_02189404
extern "C" ARM void func_ov008_02189404(char* arg0) {
    func_0205d1e0((struct Struct_0205d1e0*)(arg0 + 0x18));
    func_0205d228((struct Struct_0205d228*)(arg0 + 0x18));
    func_0205da88(arg0 + 0x18, 1, 2, 1);
    func_0205d274((struct Struct_0205d274*)(arg0 + 0x18));
    func_ov008_0218aee4(arg0);
    if (*(signed char*)(arg0 + R(0xe97, 0xe9b)) == 0) return;
    if (!((struct Struct_ov008_02189404*)arg0)->unknown_ec0_0_) return;
    func_ov008_02184878(arg0 + 0x2a8);
}
