#include <globaldefs.h>

struct Struct_ov025_021d8c30_11;
extern "C" void func_ov025_021dcd28(Struct_ov025_021d8c30_11* arg0, Struct_ov025_021d8c30_11* arg1);

#if defined(jpn)
#define ROW_COUNT 0x703d
#define ROW_DATA 0x7040
#define ROW_BASE 0x7000
#define ROW_FIELD(n) ((n) - 0x10)
#else
#define ROW_COUNT 0x6e4d
#define ROW_DATA 0x6e50
#define ROW_BASE 0x6e00
#define ROW_FIELD(n) (n)
#endif

// USA: func_ov025_021dcc70
extern "C" ARM void func_ov025_021dcc70(char* arg0, char* arg1) {
    unsigned char var0 = *(unsigned char*)(arg0 + ROW_COUNT);
    if (var0 >= 5) return;

    char* var1 = arg0 + ROW_DATA + (var0 << 5);
    func_ov025_021dcd28((Struct_ov025_021d8c30_11*)var1, (Struct_ov025_021d8c30_11*)arg1);

    unsigned char var2 = *(unsigned char*)(arg0 + ROW_COUNT);
    short var3 = *(short*)(arg1 + 0x18);
    *(short*)(arg0 + ROW_BASE + (var2 << 5) + ROW_FIELD(0x68)) = var3;

    var2 = *(unsigned char*)(arg0 + ROW_COUNT);
    short var4 = *(short*)(arg1 + 0x1a);
    *(short*)(arg0 + ROW_BASE + (var2 << 5) + ROW_FIELD(0x6a)) = var4;

    var2 = *(unsigned char*)(arg0 + ROW_COUNT);
    *(short*)(arg0 + ROW_BASE + (var2 << 5) + ROW_FIELD(0x6c)) = 0;

    var2 = *(unsigned char*)(arg0 + ROW_COUNT);
    *(short*)(arg0 + ROW_BASE + (var2 << 5) + ROW_FIELD(0x6e)) = 0;

    var2 = *(unsigned char*)(arg0 + ROW_COUNT);
    if (var2 != 0) {
        unsigned short var5 = *(unsigned short*)(arg0 + ROW_BASE + ((var2 - 1) << 5) + ROW_FIELD(0x6c));
        *(unsigned short*)(arg0 + ROW_BASE + (var2 << 5) + ROW_FIELD(0x6e)) = var5;
    }

    unsigned char var6 = *(unsigned char*)(arg0 + ROW_COUNT);
    *(unsigned char*)(arg0 + ROW_COUNT) = var6 + 1;
}
