#include <globaldefs.h>

typedef unsigned char Type_0200df80_2;
#define EXACTION_ENDBIT  0x80
#define EXACTION_OPT1BIT 0x40
#define EXACTION_OPT2BIT 0x20
#define EXACTION_MASK    0x1F

#define REGCOND EXACTION_OPT1BIT
#define REGPTR  EXACTION_OPT2BIT

#define EXACTION_ENDOFLIST             0
#define EXACTION_BRANCH                1
#define EXACTION_DESTROYLOCAL          2
#define EXACTION_DESTROYLOCALCOND      3
#define EXACTION_DESTROYLOCALPOINTER   4
#define EXACTION_DESTROYLOCALARRAY     5
#define EXACTION_DESTROYBASE           6
#define EXACTION_DESTROYMEMBER         7
#define EXACTION_DESTROYMEMBERCOND     8
#define EXACTION_DESTROYMEMBERARRAY    9
#define EXACTION_DELETEPOINTER         10
#define EXACTION_DELETEPOINTERCOND     11
#define EXACTION_CATCHBLOCK            12
#define EXACTION_ACTIVECATCHBLOCK      13
#define EXACTION_TERMINATE             14
#define EXACTION_SPECIFICATION         15
#define EXACTION_DESTROYBASEVTTOBJECT  16
#define EXACTION_DESTROYBASEVTTPOINTER 17
#define EXACTION_DESTROYVLA            18
#define EXACTION_FREEVLA               19

typedef struct Struct_0200d958_5 {
    char*         unknown_0_;
    unsigned long unknown_4_;
    char*         unknown_8_;
} Struct_0200d958_5;

typedef short         Type_0200d958;
typedef unsigned char Type_0200d958_2;

typedef struct Struct_0200d958_6 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    long  unknown_10_;
    void* unknown_14_;
} Struct_0200d958_6;

#define DTORARG_TYPE     short
#define DTORARG_PARTIAL  (0)
#define DTORARG_COMPLETE (-1)

#define DTORCALL_COMPLETE(dtor, objptr)          (((void (*)(void*, DTORARG_TYPE))dtor)(objptr, DTORARG_COMPLETE))
#define DTORCALL_PARTIAL(dtor, objptr)           (((void (*)(void*, DTORARG_TYPE))dtor)(objptr, DTORARG_PARTIAL))
#define DTORCALL_VTTOBJECT(dtor, objptr, vttptr) (((void (*)(void*, void*))dtor)(objptr, vttptr))

typedef struct Struct_0200d958_7 {
    unsigned long  unknown_0_[16];
    char*          unknown_40_;
    unsigned long  unknown_44_;
    unsigned long  unknown_48_;
    unsigned short unknown_4c_;
    bool           unknown_4e_;
    bool           unknown_4f_;
    bool           unknown_50_;
} Struct_0200d958_7;

typedef struct Struct_0200df80 {
    unsigned char* unknown_0_;
    void*          unknown_4_;
    void*          unknown_8_;
    Struct_0200d958_6*     unknown_c_;
    char*          unknown_10_;
    char*          unknown_14_;
    char*          unknown_18_;
    Struct_0200d958_7  unknown_1c_;
} Struct_0200df80;

typedef struct Struct_0200d958_8 {
    int unknown_0_;
} Struct_0200d958_8;

typedef struct Struct_0200df80_2 {
    char*                unknown_0_;
    char*                unknown_4_;
    char*                unknown_8_;
    Struct_0200d958_5* unknown_c_;
    Struct_0200d958_5* unknown_10_;
    Struct_0200d958_8  unknown_14_;
} Struct_0200df80_2;

#define __FunctionPointer(info, context, fp)          (fp)
#define __LocalVariable(context, offset)              ((context)->unknown_18_ + (offset))
#define __Register(context, regno)                    ((context)->unknown_1c_.unknown_0_[regno])

inline char* __DecodeAddress(char* arg0, void** arg1) {
    unsigned long var0;

    var0 = ((unsigned char*)arg0)[0] | (((unsigned char*)arg0)[1] << 8) | (((unsigned char*)arg0)[2] << 16) |
           (((unsigned char*)arg0)[3] << 24);

    *arg1 = (void*)var0;
    return (arg0 + 4);
}

extern "C" char* func_0200d958(char* arg0, long* arg1);
extern "C" char* func_0200d9e4(char* arg0, unsigned long* arg1);
extern "C" char* func_0200f1a0(Struct_0200df80* arg0, Struct_0200df80_2* arg1);
extern "C" void func_0200f1fc(Struct_0200df80* arg0, Struct_0200df80_2* arg1);
extern "C" void func_0200dad4(char* arg0, Struct_0200df80_2* arg1);
extern "C" void func_0200efb8(void);

enum {
    Enum_0200df80_0  = 0,
    Enum_0200df80_1 = 1
};

typedef void (*Type_0200d958_3)(void*);

typedef struct Struct_0200d958_9 {
    Struct_0200df80_2 unknown_0_;
    Struct_0200df80  unknown_18_;
} Struct_0200d958_9;

typedef struct Struct_0200d958_10 {
    char*         unknown_0_;
    unsigned long unknown_4_;
    long          unknown_8_;
} Struct_0200d958_10;

typedef struct Struct_0200d958_11 {
    long unknown_0_;
} Struct_0200d958_11;

typedef struct Struct_0200d958_12 {
    unsigned long unknown_0_;
    unsigned long unknown_4_;
    long          unknown_8_;
    char*         unknown_c_;
} Struct_0200d958_12;

inline void inline_0200d958(char* arg0, Struct_0200d958_10* arg1) {
    arg0 += sizeof(Type_0200df80_2);
    arg0 = __DecodeAddress(arg0, (void**)&arg1->unknown_0_);
    arg0 = func_0200d9e4(arg0, &arg1->unknown_4_);
    arg0 = func_0200d958(arg0, &arg1->unknown_8_);
}

inline void inline_0200d958_2(char* arg0, Struct_0200d958_11* arg1) {
    arg0 += sizeof(Type_0200df80_2);
    arg0 = func_0200d958(arg0, &arg1->unknown_0_);
}

inline void inline_0200d958_3(char* arg0, Struct_0200d958_12* arg1) {
    arg0 += sizeof(Type_0200df80_2);
    arg0        = func_0200d9e4(arg0, &arg1->unknown_0_);
    arg0        = func_0200d9e4(arg0, &arg1->unknown_4_);
    arg0        = func_0200d958(arg0, &arg1->unknown_8_);
    arg1->unknown_c_ = arg0;
}

inline void inline_0200df80_11(Struct_0200df80_2* arg0, Struct_0200df80* arg1) {
    long var0;
    func_0200d958(arg0->unknown_8_ + sizeof(Type_0200df80_2), &var0);
    arg0->unknown_8_ += var0;
}

inline void inline_0200df80_12(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char* var0 = arg1->unknown_8_;
    long  var1;
    void* var2;

    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d958(var0, &var1);
    var0 = __DecodeAddress(var0, &var2);

    if (arg0) {
        DTORCALL_COMPLETE(__FunctionPointer(arg1, arg2, var2), __LocalVariable(arg2, var1));
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_13(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char*           var0 = arg1->unknown_8_;
    int             var1;
    long            var2, var3;
    void*           var4;
    Type_0200d958_2 var5;

    var1 = *(Type_0200df80_2*)var0 & REGCOND;
    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d958(var0, &var2);
    var0 = func_0200d958(var0, &var3);
    var0 = __DecodeAddress(var0, &var4);

    if (arg0) {
        if (var1)
            var5 = (Type_0200d958_2)__Register(arg2, var2);
        else
            var5 = *(Type_0200d958_2*)__LocalVariable(arg2, var2);

        if (var5) {
            DTORCALL_COMPLETE(__FunctionPointer(arg1, arg2, var4), __LocalVariable(arg2, var3));
        }
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_14(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char* var0 = arg1->unknown_8_;
    int   var1;
    long  var2;
    void *var3, *var4;

    var1 = *(Type_0200df80_2*)var0 & REGPTR;
    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d958(var0, &var2);
    var0 = __DecodeAddress(var0, &var3);

    if (arg0) {
        if (var1)
            var4 = (void*)__Register(arg2, var2);
        else
            var4 = *(void**)__LocalVariable(arg2, var2);

        DTORCALL_COMPLETE(__FunctionPointer(arg1, arg2, var3), var4);
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_15(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char*         var0 = arg1->unknown_8_;
    long          var1;
    unsigned long var2, var3, var4;
    void*         var5;
    char*         var6;

    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d958(var0, &var1);
    var0 = func_0200d9e4(var0, &var2);
    var0 = func_0200d9e4(var0, &var3);
    var0 = __DecodeAddress(var0, &var5);

    if (arg0) {
        var6 = (char*)__LocalVariable(arg2, var1);
        for (var6 += var2 * var3, var4 = var2; var4 > 0; var4--) {
            var6 -= var3;
            DTORCALL_COMPLETE(__FunctionPointer(arg1, arg2, var5), var6);
        }
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_16(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char*         var0 = arg1->unknown_8_;
    int           var1, var2;
    long          var3, var4;
    unsigned long var5, var6, var7;
    void*         var8;
    char *        var9, *var10;

    var1 = *(Type_0200df80_2*)var0 & REGPTR;
    var0 += sizeof(Type_0200df80_2);
    var0      = func_0200d958(var0, &var3);
    var2 = *(unsigned char*)var0 & REGPTR;
    var0 += sizeof(char);
    var0 = func_0200d958(var0, &var4);
    var0 = func_0200d9e4(var0, &var6);
    var0 = __DecodeAddress(var0, &var8);

    if (arg0) {
        if (var1)
            var9 = (char*)__Register(arg2, var3);
        else
            var9 = *(char**)__LocalVariable(arg2, var3);

        if (var2)
            var10 = (char*)__Register(arg2, var4);
        else
            var10 = *(char**)__LocalVariable(arg2, var4);

        var5 = (unsigned long)var10 / var6;
        for (var9 += (unsigned long)var10, var7 = var5; var7 > 0; var7--) {
            var9 -= var6;
            DTORCALL_COMPLETE(__FunctionPointer(arg1, arg2, var8), var9);
        }
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_17(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char* var0 = arg1->unknown_8_;
    int   var1;
    long  var2, var3;
    long* var4;

    var1 = *(Type_0200df80_2*)var0 & REGPTR;
    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d958(var0, &var2);

    if (arg0) {
        if (var1)
            var4 = (long*)__Register(arg2, var2);
        else
            var4 = *(long**)__LocalVariable(arg2, var2);
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_18(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char* var0 = arg1->unknown_8_;
    int   var1;
    long  var2, var3, var4;
    void* var5;
    char *var6, *var7;

    var1 = *(Type_0200df80_2*)var0 & REGPTR;
    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d958(var0, &var2);
    var0 = func_0200d958(var0, &var3);
    var0 = __DecodeAddress(var0, (void**)&var7);
    var0 = func_0200d958(var0, &var4);
    var0 = __DecodeAddress(var0, &var5);

    if (arg0) {
        if (var1)
            var6 = (char*)__Register(arg2, var2);
        else
            var6 = *(char**)__LocalVariable(arg2, var2);

        DTORCALL_VTTOBJECT(__FunctionPointer(arg1, arg2, var5), var6 + var3, var7 + var4);
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char* var0 = arg1->unknown_8_;
    int   var1, var2;
    long  var3, var4, var5, var6;
    void* var7;
    char *var8, *var9;

    var1 = *(Type_0200df80_2*)var0 & REGPTR;
    var0 += sizeof(Type_0200df80_2);
    var0      = func_0200d958(var0, &var3);
    var0      = func_0200d958(var0, &var5);
    var2 = *(unsigned char*)var0 & REGPTR;
    var0 += sizeof(char);
    var0 = func_0200d958(var0, &var4);
    var0 = func_0200d958(var0, &var6);
    var0 = __DecodeAddress(var0, &var7);

    if (arg0) {
        if (var1)
            var8 = (char*)__Register(arg2, var3);
        else
            var8 = *(char**)__LocalVariable(arg2, var3);

        if (var2)
            var9 = (char*)__Register(arg2, var4);
        else
            var9 = *(char**)__LocalVariable(arg2, var4);

        DTORCALL_VTTOBJECT(__FunctionPointer(arg1, arg2, var7), var8 + var5, var9 + var6);
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_2(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char* var0 = arg1->unknown_8_;
    int   var1;
    long  var2, var3;
    void* var4;
    char* var5;

    var1 = *(Type_0200df80_2*)var0 & REGPTR;
    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d958(var0, &var2);
    var0 = func_0200d958(var0, &var3);
    var0 = __DecodeAddress(var0, &var4);

    if (arg0) {
        if (var1)
            var5 = (char*)__Register(arg2, var2);
        else
            var5 = *(char**)__LocalVariable(arg2, var2);

        DTORCALL_PARTIAL(__FunctionPointer(arg1, arg2, var4), var5 + var3);
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_3(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char* var0 = arg1->unknown_8_;
    int   var1;
    long  var2, var3;
    void* var4;
    char* var5;

    var1 = *(Type_0200df80_2*)var0 & REGPTR;
    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d958(var0, &var2);
    var0 = func_0200d958(var0, &var3);
    var0 = __DecodeAddress(var0, &var4);

    if (arg0) {
        if (var1)
            var5 = (char*)__Register(arg2, var2);
        else
            var5 = *(char**)__LocalVariable(arg2, var2);

        DTORCALL_COMPLETE(__FunctionPointer(arg1, arg2, var4), var5 + var3);
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_4(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char*               var0 = arg1->unknown_8_;
    int                 var1, var2;
    long                var3, var4, var5;
    void*               var6;
    char*               var7;
    Type_0200d958 var8;

    var2 = *(Type_0200df80_2*)var0 & REGCOND;
    var1  = *(Type_0200df80_2*)var0 & REGPTR;
    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d958(var0, &var3);
    var0 = func_0200d958(var0, &var4);
    var0 = func_0200d958(var0, &var5);
    var0 = __DecodeAddress(var0, &var6);

    if (arg0) {
        if (var2)
            var8 = (Type_0200d958)__Register(arg2, var3);
        else
            var8 = *(Type_0200d958*)__LocalVariable(arg2, var3);

        if (var8) {
            if (var1)
                var7 = (char*)__Register(arg2, var4);
            else
                var7 = *(char**)__LocalVariable(arg2, var4);

            DTORCALL_COMPLETE(__FunctionPointer(arg1, arg2, var6), var7 + var5);
        }
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_5(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char*         var0 = arg1->unknown_8_;
    int           var1;
    long          var2, var3;
    unsigned long var4, var5, var6;
    void*         var7;
    char*         var8;

    var1 = *(Type_0200df80_2*)var0 & REGPTR;
    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d958(var0, &var2);
    var0 = func_0200d958(var0, &var3);
    var0 = func_0200d9e4(var0, &var4);
    var0 = func_0200d9e4(var0, &var5);
    var0 = __DecodeAddress(var0, &var7);

    if (arg0) {
        if (var1)
            var8 = (char*)__Register(arg2, var2) + var3;
        else
            var8 = *(char**)__LocalVariable(arg2, var2) + var3;

        for (var8 += var4 * var5, var6 = var4; var6 > 0; var6--) {
            var8 -= var5;
            DTORCALL_COMPLETE(__FunctionPointer(arg1, arg2, var7), var8);
        }
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_6(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char* var0 = arg1->unknown_8_;
    long  var1;
    void* var2;
    char* var3;
    int   var4;

    var4 = *(Type_0200df80_2*)var0 & REGPTR;
    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d958(var0, &var1);
    var0 = __DecodeAddress(var0, &var2);

    if (arg0) {
        if (var4)
            var3 = (char*)__Register(arg2, var1);
        else
            var3 = *(char**)__LocalVariable(arg2, var1);

        ((Type_0200d958_3)__FunctionPointer(arg1, arg2, var2))(var3);
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_7(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char*           var0 = arg1->unknown_8_;
    long            var1, var2;
    void*           var3;
    char*           var4;
    int             var5, var6;
    Type_0200d958_2 var7;

    var6 = *(Type_0200df80_2*)var0 & REGCOND;
    var5  = *(Type_0200df80_2*)var0 & REGPTR;
    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d958(var0, &var1);
    var0 = func_0200d958(var0, &var2);
    var0 = __DecodeAddress(var0, &var3);

    if (arg0) {
        if (var6)
            var7 = (Type_0200d958_2)__Register(arg2, var1);
        else
            var7 = *(Type_0200d958_2*)__LocalVariable(arg2, var1);

        if (var7) {
            if (var5)
                var4 = (char*)__Register(arg2, var2);
            else
                var4 = *(char**)__LocalVariable(arg2, var2);

            ((Type_0200d958_3)__FunctionPointer(arg1, arg2, var3))(var4);
        }
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_8(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char*         var0 = arg1->unknown_8_;
    void*         var1;
    unsigned long var2;
    long          var3;

    var0 += sizeof(Type_0200df80_2);
    var0 = __DecodeAddress(var0, &var1);
    var0 = func_0200d9e4(var0, &var2);
    var0 = func_0200d958(var0, &var3);

    if (arg0) {
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_9(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char*      var0 = arg1->unknown_8_;
    long       var1;
    Struct_0200d958_6* var2;

    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d958(var0, &var1);

    if (arg0) {
        var2 = (Struct_0200d958_6*)__LocalVariable(arg2, var1);
        if (var2->unknown_8_) {
            if (arg2->unknown_4_ == var2->unknown_0_) {
                arg2->unknown_8_ = var2->unknown_8_;
            } else
                DTORCALL_COMPLETE(var2->unknown_8_, var2->unknown_0_);
        }
    }

    arg1->unknown_8_ = var0;
}

inline void inline_0200df80_10(int arg0, Struct_0200df80_2* arg1, Struct_0200df80* arg2) {
    char*         var0 = arg1->unknown_8_;
    unsigned long var1, var2;
    long          var3;

    var0 += sizeof(Type_0200df80_2);
    var0 = func_0200d9e4(var0, &var1);
    var0 = func_0200d9e4(var0, &var2);
    var0 = func_0200d958(var0, &var3);
    var0 += var1 * sizeof(char*);

    if (arg0) {
    }

    arg1->unknown_8_ = var0;
}


// USA: func_0200df80
extern "C" ARM void func_0200df80(Struct_0200df80* arg0, Struct_0200df80_2* arg1, char* arg2) {
    Type_0200df80_2 var0;

#pragma exception_terminate

    while (true) {
        if (arg1->unknown_8_ == 0) {
            func_0200dad4(func_0200f1a0(arg0, arg1), arg1);

            if (!arg1->unknown_4_) {
                func_0200efb8();
            }
            func_0200f1fc(arg0, arg1);

            if (arg1->unknown_8_ == 0) {
                continue;
            }
        }

        var0 = *(Type_0200df80_2*)arg1->unknown_8_;

        switch (var0 & EXACTION_MASK) {
            case EXACTION_BRANCH:
                inline_0200df80_11(arg1, arg0);
                break;
            case EXACTION_DESTROYLOCAL:
                inline_0200df80_12(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_DESTROYLOCALCOND:
                inline_0200df80_13(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_DESTROYLOCALPOINTER:
                inline_0200df80_14(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_DESTROYLOCALARRAY:
                inline_0200df80_15(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_DESTROYBASE:
                inline_0200df80_2(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_DESTROYMEMBER:
                inline_0200df80_3(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_DESTROYMEMBERCOND:
                inline_0200df80_4(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_DESTROYMEMBERARRAY:
                inline_0200df80_5(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_DELETEPOINTER:
                inline_0200df80_6(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_DELETEPOINTERCOND:
                inline_0200df80_7(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_CATCHBLOCK:
                if (arg2 == arg1->unknown_8_)
                    return;
                inline_0200df80_8(Enum_0200df80_0, arg1, arg0);
                break;
            case EXACTION_ACTIVECATCHBLOCK:
                inline_0200df80_9(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_SPECIFICATION:
                if (arg2 == arg1->unknown_8_)
                    return;
                inline_0200df80_10(Enum_0200df80_0, arg1, arg0);
                break;
            case EXACTION_DESTROYBASEVTTOBJECT:
                inline_0200df80_18(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_DESTROYBASEVTTPOINTER:
                inline_0200df80(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_DESTROYVLA:
                inline_0200df80_16(Enum_0200df80_1, arg1, arg0);
                break;
            case EXACTION_FREEVLA:
                inline_0200df80_17(Enum_0200df80_1, arg1, arg0);
                break;
            default:
                func_0200efb8();
        }

        if (var0 & EXACTION_ENDBIT) {
            arg1->unknown_8_ = 0;
        }
    }
}

