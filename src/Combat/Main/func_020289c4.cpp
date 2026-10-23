#include <globaldefs.h>
#if defined(jpn)
#define SUBOBJECT_OFFSET(x) ((x) - 4)
#else
#define SUBOBJECT_OFFSET(x) (x)
#endif

struct InitStruct;
struct ResetObject0209af34Struct;
struct ZeroWordAndByte0206ee60Struct;

extern "C" ARM void func_020280b0(struct InitStruct* s);
extern "C" ARM void func_0209bffc(void* obj);
extern "C" ARM void func_0209bc84(void* obj);
extern "C" ARM void func_0209af34(struct ResetObject0209af34Struct* obj);
extern "C" ARM void* func_0206efc4(void* obj);
extern "C" ARM void func_0206ee60(struct ZeroWordAndByte0206ee60Struct* s);
extern "C" ARM void func_020a8e88(void* p);

struct BigRecord020289c4 {
    unsigned short field0;
    unsigned short flagsX : 2;
    unsigned short flagB : 1;
    unsigned short flagC : 1;
    unsigned short flagD : 12;
    unsigned short field4;
    unsigned short field6;
    unsigned int field8;
    unsigned char fieldC;
    signed char fieldD;
};

// USA: func_020289c4
extern "C" ARM void func_020289c4(struct BigRecord020289c4* obj) {
    obj->flagB = 0;
    obj->flagC = 0;
    obj->field0 = 0;
    obj->field8 = 0;
    obj->field6 = 0;
    obj->fieldC = 0;
    obj->flagD = 0;
    obj->field4 = 0;
    obj->fieldD = -1;
    func_020280b0((struct InitStruct*)((char*)obj + SUBOBJECT_OFFSET(0x18)));
    func_0209bffc((char*)obj + SUBOBJECT_OFFSET(0x44));
    func_0209bc84((char*)obj + SUBOBJECT_OFFSET(0x60));
    func_0209af34((struct ResetObject0209af34Struct*)((char*)obj + SUBOBJECT_OFFSET(0x124)));
    func_0206efc4((char*)obj + SUBOBJECT_OFFSET(0x2f8));
    func_0206ee60((struct ZeroWordAndByte0206ee60Struct*)((char*)obj + SUBOBJECT_OFFSET(0x304)));
    func_020a8e88((char*)obj + SUBOBJECT_OFFSET(0x30c));
}
