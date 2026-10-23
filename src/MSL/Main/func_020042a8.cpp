#include <globaldefs.h>

typedef struct Struct_020026b4 {
    char unknown_0_;
    char unknown_1_;
    short unknown_2_;
    struct {
        unsigned char unknown_0_;
        unsigned char unknown_1_[32];
        unsigned char unknown_21_;
    } unknown_4_;
} Struct_020026b4;

extern "C" double func_0200a3a8(const Struct_020026b4* arg0);
extern "C" double func_02001710(const char* arg0);

extern int data_020eecc4[];
extern int data_020eeccc[];

#define INFINITY (*(float*)data_020eecc4)
#define HUGE_VAL (*(double*)data_020eeccc)
#define LDBL_MIN 0x1.0000000000000P-1022L
#define LDBL_MAX 0x1.fffffffffffffP1023L

extern const unsigned short data_020e69ac[128];
extern const unsigned char data_020e692c[128];

static inline int inline_020042a8_3(int arg0) {
    return ((arg0 < 0) || (arg0 >= 128)) ? 0 : (int)(data_020e69ac[arg0] & 0x001);
}

static inline int inline_02001bdc(int arg0) {
    return ((arg0 < 0) || (arg0 >= 128)) ? 0 : (int)(data_020e69ac[arg0] & 0x008);
}

static inline int inline_020042a8_4(int arg0) {
    return ((arg0 < 0) || (arg0 >= 128)) ? 0 : (int)(data_020e69ac[arg0] & 0x100);
}

static inline int inline_020042a8(int arg0) {
    return ((arg0 < 0) || (arg0 >= 128)) ? 0 : (int)(data_020e69ac[arg0] & 0x400);
}

static inline int inline_020042a8_2(int arg0) {
    return ((arg0 < 0) || (arg0 >= 128)) ? arg0 : (int)(data_020e692c[arg0]);
}

enum Enum_020042a8 {
    Enum_020042a8_0,
    Enum_020042a8_1,
    Enum_020042a8_2
};

#define TARGET_FLOAT_BITS  64
#define TARGET_FLOAT_BYTES (TARGET_FLOAT_BITS / 8)

#define TARGET_FLOAT_MAX_EXP        1024
#define TARGET_FLOAT_MANT_DIG       53
#define TARGET_FLOAT_IMPLICIT_J_BIT 1

#define TARGET_FLOAT_MANT_BITS (TARGET_FLOAT_MANT_DIG - TARGET_FLOAT_IMPLICIT_J_BIT)
#define TARGET_FLOAT_EXP_BITS  (TARGET_FLOAT_BITS - TARGET_FLOAT_MANT_BITS - 1)

enum Enum_020042a8_B {
    Enum_020042a8_B_1              = 0x0001,
    Enum_020042a8_B_2          = 0x0002,
    Enum_020042a8_B_4 = 0x0004,
    Enum_020042a8_B_8     = 0x0008,
    Enum_020042a8_B_16         = 0x0010,
    Enum_020042a8_B_32    = 0x0020,
    Enum_020042a8_B_64            = 0x0040,
    Enum_020042a8_B_128          = 0x0080,
    Enum_020042a8_B_256  = 0x0100,
    Enum_020042a8_B_512 = 0x0200,
    Enum_020042a8_B_1024     = 0x0400,
    Enum_020042a8_B_2048           = 0x0800,
    Enum_020042a8_B_4096            = 0x1000,
    Enum_020042a8_B_8192          = 0x2000,
    Enum_020042a8_B_16384        = 0x4000,
    Enum_020042a8_B_32768          = 0x8000
};

enum Enum_020042a8_C {
    Enum_020042a8_C_0                = 0x0000,
    Enum_020042a8_C_1              = 0x0001,
    Enum_020042a8_C_2 = 0x0002,
    Enum_020042a8_C_4     = 0x0004,
    Enum_020042a8_C_8    = 0x0008,
    Enum_020042a8_C_16            = 0x0010,
    Enum_020042a8_C_32          = 0x0020,
    Enum_020042a8_C_64  = 0x0040,
    Enum_020042a8_C_128 = 0x0080,
    Enum_020042a8_C_256     = 0x0100
};

#define MAX_SIG_DIG 20

#define final_state(scan_state) (scan_state & (Enum_020042a8_B_2048 | Enum_020042a8_B_4096))

#define success(scan_state)                                                                                                 \
    (scan_state & (Enum_020042a8_B_4 | Enum_020042a8_B_8 | Enum_020042a8_B_32 | Enum_020042a8_B_512 | Enum_020042a8_B_1024 | Enum_020042a8_B_2048))

#define hex_success(count, scan_state)                                                                  \
    (count - 1 > 2 && scan_state & (Enum_020042a8_C_2 | Enum_020042a8_C_4 | Enum_020042a8_C_8 | \
                                    Enum_020042a8_C_128 | Enum_020042a8_C_256))

#define fetch()    (var2++, (*arg1)(arg2, 0, Enum_020042a8_0))
#define unfetch(c) (*arg1)(arg2, c, Enum_020042a8_1)

// USA: func_020042a8
extern "C" ARM long double func_020042a8(int arg0, int (*arg1)(void*, int, int), void* arg2, int* arg3, int* arg4) {
    int     var0     = Enum_020042a8_B_1;
    int     var1 = Enum_020042a8_C_0;
    int     var2          = 0;
    int     var3         = 0;
    int     var4;
    Struct_020026b4 var5 = {
        0, 0, 0, {0, ""}
    };
    int         var6  = 0;
    int         var7  = 0;
    long        var8     = 0;
    int         var9    = 0;
    long double var10        = 0.0;
    int         var11 = 0;

    int var12 = '.';

    unsigned char* var13;
    unsigned char  var14[TARGET_FLOAT_BYTES];
    unsigned       var15;
    unsigned long  var16 = 0;

    int           var17;
    unsigned char var18, var19;
    int           var20;
    int           var21   = 0;
    unsigned      var22 = 0;

    *arg4 = 0;
    var4         = fetch();

    while (var2 <= arg0 && var4 != -1 && !final_state(var0)) {

        switch (var0) {
            case Enum_020042a8_B_1:
                if (inline_020042a8_4(var4)) {
                    var4 = fetch();
                    var2--;
                    var3++;
                    break;
                }

                switch (inline_020042a8_2(var4)) {
                    case '-':
                        var6 = 1;

                    case '+':
                        var4             = fetch();
                        var11 = 1;
                        break;

                    case 'I':
                        var4          = fetch();
                        var0 = Enum_020042a8_B_16384;
                        break;

                    case 'N':
                        var4          = fetch();
                        var0 = Enum_020042a8_B_8192;
                        break;

                    default:
                        var0 = Enum_020042a8_B_2;
                        break;
                }
                break;
            case Enum_020042a8_B_16384: {
                int  var23       = 1;
                char var24[] = "INFINITY";
                while ((var23 < 8) && (inline_020042a8_2(var4) == var24[var23])) {
                    var23++;
                    var4 = fetch();
                }
                if ((var23 == 3) || (var23 == 8)) {
                    if (var6)
                        var10 = -INFINITY;
                    else
                        var10 = INFINITY;
                    *arg3 = var3 + var23 + var11;
                    return (var10);
                } else
                    var0 = Enum_020042a8_B_4096;
                break;
            }

            case Enum_020042a8_B_8192: {
                int  var25 = 1, var26 = 0;
                char var27[]     = "NAN(";
                char var28[32] = "";
                while ((var25 < 4) && (inline_020042a8_2(var4) == var27[var25])) {
                    var25++;
                    var4 = fetch();
                }
                if ((var25 == 3) || (var25 == 4)) {
                    if (var25 == 4) {
                        while ((var26 < 32) && (inline_02001bdc(var4) || inline_020042a8_3(var4) || (var4 == var12))) {
                            var28[var26++] = (char)var4;
                            var4            = fetch();
                        }
                        if (var4 != ')') {
                            var0 = Enum_020042a8_B_4096;
                            break;
                        } else
                            var26++;
                    }
                    var28[var26] = '\0';

                    if (var6)
                        var10 = -func_02001710(var28);
                    else
                        var10 = func_02001710(var28);
                    *arg3 = var3 + var25 + var26 + var11;
                    return (var10);
                } else
                    var0 = Enum_020042a8_B_4096;
                break;
            }

            case Enum_020042a8_B_2:
                if (var4 == var12) {
                    var0 = Enum_020042a8_B_16;
                    var4          = fetch();
                    break;
                }
                if (!inline_02001bdc(var4)) {
                    var0 = Enum_020042a8_B_4096;
                    break;
                }
                if (var4 == '0') {
                    var4 = fetch();
                    if (inline_020042a8_2(var4) == 'X') {
                        var0     = Enum_020042a8_B_32768;
                        var1 = Enum_020042a8_C_1;
                    } else
                        var0 = Enum_020042a8_B_4;
                    break;
                }
                var0 = Enum_020042a8_B_8;
                break;

            case Enum_020042a8_B_4:

                if (var4 == '0') {
                    var4 = fetch();

                    break;
                }
                var0 = Enum_020042a8_B_8;
                break;

            case Enum_020042a8_B_8:
                if (!inline_02001bdc(var4)) {
                    if (var4 == var12) {
                        var0 = Enum_020042a8_B_32;
                        var4          = fetch();
                    } else
                        var0 = Enum_020042a8_B_64;
                    break;
                }
                if (var5.unknown_4_.unknown_0_ < MAX_SIG_DIG)
                    var5.unknown_4_.unknown_1_[var5.unknown_4_.unknown_0_++] = (unsigned char)var4;
                else
                    var9++;
                var4 = fetch();
                break;

            case Enum_020042a8_B_16:
                if (!inline_02001bdc(var4)) {
                    var0 = Enum_020042a8_B_4096;
                    break;
                }
                var0 = Enum_020042a8_B_32;
                break;

            case Enum_020042a8_B_32:
                if (!inline_02001bdc(var4)) {
                    var0 = Enum_020042a8_B_64;
                    break;
                }
                if (var5.unknown_4_.unknown_0_ < MAX_SIG_DIG) {
                    if (var4 != '0' || var5.unknown_4_.unknown_0_)
                        var5.unknown_4_.unknown_1_[var5.unknown_4_.unknown_0_++] = (unsigned char)var4;
                    var9--;
                }
                var4 = fetch();
                break;

            case Enum_020042a8_B_64:
                if (inline_020042a8_2(var4) == 'E') {
                    var0 = Enum_020042a8_B_128;
                    var4          = fetch();
                    break;
                }
                var0 = Enum_020042a8_B_2048;
                break;

            case Enum_020042a8_B_128:
                if (var4 == '+')
                    var4 = fetch();
                else if (var4 == '-') {
                    var4            = fetch();
                    var7 = 1;
                }
                var0 = Enum_020042a8_B_256;
                break;

            case Enum_020042a8_B_256:
                if (!inline_02001bdc(var4)) {
                    var0 = Enum_020042a8_B_4096;
                    break;
                }
                if (var4 == '0') {
                    var0 = Enum_020042a8_B_512;
                    var4          = fetch();
                    break;
                }
                var0 = Enum_020042a8_B_1024;
                break;

            case Enum_020042a8_B_512:
                if (var4 == '0') {
                    var4 = fetch();
                    break;
                }
                var0 = Enum_020042a8_B_1024;
                break;

            case Enum_020042a8_B_1024:
                if (!inline_02001bdc(var4)) {
                    var0 = Enum_020042a8_B_2048;
                    break;
                }
                var8 = var8 * 10 + (var4 - '0');
                if (var8 > 0x7fff)
                    *arg4 = 1;
                var4 = fetch();
                break;

            case Enum_020042a8_B_32768: {
                switch (var1) {
                    case Enum_020042a8_C_1:
                        var13 = var14;

                        __builtin__clear(var14, sizeof(var14));
                        var15 = (TARGET_FLOAT_MANT_DIG + 3) / 4;

                        var22      = 0;
                        var20    = 0;
                        var1 = Enum_020042a8_C_2;
                        var4              = fetch();
                        break;

                    case Enum_020042a8_C_2:
                        if (var4 == '0') {
                            var4 = fetch();
                            break;
                        }
                        var1 = Enum_020042a8_C_4;

                        break;

                    case Enum_020042a8_C_4:
                        if (!inline_020042a8(var4)) {
                            if (var4 == var12) {
                                var1 = Enum_020042a8_C_8;
                                var4              = fetch();
                            } else
                                var1 = Enum_020042a8_C_16;
                            break;
                        }

                        if (var22 < var15) {
                            var22++;
                            var18 = *(var13 + var20 / 2);
                            var17  = inline_020042a8_2(var4);
                            if (var17 >= 'A')
                                var17 = var17 - 'A' + 10;
                            else
                                var17 -= '0';
                            var19 = (unsigned char)var17;
                            if ((var20 % 2) != 0)
                                var18 |= var19;
                            else
                                var18 |= (unsigned char)(var19 << 4);
                            *(var13 + var20++ / 2) = var18;
                            var4                            = fetch();
                        } else
                            var4 = fetch();
                        break;

                    case Enum_020042a8_C_8:
                        if (!inline_020042a8(var4)) {
                            var1 = Enum_020042a8_C_16;
                            break;
                        }
                        if (var22 < var15) {
                            var18 = *(var13 + var20 / 2);
                            var17  = inline_020042a8_2(var4);
                            if (var17 >= 'A')
                                var17 = var17 - 'A' + 10;
                            else
                                var17 -= '0';
                            var19 = (unsigned char)var17;
                            if ((var20 % 2) != 0)
                                var18 |= var19;
                            else
                                var18 |= (unsigned char)(var19 << 4);
                            *(var13 + var20++ / 2) = var18;
                            var4                            = fetch();
                        } else
                            var4 = fetch();
                        break;

                    case Enum_020042a8_C_16:
                        if (inline_020042a8_2(var4) == 'P') {
                            var1 = Enum_020042a8_C_32;
                            var4              = fetch();
                        } else
                            var0 = Enum_020042a8_B_2048;
                        break;

                    case Enum_020042a8_C_32:
                        if (var4 == '-')
                            var21 = 1;
                        else if (var4 != '+') {
                            var4 = unfetch(var4);
                            var2--;
                        }
                        var1 = Enum_020042a8_C_64;
                        var4              = fetch();
                        break;

                    case Enum_020042a8_C_64:

                        if (!inline_02001bdc(var4)) {
                            var0 = Enum_020042a8_B_4096;
                            break;
                        }
                        if (var4 == '0') {
                            var1 = Enum_020042a8_C_128;
                            var4              = fetch();
                            break;
                        }
                        var1 = Enum_020042a8_C_256;
                        break;

                    case Enum_020042a8_C_128:
                        if (var4 == '0') {
                            var4 = fetch();
                            break;
                        }
                        var1 = Enum_020042a8_C_256;
                        break;

                    case Enum_020042a8_C_256:
                        if (!inline_02001bdc(var4)) {
                            var0 = Enum_020042a8_B_2048;
                            break;
                        }
                        var16 = var16 * 10 + (var4 - '0');
                        if (var8 > 0x7fff)
                            *arg4 = 1;
                        var4 = fetch();

                        break;
                }
            } break;
        }
    }

    if (var0 != Enum_020042a8_B_32768 ? !success(var0) : !hex_success(var2, var1)) {
        var2          = 0;
        *arg3 = 0;
    } else {
        var2--;
        *arg3 = var2 + var3;
    }

    unfetch(var4);
    if (var1 == Enum_020042a8_C_0) {
        if (var7)
            var8 = -var8;

        {
            int            var29 = var5.unknown_4_.unknown_0_;
            unsigned char* var30 = &var5.unknown_4_.unknown_1_[var29];

            while (var29-- && *--var30 == '0')
                var9++;

            var5.unknown_4_.unknown_0_ = (unsigned char)(var29 + 1);

            if (var5.unknown_4_.unknown_0_ == 0)
                var5.unknown_4_.unknown_1_[var5.unknown_4_.unknown_0_++] = '0';
        }

        var8 += var9;

        if (var8 < ~0x7fff || var8 > 0x7fff)
            *arg4 = 1;

        if (*arg4)
            if (var7)
                return (0.0);
            else
                return (var6 ? -HUGE_VAL : HUGE_VAL);

        var5.unknown_2_ = (short)var8;

        var10 = func_0200a3a8(&var5);

        if (var10 != 0.0 && var10 < LDBL_MIN) {
            *arg4 = 1;
        } else if (var10 > LDBL_MAX) {
            *arg4 = 1;
            var10    = HUGE_VAL;
        }

        if (var6 && success(var0))
            var10 = -var10;

        return (var10);
    } else {
        unsigned       var31, var32;
        unsigned       var33;
        long double    var34;
        unsigned char* var35 = (unsigned char*)&var34;

        if (var21)
            var16 = -var16;

        var16 += var22 * 4;

        var33 = 0;
        while (var33 < 4 && !(var14[0] & (0x80 >> var33))) {
            var33++;
            var16--;
        }
        var16--;

        if (TARGET_FLOAT_IMPLICIT_J_BIT) {
            var33++;
        }

        if (var33) {
            unsigned char var36 = 0;
            for (var13 = var14 + sizeof(var14) - 1; var13 >= var14; var13--) {
                unsigned char var37 = *var13;
                *var13          = (unsigned char)((var37 << var33) | var36);
                var36           = (unsigned char)(var37 >> (8 - var33));
            }
        }

        var35[0] = 0;
        var35[1] = 0;
        var35[2] = 0;
        var35[3] = 0;
        var35[4] = 0;
        var35[5] = 0;
        var35[6] = 0;
        var35[7] = 0;

        var32 = (TARGET_FLOAT_BITS - TARGET_FLOAT_MANT_BITS);

        for (var31 = 0; var31 < TARGET_FLOAT_MANT_BITS; var31 += 8) {
            unsigned char var38 = var14[var31 >> 3];
            int           var39;

            if (var31 + 8 > TARGET_FLOAT_MANT_BITS)
                var38 &= 0xff << (TARGET_FLOAT_MANT_BITS - var31);

            var39 = (var32 & 7);
            var35[var32 >> 3] |= (unsigned char)(var38 >> var39);

            var32 += 8;
            var35[var32 >> 3] |= (unsigned char)(var38 << (8 - var39));
        }

        var16 += TARGET_FLOAT_MAX_EXP - 1;

        if ((var16 & ~(TARGET_FLOAT_MAX_EXP * 2 - 1))) {
            *arg4 = 1;
            return 0.0;
        }

        var16 <<= 32 - TARGET_FLOAT_EXP_BITS;

        var35[0] |= var16 >> 25;
        if (TARGET_FLOAT_EXP_BITS > 7)
            var35[1] |= var16 >> 17;
        if (TARGET_FLOAT_EXP_BITS > 15)
            var35[2] |= var16 >> 9;
        if (TARGET_FLOAT_EXP_BITS > 23)
            var35[3] |= var16 >> 1;

        if (var6)
            var35[0] |= 0x80;

        int            var40;
        unsigned char* var41 = var35;
        unsigned char  var42;
        for (var40 = 0; var40 < TARGET_FLOAT_BYTES / 2; var40++) {
            var42                          = var41[var40];
            var41[var40]                          = var41[TARGET_FLOAT_BYTES - 1 - var40];
            var41[TARGET_FLOAT_BYTES - 1 - var40] = var42;
        }

        var10 = *(long double*)var35;

        return var10;
    }
}
