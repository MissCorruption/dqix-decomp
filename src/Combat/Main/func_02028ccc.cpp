#include <globaldefs.h>

struct InitStruct;
struct ResetObject0209af34Struct;
struct ZeroWordAndByte0206ee60Struct;

extern "C" ARM void func_020280b0(struct InitStruct* s);
extern "C" ARM void func_0209bc84(void* obj);
extern "C" ARM void func_0209af34(struct ResetObject0209af34Struct* obj);
extern "C" ARM void func_0206ee60(struct ZeroWordAndByte0206ee60Struct* s);

// USA: func_02028ccc
extern "C" ARM void* func_02028ccc(void* obj) {
#if defined(jpn)
    func_020280b0((struct InitStruct*)((char*)obj + 0x14));
#else
    func_020280b0((struct InitStruct*)((char*)obj + 0x18));
#endif
#if defined(jpn)
    func_0209bc84((char*)obj + 0x5c);
#else
    func_0209bc84((char*)obj + 0x60);
#endif
#if defined(jpn)
    func_0209af34((struct ResetObject0209af34Struct*)((char*)obj + 0x120));
#else
    func_0209af34((struct ResetObject0209af34Struct*)((char*)obj + 0x124));
#endif
#if defined(jpn)
    func_0206ee60((struct ZeroWordAndByte0206ee60Struct*)((char*)obj + 0x300));
#else
    func_0206ee60((struct ZeroWordAndByte0206ee60Struct*)((char*)obj + 0x304));
#endif
    return obj;
}
