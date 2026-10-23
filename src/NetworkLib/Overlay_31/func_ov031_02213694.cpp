#include <globaldefs.h>

struct Struct_ov031_02213694;
extern "C" void* func_ov031_022133f8(unsigned int arg0);
extern "C" int func_ov031_022134b0(void);
extern "C" void* func_ov031_02214ac8(unsigned short arg0);
extern "C" ARM int func_ov031_02213894(char* arg0, int arg1, struct Struct_ov031_02213694* arg2);
extern "C" ARM int func_ov031_02213910(char* arg0, char* arg1);
extern "C" int func_ov031_022139a0(int arg0, void* arg1, int arg2, void* arg3);
extern "C" void func_ov031_02213b20(int arg0, void* arg1);

// USA: func_ov031_02213694
extern "C" ARM void func_ov031_02213694(char* arg0) {
    int var0 = -1;
    unsigned char var1 = 0;
    char* var2 = (char*)func_ov031_022133f8(0x10);
    void* var3 = func_ov031_022133f8(1);
    *((unsigned char*)var3 + 0xb) = 1;

    int var4 = func_ov031_022134b0();

    switch (var4) {
    case 3: {
        unsigned short var5 = *(unsigned short*)(arg0 + 0xa);
        var1 = *(unsigned char*)(var2 + 0xd11);
        if (var5 == 0 || *(unsigned char*)(arg0 + 0xc) == 0) {
            func_ov031_02214ac8(*(unsigned short*)(arg0 + 0x36));
            goto tail;
        }
        if (var5 == 1 && *(unsigned char*)(arg0 + 0xc) == 0x20) {
            func_ov031_02214ac8(*(unsigned short*)(arg0 + 0x36));
            var0 = func_ov031_02213894(arg0, *(unsigned char*)(var2 + 0xd10), (struct Struct_ov031_02213694*)(var2 + 0x300));
        } else {
            var0 = func_ov031_02213894(arg0, *(unsigned char*)(var2 + 0xd10), (struct Struct_ov031_02213694*)(var2 + 0x300));
        }
        break;
    }
    case 4: {
        char* var6 = var2 + *(unsigned char*)(var2 + 0xd0f) * 0xc0 + 0x400;
        unsigned short var7 = *(unsigned short*)(var6 + 0xa6);
        var1 = (unsigned char)(var7 - 1);
        var0 = func_ov031_02213910(arg0, var2);
        if (var0 < 0) goto tail;
        *(unsigned char*)(var2 + 0x447 + *(unsigned char*)(var2 + 0xd0f) * 4) |= 0x80;
        goto tail;
    }
    case 5: {
        struct Struct_ov031_02213694* var8 = (struct Struct_ov031_02213694*)(var2 + 0x300 + *(unsigned char*)(var2 + 0xd0f) * 0x24);
        var1 = *(unsigned char*)(var2 + 0xd11);
        var0 = func_ov031_02213894(arg0, 1, var8);
        if (var0 < 0) goto tail;
        unsigned char* var9 = (unsigned char*)(var2 + 0x300 + *(unsigned char*)(var2 + 0xd0f) * 0x24);
        *var9 = (*var9 & ~0xf) | 1;
        break;
    }
    default:
        return;
    }

tail:
    if (var0 < 0) return;
    func_ov031_02213b20(func_ov031_022139a0(var0, arg0, var1, var2), var2);
}
