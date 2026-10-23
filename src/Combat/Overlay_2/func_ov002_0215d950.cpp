#include <globaldefs.h>
#include "GameState/GameState.h"

struct UnkStruct0205c508;
struct StoreStruct;
struct Container020dedd0;
struct KeyMap020a0b3c;

extern "C" void *func_020421a0();
extern "C" int func_02041c08(char *dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char *dst, int cursor);
extern "C" int func_02041b70(char *dst, int n, const char *name);
extern "C" int func_02042058(char *dst, const char *src);
extern "C" void func_0205c508(struct UnkStruct0205c508 *s, int *out1, int *out2);
extern "C" void func_02046380(void *messages);
extern "C" void func_020465c0(StoreStruct *messages, int index, int value);
extern "C" char *func_020dedd0(Container020dedd0 *c, int key);
extern "C" void func_0206819c(const char *src, char *dst, int flag);
extern "C" int func_020a0b3c(KeyMap020a0b3c *map, int key);
extern "C" void func_ov002_0215b918(unsigned char *self, int a, int b, int c);
extern "C" void __clear(void *buf, int n);
extern "C" int sprintf(char *dst, const char *fmt, ...);
extern char data_ov002_0216d270[];
#if defined(jpn)
struct Obj02046574;
struct Container020e0310;
extern "C" int func_020d2ff0(const char *s);
extern "C" void func_02046574(struct Obj02046574 *obj, int index, char *str);
extern "C" int func_020e0434(struct Container020e0310 *c, int key);
extern "C" void func_020465f0(unsigned char *messages, int index, unsigned char digits);
extern "C" void func_020465d8(unsigned char *messages, int index, unsigned char value);
extern "C" void func_020474a8(void *messages, int a, const char *format, char *output);
extern "C" void func_02042428(char *dst, int a);
extern "C" void *memset(void *dst, int value, unsigned int length);
#endif

// USA: func_ov002_0215d950
extern "C" ARM void func_ov002_0215d950(char *p, char *dst, int flag2) {
#if defined(jpn)
    char line[0x40];
    int out1, out2;
    char *tbl;
    void *msg;
    int n;
    int i;
    int count;
    if (dst == 0) return;
    int cursor = *(short *) (p + 0x1a00 + 0xb0) & 7;
    if (flag2) func_02041c08(dst, cursor, 8, 5, 5, 5);
    func_02041ea4(dst, cursor);
    tbl       = (char *) func_02010828(GameState::GetInstance()) + 0xe04;
    msg       = func_020421a0();
    char *fld = p + 0xe20;
    int sel   = *(int *) (fld + 0x68);
    count     = *(int *) (fld + 0x58);
    func_0205c508((struct UnkStruct0205c508 *) (fld + 0x54), &out1, &out2);
    n = 0;
    for (i = out1; i < out2; i++) {
        func_02046380(msg);
        func_020465c0((StoreStruct *) msg, 0, n);
        char *e = func_020dedd0((Container020dedd0 *) (p + 0x750), *(short *) (tbl + i * 2 + 0xc));
        if (e != 0) {
            int len = func_020d2ff0(dst);
            func_02046574((struct Obj02046574 *) msg, 0, *(char **) (e + 4));
            func_020474a8(msg, 0xa, (const char *) func_020e0434((struct Container020e0310 *) (p + 8), 0x480),
                          dst + len);
            memset(line, 0, sizeof(line));
            sprintf(line, (const char *) func_020e0434((struct Container020e0310 *) (p + 8), 0x481),
                    func_020a0b3c((KeyMap020a0b3c *) tbl, *(short *) (e + 0x18)));
            func_02042058(dst, line);
            if (i != out2 - 1) func_02042058(dst, *(char **) (p + 0x1000 + 0xaa4));
        }
        n++;
    }
    if (count > 1) {
        func_020465c0((StoreStruct *) msg, 0, sel + 1);
        func_020465c0((StoreStruct *) msg, 1, count);
        func_020465f0((unsigned char *) msg, 0, 2);
        func_020465f0((unsigned char *) msg, 1, 2);
        func_020465d8((unsigned char *) msg, 0, 1);
        func_020465d8((unsigned char *) msg, 1, 0);
        func_02042428(dst, 8);
        func_02042058(dst, (const char *) func_020e0434((struct Container020e0310 *) (p + 8), 0x47f));
    }
#else
    char name[0x100];
    char line[0x40];
    int out1, out2;
    char *tbl;
    int n;
    int i;
    int count;
    if (dst == 0) return;
    int cursor = *(short *) (p + 0x1be8) & 7;
    if (flag2) func_02041c08(dst, cursor, 8, 5, 5, 5);
    func_02041ea4(dst, cursor);
    tbl       = (char *) func_02010828(GameState::GetInstance()) + 0xe04;
    void *msg = func_020421a0();
    char *fld = p + 0x2c8 + 0xc00;
    int sel   = *(int *) (fld + 0x68);
    count     = *(int *) (fld + 0x58);
    func_0205c508((struct UnkStruct0205c508 *) (fld + 0x54), &out1, &out2);
    n = 0;
    for (i = out1; i < out2; i++) {
        func_02046380(msg);
        func_020465c0((StoreStruct *) msg, 0, n);
        char *e = func_020dedd0((Container020dedd0 *) (p + 0x3ec + 0x400),
                                                                    *(short *) (tbl + i * 2 + 0xc));
        if (e != 0) {
            __clear(name, sizeof(name));
            func_0206819c(*(const char **) (e + 4), name, 0);
            func_02041b70(dst, n, name);
            __clear(line, sizeof(line));
            sprintf(line, data_ov002_0216d270,
                    func_020a0b3c((KeyMap020a0b3c *) tbl, *(short *) (e + 0x18)));
            func_02042058(dst, line);
            if (i != out2 - 1) func_02042058(dst, *(char **) (p + 0x1000 + 0xbdc));
        }
        n++;
    }
    if (count > 1) func_ov002_0215b918((unsigned char *) p, 10, sel, count);
#endif
}
