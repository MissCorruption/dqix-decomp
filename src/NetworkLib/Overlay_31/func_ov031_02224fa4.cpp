#include <globaldefs.h>

struct Struct_ov031_02224fa4 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

extern Struct_ov031_02224fa4** data_ov031_02250bfc;
extern const unsigned char data_ov031_022489ac[];
extern unsigned char data_ov031_022489b0[];

extern "C" void func_ov031_0223bb58(void* arg0, int arg1, int arg2, int arg3);

// USA: func_ov031_02224fa4
extern "C" ARM void func_ov031_02224fa4(int arg0, int arg1) {
    if (arg0 < 0) return;
    if (arg0 < 0x2f) {
        unsigned char var0 = data_ov031_022489ac[arg1];
        Struct_ov031_02224fa4* var1 = *(Struct_ov031_02224fa4**)((char*)data_ov031_02250bfc + arg0 * 4 + 0x30);
        var1->unknown_0_ &= ~0xc00;
        var1->unknown_4_ = (var1->unknown_4_ & ~0xf000) | (var0 << 12);
        return;
    }
    int var2 = arg0 - 0x2f;
    if (var2 < 4) {
        unsigned char var3 = data_ov031_022489ac[arg1];
        Struct_ov031_02224fa4* var4 = *(Struct_ov031_02224fa4**)((char*)data_ov031_02250bfc + var2 * 4 + 0xec);
        var4->unknown_0_ &= ~0xc00;
        var4->unknown_4_ = (var4->unknown_4_ & ~0xf000) | (var3 << 12);
        return;
    }
    unsigned char var5 = data_ov031_022489b0[arg1];
    func_ov031_0223bb58(*(Struct_ov031_02224fa4**)((char*)data_ov031_02250bfc + (arg0 - 0x33) * 4 + 0xfc), -1, 0, var5);
}
