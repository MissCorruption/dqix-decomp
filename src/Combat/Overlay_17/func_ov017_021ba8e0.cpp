#include <globaldefs.h>

#if defined(jpn)
#define REGION_FIELD_0 0x51c
#define REGION_FIELD_1 0x4ec
#else
#define REGION_FIELD_0 0x72c
#define REGION_FIELD_1 0x6fc
#endif


extern "C" int func_020421a0();

struct TailNode020469b4 { unsigned char pad0[2]; unsigned char inList; unsigned char pad3; void* next; };
struct TailList020469b4 { void* head; void* tail; };
extern "C" void func_020469b4(TailList020469b4* list, TailNode020469b4* node);

struct Obj021ba90c;
extern "C" void func_ov017_021ba90c(Obj021ba90c* p);

// USA: func_ov017_021ba8e0
extern "C" ARM void func_ov017_021ba8e0(unsigned char* base) {
    func_020421a0();
    func_ov017_021ba90c(*(Obj021ba90c**)(base + 0x3000 + REGION_FIELD_0));
    TailList020469b4* list = *(TailList020469b4**)(base + 0x3000 + REGION_FIELD_1);
    TailNode020469b4* node = *(TailNode020469b4**)(base + 0x3000 + REGION_FIELD_0);
    func_020469b4(list, node);
}
