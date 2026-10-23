#include <globaldefs.h>

extern "C" void* func_ov000_02174da4(int unused, void* dest);
extern "C" int func_ov000_0217542c(void* obj);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_02042058(char* dst, const char* src);
extern "C" int func_02041b70(char* dst, int n, const char* name);

struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_020e51cc(int value);

extern short data_ov000_021834c4[4];

#if defined(jpn)
struct MenuLabels0217737c { char names[4][9]; };
extern const MenuLabels0217737c data_ov000_021845c6;
#endif

// USA: func_ov000_0217737c
extern "C" ARM void func_ov000_0217737c(void* objRaw, char* dst) {
    char* obj = (char*)objRaw;
    if (dst == 0) {
        return;
    }
    int localArr[4];
    func_ov000_02174da4((int)obj, localArr);
#if defined(jpn)
    int nameIdx = 0;
    MenuLabels0217737c labels(data_ov000_021845c6);
    signed char cursorId = *(signed char*)(obj + 0x1fa1);
#else
    signed char cursorId = *(signed char*)(obj + 0x1d69);
#endif
#if !defined(jpn)
    int nameIdx = 0;
#endif
    if (func_ov000_0217542c(obj)) {
        func_02041c08(dst, cursorId, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursorId);
    int keyArg = 0;
    for (int i = 0; i < 4; i++) {
        int v = localArr[i];
        if (v < 0) {
            continue;
        }
        if (nameIdx != 0) {
            int f = func_020e0434((struct Container020e0310*)(obj + 0xb8), keyArg);
            func_02042058(dst, (const char*)f);
        }
#if defined(jpn)
        char* r = labels.names[v];
#else
        int r = func_020e51cc(data_ov000_021834c4[v]);
#endif
        func_02041b70(dst, nameIdx, (const char*)r);
        nameIdx++;
    }
}
