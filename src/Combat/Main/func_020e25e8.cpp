#include <globaldefs.h>

struct FlagOwner;

extern "C" void func_020e1cb8(struct FlagOwner* obj);
extern "C" void func_020e25cc(signed char* p);

struct Obj020e25e8 {
    char pad[0x10];
    struct FlagOwner* owner;
};

// USA: func_020e25e8
extern "C" ARM void func_020e25e8(struct Obj020e25e8* obj) {
    func_020e1cb8(obj->owner);
    func_020e25cc((signed char*)obj);
}
