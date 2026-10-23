#include <globaldefs.h>

extern "C" int func_020420e8(const char* str, int flags);
extern "C" int func_02041a28(char* dst, int x);
extern "C" int func_02042058(char* dst, const char* src);
extern "C" int func_02041acc(char* dst, int w);

struct DstHolder0215b8c8 { char* dst; };

// USA: func_ov002_0215b8c8
extern "C" ARM void func_ov002_0215b8c8(struct DstHolder0215b8c8* holder, const char* str, int value) {
    int width = func_020420e8(str, value & 0xff);
    int halfWidth = (((width + 0x17) & ~7) - width) >> 1;
    func_02041a28(holder->dst, halfWidth);
    func_02042058(holder->dst, str);
    func_02041acc(holder->dst, halfWidth - 5);
}
