#if defined(jpn)
enum { RegionalOffset = 0x4214 };
#else
enum { RegionalOffset = 0x44c4 };
#endif

#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" int* func_0202ae18(void);
extern "C" int func_0202c508(void* obj);
extern "C" void func_ov017_021d0924(int kind, unsigned char index, int flags, unsigned short packedTime);

struct EntryDEE8;
struct EntryDEC8;
extern "C" void func_0206dee8(EntryDEE8* base, unsigned char index, unsigned char* outA, unsigned char* outB, unsigned char* outC);
extern "C" void func_0206dec8(EntryDEC8* base, unsigned char index, unsigned char a, unsigned char b, unsigned char c);

extern "C" void func_0206e080(char* base, int index);
extern "C" void func_0206e0d0(char* base, int index);
extern "C" void func_0206ebf4(char* obj);
extern "C" int func_0202b7d8(int* obj);
extern "C" void func_0206df14(unsigned char* obj);

// USA: func_020703c8
extern "C" ARM void func_020703c8(int index, int hour, int minute, int second) {
    unsigned char curHour;
    unsigned char curMinute;
    unsigned char curSecond;
    void* entry = func_0205ec34();
    int* state = func_0202ae18();
    char* owner = *(char**)((char*)GetGameResources() + RegionalOffset);

    func_0206dee8((EntryDEE8*)entry, index, &curHour, &curMinute, &curSecond);
    if (curSecond + (curHour * 10000 + curMinute * 100) >= second + (hour * 10000 + minute * 100)) {
        return;
    }
    if (curHour != hour) {
        func_0206e080((char*)entry, index);
        func_0206ebf4(owner);
    } else if (curMinute != minute) {
        func_0206e0d0((char*)entry, index);
        func_0206ebf4(owner);
    }
    func_0206dec8((EntryDEC8*)entry, index, hour, minute, second);
    if (func_0202b7d8(state) != 0 && func_0202c508(state) != 0) {
        func_ov017_021d0924(2, index, 0, second | (hour << 10 | minute << 5));
    }
    func_0206df14((unsigned char*)entry);
}
