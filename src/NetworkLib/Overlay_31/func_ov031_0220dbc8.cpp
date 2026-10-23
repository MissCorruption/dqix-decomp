#include <globaldefs.h>

struct Struct_ov031_0220dbc8 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

extern int data_ov031_0224e53c;

extern "C" void func_ov031_0220da1c(int);
extern "C" void func_ov031_0220db6c(void);

// USA: func_ov031_0220dbc8
extern "C" ARM void func_ov031_0220dbc8(struct Struct_ov031_0220dbc8 *arg0) {
    if (arg0->unknown_2_ == 8 && arg0->unknown_4_ == 0x16 && arg0->unknown_6_ == 0x25) {
        int var0 = *(int*)((char*)data_ov031_0224e53c + 0x2260) - 8;
        switch (var0) {
            case 0:
                func_ov031_0220da1c(0xc);
                break;
            case 1:
            case 4:
                func_ov031_0220db6c();
                break;
            case 2:
                func_ov031_0220da1c(0xc);
                break;
            case 3:
                break;
        }
    }
}
