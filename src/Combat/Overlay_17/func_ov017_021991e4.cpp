#include <globaldefs.h>

#if defined(jpn)
enum { VALUE_FIELD_OFFSET = 0x34ac };
#else
enum { VALUE_FIELD_OFFSET = 0x36bc };
#endif

extern "C" void func_ov017_021bf410(void* self);
extern "C" int func_ov017_021bf5f4(void* self);

struct TailNode020469b4;
struct TailList020469b4;
extern "C" void func_020469b4(struct TailList020469b4* list, struct TailNode020469b4* node);

struct Obj021991e4 {
    char pad0[VALUE_FIELD_OFFSET];
    int field36bc;
    char pad1[0x3c];
    struct TailList020469b4* field36fc;
    char pad2[0x20];
    void* field3720;
};

// USA: func_ov017_021991e4
extern "C" ARM void func_ov017_021991e4(struct Obj021991e4* obj) {
    func_ov017_021bf410(obj->field3720);

    *(int*)((char*)obj->field3720 + 0xc) = obj->field36bc;

    if (!func_ov017_021bf5f4(obj->field3720)) {
        return;
    }

    func_020469b4(obj->field36fc, (struct TailNode020469b4*)obj->field3720);
}
