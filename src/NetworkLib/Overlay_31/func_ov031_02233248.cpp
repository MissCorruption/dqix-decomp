#include <globaldefs.h>

struct MenuValue02233248 { unsigned short value; unsigned short field_0x2[3]; };
struct MenuValueTable02233248 { MenuValue02233248 entries[4]; };
struct MenuSelection02233248 { signed char field_0x0; signed char selected; unsigned char field_0x2; unsigned char field_0x3; int field_0x4; };
extern MenuValueTable02233248 data_ov031_02249198[];
extern MenuValueTable02233248 data_ov031_0224919a[];
extern MenuValueTable02233248 data_ov031_0224919c[];
extern MenuValueTable02233248 data_ov031_0224919e[];
extern MenuSelection02233248 data_ov031_02290cc8;
extern signed char data_ov031_02249150[8];

char* GetOffset400_02235c70(void);
unsigned char GetField0_02227548(void);
int TestFieldRestBits_02227570(unsigned int);
void SetField_022274c0_022274c0(int);
extern "C" void func_ov031_0223336c(void);
extern "C" void func_ov031_022239f4(void);
extern "C" void func_ov031_0222336c(int, int, int);
extern "C" void func_ov031_02223518(int);
extern "C" void func_ov031_022237dc(unsigned short, unsigned short, unsigned short, unsigned short);
extern "C" void func_ov031_02233458(void);

// USA: func_ov031_02233248
extern "C" ARM void func_ov031_02233248(void) {
    char* base = GetOffset400_02235c70();
    data_ov031_02290cc8.field_0x2 = 0;
    if (data_ov031_02290cc8.field_0x0 == 0) {
        data_ov031_02290cc8.field_0x0 = 1;
    }
    if (GetField0_02227548()) {
        if (data_ov031_02290cc8.selected == 2) {
            data_ov031_02290cc8.selected = 0;
        }
        if (data_ov031_02290cc8.field_0x0 == 2) {
            data_ov031_02290cc8.field_0x0 = 1;
        }
    }
    func_ov031_0223336c();
    func_ov031_022239f4();
    func_ov031_0222336c(0x32, data_ov031_02249150[GetField0_02227548()], (unsigned char)base[0xf4] + 1);
    func_ov031_02223518(1);
    func_ov031_022237dc(
        data_ov031_02249198[TestFieldRestBits_02227570(1)].entries[data_ov031_02290cc8.selected].value,
        data_ov031_0224919c[TestFieldRestBits_02227570(1)].entries[data_ov031_02290cc8.selected].value,
        data_ov031_0224919a[TestFieldRestBits_02227570(1)].entries[data_ov031_02290cc8.selected].value,
        data_ov031_0224919e[TestFieldRestBits_02227570(1)].entries[data_ov031_02290cc8.selected].value);
    SetField_022274c0_022274c0((int)func_ov031_02233458);
}
