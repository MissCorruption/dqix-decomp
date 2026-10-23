#include <globaldefs.h>

struct Struct_020de2a4 {
    unsigned int unknown_0_0_ : 11;    /* bits 0..10  */
    unsigned int unknown_1_3_ : 4;    /* bits 11..14 */
    unsigned int unknown_1_7_ : 4;    /* bits 15..18 */
    unsigned int unknown_2_3_ : 4;    /* bits 19..22 */
    unsigned int unknown_2_7_ : 4;    /* bits 23..26 */
    unsigned int unknown_3_3_ : 5;   /* bits 27..31 */
};

struct Struct_020730e0_2 {
    struct Struct_020de2a4* unknown_0_;   /* 0x0 */
    unsigned int unknown_4_;          /* 0x4 */
    unsigned int unknown_8_0_ : 4;       /* 0x8 low nibble */
    unsigned int unknown_8_4_ : 28;
};

// USA: func_020de2a4
extern "C" ARM int func_020de2a4(struct Struct_020730e0_2* arg0, int arg1, int arg2) {
    unsigned int var0;
    int var1;
    struct Struct_020de2a4* var2;

    var0 = arg0->unknown_8_0_;
    var1 = var0 <= 7;
    if (!var1 && var0 != 0xB) return 0;
    var2 = arg0->unknown_0_;
    if (var2 == NULL) return 0;
    if (arg2 != 0) {
        if (arg1 != 0) return var2->unknown_2_7_;
        return var2->unknown_2_3_;
    }
    if (arg1 != 0) return var2->unknown_1_7_;
    return var2->unknown_1_3_;
}
