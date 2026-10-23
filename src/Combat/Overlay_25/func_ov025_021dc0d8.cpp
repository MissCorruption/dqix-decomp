#include <globaldefs.h>

#if defined(jpn)
enum { kBasePointerOffset = 0x218, kStatusFlagsOffset = 0x5b41 };
#else
enum { kBasePointerOffset = 0x29c, kStatusFlagsOffset = 0x5951 };
#endif

struct List02160094;
struct ListNode02160094;

extern "C" void* func_ov000_02160f20(void* obj);
extern "C" struct ListNode02160094* func_ov000_02160094(struct List02160094* list, int index);
extern "C" int func_ov000_0215fc60(char* base);
extern "C" void func_ov025_021dfce0(void* obj);
extern "C" int func_ov025_021dffac(void* obj);
extern "C" void func_ov025_021e0638(void* obj);

struct FlagsByte0x951 {
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    unsigned char bit2 : 1;
    unsigned char b3 : 1;
    unsigned char b4 : 1;
    unsigned char b5 : 1;
    unsigned char b6 : 1;
    unsigned char b7 : 1;
};

// USA: func_ov025_021dc0d8
extern "C" ARM void func_ov025_021dc0d8(void* obj) {
    void* base = *(void**)((char*)obj + kBasePointerOffset);
    void* slot = func_ov000_02160f20(obj);
    func_ov025_021dfce0(obj);
    if (func_ov000_0215fc60((char*)base) != 0) {
        struct ListNode02160094* node = func_ov000_02160094((struct List02160094*)slot, 0);
        if (node != NULL) {
            if (*(unsigned short*)((char*)node + 0x20) == 0) {
                return;
            }
        }
    }
    {
        int result = func_ov025_021dffac(obj);
        unsigned char temp = (unsigned char)result;
        struct FlagsByte0x951* flags = (struct FlagsByte0x951*)((char*)obj + kStatusFlagsOffset);
        flags->bit2 = temp;
        if (flags->bit2 != 1) {
            return;
        }
    }
    func_ov025_021e0638(obj);
}
