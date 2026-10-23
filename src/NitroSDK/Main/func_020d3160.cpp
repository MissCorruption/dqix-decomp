#include <globaldefs.h>

struct Struct_020d3084;
struct Struct_020d30b4;
struct Struct_020d3108;
extern "C" void func_020d3084(Struct_020d3084* arg0, int arg1);
extern "C" void func_020d30b4(Struct_020d30b4* arg0, char arg1, int arg2);
extern "C" void func_020d3108(Struct_020d3108* arg0, char* arg1, int arg2);

struct Struct_020d3160 {
    unsigned long unknown_0_;
    char* unknown_4_;
    char* unknown_8_;
};

static inline void inline_020d3160(Struct_020d3160* arg0, char arg1) {
    func_020d3084((Struct_020d3084*)arg0, arg1);
}

static inline void inline_020d3160_2(Struct_020d3160* arg0, char arg1, int arg2) {
    func_020d30b4((Struct_020d30b4*)arg0, arg1, arg2);
}

static inline void inline_020d3160_3(Struct_020d3160* arg0, const char* arg1, int arg2) {
    func_020d3108((Struct_020d3108*)arg0, (char*)arg1, arg2);
}

#define va_arg(list, ty) (*(ty*)((list += 4) - 4))
#define va_arg_64(list, ty) (*(ty*)((list += 8) - 8))

typedef unsigned long long Type_020b11c8_2;
typedef unsigned int Type_020b11c8;

// USA: func_020d3160
extern "C" ARM int func_020d3160(char* arg0, unsigned long arg1, const char* arg2, char* arg3) {
    char var0[24];
    int var1;
    char var2[2];
    int var3;

    const char* var4 = arg2;

    struct Struct_020d3160 var5;
    var5.unknown_0_ = arg1, var5.unknown_4_ = var5.unknown_8_ = arg0;

    while (*var4) {
        if ((unsigned int)(((unsigned char)*var4 ^ 0x20) - 0xA1) < 0x3C) {
            inline_020d3160(&var5, *var4++);
            if (*var4)
                inline_020d3160(&var5, *var4++);
        } else if (*var4 != '%') {
            inline_020d3160(&var5, *var4++);
        } else {
            enum {
                Enum_020d3160_1 = 000001,
                Enum_020d3160_2 = 000002,
                Enum_020d3160_4 = 000004,
                Enum_020d3160_8 = 000010,
                Enum_020d3160_16 = 000020,
                Enum_020d3160_32 = 000040,
                Enum_020d3160_64 = 000100,
                Enum_020d3160_128 = 000200,
                Enum_020d3160_256 = 000400,
                Enum_020d3160_4096 = 010000,
                Enum_020d3160_4097
            };

            int var6 = 0, var7 = 0, var8 = -1, var9 = 10;
            char var10 = 'a' - 10;
            const char* var11 = var4;

            for (;;) {
                switch (*++var4) {
                case '+':
                    if (var4[-1] != ' ')
                        break;
                    var6 |= Enum_020d3160_2;
                    continue;
                case ' ':
                    var6 |= Enum_020d3160_1;
                    continue;
                case '-':
                    var6 |= Enum_020d3160_8;
                    continue;
                case '0':
                    var6 |= Enum_020d3160_16;
                    continue;
                }
                break;
            }

            if (*var4 == '*') {
                ++var4, var7 = va_arg(arg3, int);
                if (var7 < 0)
                    var7 = -var7, var6 |= Enum_020d3160_8;
            } else {
                while ((*var4 >= '0') && (*var4 <= '9'))
                    var7 = (var7 * 10) + *var4++ - '0';
            }

            if (*var4 == '.') {
                ++var4, var8 = 0;
                if (*var4 == '*') {
                    ++var4, var8 = va_arg(arg3, int);
                    if (var8 < 0)
                        var8 = -1;
                } else {
                    while ((*var4 >= '0') && (*var4 <= '9'))
                        var8 = (var8 * 10) + *var4++ - '0';
                }
            }

            switch (*var4) {
            case 'h':
                if (*++var4 != 'h')
                    var6 |= Enum_020d3160_64;
                else
                    ++var4, var6 |= Enum_020d3160_256;
                break;
            case 'l':
                if (*++var4 != 'l')
                    var6 |= Enum_020d3160_32;
                else
                    ++var4, var6 |= Enum_020d3160_128;
                break;
            }

            switch (*var4) {
            case 'd':
            case 'i':
                goto put_integer;
            case 'o':
                var9 = 8;
                var6 |= Enum_020d3160_4096;
                goto put_integer;
            case 'u':
                var6 |= Enum_020d3160_4096;
                goto put_integer;
            case 'X':
                var10 = 'A' - 10;
                goto put_hexadecimal;
            case 'x':
                goto put_hexadecimal;
            case 'p':
                var6 |= Enum_020d3160_4;
                var8 = 8;
                goto put_hexadecimal;
            case 'c':
                if (var8 >= 0)
                    goto put_invalid;
                {
                    int var12 = va_arg(arg3, int);
                    var7 -= 1;
                    if (var6 & Enum_020d3160_8) {
                        inline_020d3160(&var5, (char)var12);
                        inline_020d3160_2(&var5, ' ', var7);
                    } else {
                        int var13 = (var6 & Enum_020d3160_16) ? '0' : ' ';
                        inline_020d3160_2(&var5, var13, var7);
                        inline_020d3160(&var5, (char)var12);
                    }
                    ++var4;
                }
                break;
            case 's': {
                int var14 = 0;
                const char* var15 = va_arg(arg3, const char*);
                if (var8 < 0) {
                    while (var15[var14])
                        ++var14;
                } else {
                    while ((var14 < var8) && var15[var14])
                        ++var14;
                }
                var7 -= var14;
                if (var6 & Enum_020d3160_8) {
                    inline_020d3160_3(&var5, var15, var14);
                    inline_020d3160_2(&var5, ' ', var7);
                } else {
                    int var16 = (var6 & Enum_020d3160_16) ? '0' : ' ';
                    inline_020d3160_2(&var5, var16, var7);
                    inline_020d3160_3(&var5, var15, var14);
                }
                ++var4;
            } break;
            case 'n': {
                int var17 = var5.unknown_4_ - var5.unknown_8_;
                if (var6 & Enum_020d3160_256)
                    ;
                else if (var6 & Enum_020d3160_64)
                    *va_arg(arg3, signed short*) = (signed short)var17;
                else if (var6 & Enum_020d3160_128)
                    *va_arg(arg3, Type_020b11c8_2*) = (Type_020b11c8_2)var17;
                else
                    *va_arg(arg3, signed int*) = (signed int)var17;
            }
                ++var4;
                break;
            case '%':
                if (var11 + 1 != var4)
                    goto put_invalid;
                inline_020d3160(&var5, *var4++);
                break;
            default:
                goto put_invalid;
            put_invalid:
                inline_020d3160_3(&var5, var11, var4 - var11);
                break;
            put_hexadecimal:
                var9 = 16;
                var6 |= Enum_020d3160_4096;
            put_integer: {
                Type_020b11c8_2 var18 = 0;
                var3 = 0;

                if (var6 & Enum_020d3160_8)
                    var6 &= ~Enum_020d3160_16;
                if (var8 < 0)
                    var8 = 1;
                else
                    var6 &= ~Enum_020d3160_16;

                if (var6 & Enum_020d3160_4096) {
                    if (var6 & Enum_020d3160_256)
                        var18 = va_arg(arg3, unsigned char);
                    else if (var6 & Enum_020d3160_64)
                        var18 = va_arg(arg3, unsigned short);
                    else if (var6 & Enum_020d3160_128)
                        var18 = va_arg_64(arg3, Type_020b11c8_2);
                    else
                        var18 = va_arg(arg3, unsigned long);
                    var6 &= ~(Enum_020d3160_2 | Enum_020d3160_1);
                    if (var6 & Enum_020d3160_4) {
                        if (var9 == 16) {
                            if (var18 != 0) {
                                var2[0] = (char)(var10 + (10 + 'x' - 'a'));
                                var2[1] = '0';
                                var3 = 2;
                            }
                        } else if (var9 == 8) {
                            var2[0] = '0';
                            var3 = 1;
                        }
                    }
                } else {
                    if (var6 & Enum_020d3160_256)
                        var18 = va_arg(arg3, char);
                    else if (var6 & Enum_020d3160_64)
                        var18 = va_arg(arg3, short);
                    else if (var6 & Enum_020d3160_128)
                        var18 = va_arg_64(arg3, Type_020b11c8_2);
                    else
                        var18 = va_arg(arg3, long);
                    if ((var18 >> 32) & 0x80000000) {
                        var18 = ~var18 + 1;
                        var2[0] = '-';
                        var3 = 1;
                    } else {
                        if (var18 || var8) {
                            if (var6 & Enum_020d3160_2) {
                                var2[0] = '+';
                                var3 = 1;
                            } else if (var6 & Enum_020d3160_1) {
                                var2[0] = ' ';
                                var3 = 1;
                            }
                        }
                    }
                }

                var1 = 0;
                switch (var9) {
                case 8:
                    while (var18 != 0) {
                        int var19 = (int)(var18 & 0x07);
                        var18 >>= 3;
                        var0[var1++] = (char)(var19 + '0');
                    }
                    break;
                case 10:
                    if ((var18 >> 32) == 0) {
                        Type_020b11c8 var20 = (Type_020b11c8)var18;
                        while (var20 != 0) {
                            Type_020b11c8 var21 = var20 / 10;
                            int var22 = (int)(var20 - (var21 * 10));
                            var20 = var21;
                            var0[var1++] = (char)(var22 + '0');
                        }
                    } else {
                        while (var18 != 0) {
                            Type_020b11c8_2 var23 = var18 / 10;
                            int var24 = (int)(var18 - (var23 * 10));
                            var18 = var23;
                            var0[var1++] = (char)(var24 + '0');
                        }
                    }
                    break;
                case 16:
                    while (var18 != 0) {
                        int var25 = (int)(var18 & 0x0f);
                        var18 >>= 4;
                        var0[var1++] = (char)((var25 < 10) ? (var25 + '0') : (var25 + var10));
                    }
                    break;
                }

                if ((var3 > 0) && (var2[0] == '0')) {
                    var3 = 0;
                    var0[var1++] = '0';
                }
            }
                goto put_to_stream;

            put_to_stream: {
                int var26 = var8 - var1;
                if (var6 & Enum_020d3160_16) {
                    if (var26 < var7 - var1 - var3)
                        var26 = var7 - var1 - var3;
                }

                if (var26 > 0)
                    var7 -= var26;
                var7 -= var3 + var1;

                if (!(var6 & Enum_020d3160_8))
                    inline_020d3160_2(&var5, ' ', var7);

                while (var3 > 0)
                    inline_020d3160(&var5, var2[--var3]);
                inline_020d3160_2(&var5, '0', var26);

                while (var1 > 0)
                    inline_020d3160(&var5, var0[--var1]);

                if (var6 & Enum_020d3160_8)
                    inline_020d3160_2(&var5, ' ', var7);
                ++var4;
            } break;
            }
        }
    }

    if (var5.unknown_0_ > 0) {
        *var5.unknown_4_ = '\0';
    } else if (arg1 > 0) {
        var5.unknown_8_[arg1 - 1] = '\0';
    }

    return var5.unknown_4_ - var5.unknown_8_;
}
