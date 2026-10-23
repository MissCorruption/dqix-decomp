#include <globaldefs.h>

struct Struct_0201a300_5;
struct Struct_020287b4_2;
struct Struct_02028cfc;

extern "C" ARM void func_020280b0(struct Struct_0201a300_5* arg0);
extern "C" ARM void func_0209bc84(void* arg0);
extern "C" ARM void func_0209af34(struct Struct_020287b4_2* arg0);
extern "C" ARM void func_0206ee70(struct Struct_02028cfc* arg0);

// USA: func_02028cfc
extern "C" ARM void* func_02028cfc(void* arg0) {
#if defined(jpn)
    func_0206ee70((struct Struct_02028cfc*)((char*)arg0 + 0x300));
#else
    func_0206ee70((struct Struct_02028cfc*)((char*)arg0 + 0x304));
#endif
#if defined(jpn)
    func_0209af34((struct Struct_020287b4_2*)((char*)arg0 + 0x120));
#else
    func_0209af34((struct Struct_020287b4_2*)((char*)arg0 + 0x124));
#endif
#if defined(jpn)
    func_0209bc84((char*)arg0 + 0x5c);
#else
    func_0209bc84((char*)arg0 + 0x60);
#endif
#if defined(jpn)
    func_020280b0((struct Struct_0201a300_5*)((char*)arg0 + 0x14));
#else
    func_020280b0((struct Struct_0201a300_5*)((char*)arg0 + 0x18));
#endif
    return arg0;
}
