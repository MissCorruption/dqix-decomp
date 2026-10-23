#include <globaldefs.h>

extern "C" void func_020d21c0(void);
extern "C" void func_020bbdd8(void);
extern "C" void func_020bbe10(void);
extern "C" void func_020bbf18(void);
extern "C" void func_020bce9c(void);
extern "C" void func_020bc23c(void);

struct NodeCEE54 { char _pad[8]; struct NodeCEE54* next; };
extern "C" void func_020cef34(struct NodeCEE54* node);

struct NodeCEE68 { char _pad[8]; struct NodeCEE68* next; };
extern "C" void func_020cef4c(struct NodeCEE68* node);

extern struct NodeCEE54 data_0210cfd0;
extern struct NodeCEE68 data_0210cfdc;

struct Struct0210cfc0 {
    char byte0;
    char pad1[3];
    int field4;
    char pad2[0xc - 8];
    int guard;
    void (*field10)(void);
    int field14;
    char pad3[0x1c - 0x18];
    void (*field1c)(void);
    int field20;
};
extern struct Struct0210cfc0 data_0210cfc0;

// USA: func_020bbd14
extern "C" ARM void func_020bbd14(void) {
    if (data_0210cfc0.guard != 0) return;
    data_0210cfc0.guard = 1;
    func_020d21c0();
    data_0210cfc0.field10 = func_020bbdd8;
    data_0210cfc0.field14 = 0;
    data_0210cfc0.field1c = func_020bbe10;
    data_0210cfc0.field20 = 0;
    func_020cef34(&data_0210cfd0);
    func_020cef4c(&data_0210cfdc);
    func_020bbf18();
    func_020bce9c();
    func_020bc23c();
    data_0210cfc0.byte0 = -1;
    data_0210cfc0.field4 = 1;
}
