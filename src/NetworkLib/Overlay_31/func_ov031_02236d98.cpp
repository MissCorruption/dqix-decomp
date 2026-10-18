#include <globaldefs.h>

struct Header_0223bd28;
void ExtractPackedHiLo_0223bd28(Header_0223bd28* h, int index, unsigned int* outHi, unsigned int* outLo);
extern "C" void func_ov031_0223bbd8(void*, int, int, int);
extern "C" void func_ov031_0223e2b8(void*, int);
extern "C" void func_ov031_02236e38(void*);

struct Mid_02236d98 { void* items[5]; int f14; };
// The pointer block at 0x02290d04..0x02290d13 (data_ov031_02290d04/d08/d0c/d10).
struct Base_02236d98 { void* field0; Mid_02236d98* p; void* field8; void* fieldC; };
extern Base_02236d98 data_ov031_02290d04;

// USA: func_ov031_02236d98
extern "C" ARM void func_ov031_02236d98(void* obj) {
    int hi;
    unsigned int lo;
    ExtractPackedHiLo_0223bd28((Header_0223bd28*)data_ov031_02290d04.p->items[4], 0, (unsigned int*)&hi, &lo);
    hi += 8;
    if (hi < 0xb0 || hi > 0x100) {
        func_ov031_0223bbd8(data_ov031_02290d04.p->items[4], -1, hi, 0x21);
        return;
    }
    hi = 0xb0;
    func_ov031_0223bbd8(data_ov031_02290d04.p->items[4], -1, hi, 0x21);
    func_ov031_0223e2b8(obj, (int)func_ov031_02236e38);
}
