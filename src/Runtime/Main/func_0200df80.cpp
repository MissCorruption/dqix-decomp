#include <globaldefs.h>

typedef unsigned char exaction_type;
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

typedef struct ExceptionTableIndex {
    char*         function_address;
    unsigned long function_size;
    char*         exception_table;
} ExceptionTableIndex;

typedef short         vbase_ctor_arg_type;
typedef unsigned char local_cond_type;

typedef struct CatchInfo {
    void* location;
    void* typeinfo;
    void* dtor;
    void* sublocation;
    long  pointercopy;
    void* stacktop;
} CatchInfo;

#define DTORARG_TYPE     short
#define DTORARG_PARTIAL  (0)
#define DTORARG_COMPLETE (-1)

#define DTORCALL_COMPLETE(dtor, objptr)          (((void (*)(void*, DTORARG_TYPE))dtor)(objptr, DTORARG_COMPLETE))
#define DTORCALL_PARTIAL(dtor, objptr)           (((void (*)(void*, DTORARG_TYPE))dtor)(objptr, DTORARG_PARTIAL))
#define DTORCALL_VTTOBJECT(dtor, objptr, vttptr) (((void (*)(void*, void*))dtor)(objptr, vttptr))

typedef struct TargetContext {
    unsigned long  GPR[16];
    char*          throwSP;
    unsigned long  frame_size;
    unsigned long  argument_size;
    unsigned short saved_GPRs;
    bool           has_flushback;
    bool           has_frame_ptr;
    bool           is_Thumb;
} TargetContext;

typedef struct ThrowContext {
    unsigned char* throwtype;
    void*          location;
    void*          dtor;
    CatchInfo*     catchinfo;
    char*          returnaddr;
    char*          SP;
    char*          FP;
    TargetContext  target;
} ThrowContext;

typedef struct TargetExceptionInfo {
    int dummy;
} TargetExceptionInfo;

typedef struct ExceptionInfo {
    char*                current_function;
    char*                exception_record;
    char*                action_pointer;
    ExceptionTableIndex* exception_table_start;
    ExceptionTableIndex* exception_table_end;
    TargetExceptionInfo  target;
} ExceptionInfo;

#define __FunctionPointer(info, context, fp)          (fp)
#define __LocalVariable(context, offset)              ((context)->FP + (offset))
#define __Register(context, regno)                    ((context)->target.GPR[regno])

inline char* __DecodeAddress(char* p, void** paddr) {
    unsigned long addr;

    addr = ((unsigned char*)p)[0] | (((unsigned char*)p)[1] << 8) | (((unsigned char*)p)[2] << 16) |
           (((unsigned char*)p)[3] << 24);

    *paddr = (void*)addr;
    return (p + 4);
}

extern "C" char* func_0200d958(char* p, long* pnum);
extern "C" char* func_0200d9e4(char* p, unsigned long* pnum);
extern "C" char* func_0200f1a0(ThrowContext* context, ExceptionInfo* info);
extern "C" void func_0200f1fc(ThrowContext* context, ExceptionInfo* info);
extern "C" void func_0200dad4(char* return_address, ExceptionInfo* info);
extern "C" void func_0200efb8(void);

enum {
    SKIP  = 0,
    APPLY = 1
};

typedef void (*DeleteFunc)(void*);

typedef struct ActionIterator {
    ExceptionInfo info;
    ThrowContext  context;
} ActionIterator;

typedef struct ex_catchblock {
    char*         catch_type;
    unsigned long pcoffset;
    long          cinfo_ref;
} ex_catchblock;

typedef struct ex_activecatchblock {
    long cinfo_ref;
} ex_activecatchblock;

typedef struct ex_specification {
    unsigned long nspecs;
    unsigned long pcoffset;
    long          cinfo_ref;
    char*         specs;
} ex_specification;

inline void DecodeCatchBlock(char* ap, ex_catchblock* cb) {
    ap += sizeof(exaction_type);
    ap = __DecodeAddress(ap, (void**)&cb->catch_type);
    ap = func_0200d9e4(ap, &cb->pcoffset);
    ap = func_0200d958(ap, &cb->cinfo_ref);
}

inline void DecodeActiveCatchBlock(char* ap, ex_activecatchblock* acb) {
    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &acb->cinfo_ref);
}

inline void DecodeSpecification(char* ap, ex_specification* sp) {
    ap += sizeof(exaction_type);
    ap        = func_0200d9e4(ap, &sp->nspecs);
    ap        = func_0200d9e4(ap, &sp->pcoffset);
    ap        = func_0200d958(ap, &sp->cinfo_ref);
    sp->specs = ap;
}

inline void Branch(ExceptionInfo* info, ThrowContext* context) {
    long target;
    func_0200d958(info->action_pointer + sizeof(exaction_type), &target);
    info->action_pointer += target;
}

inline void DestroyLocal(int apply, ExceptionInfo* info, ThrowContext* context) {
    char* ap = info->action_pointer;
    long  local;
    void* dtor;

    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &local);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        DTORCALL_COMPLETE(__FunctionPointer(info, context, dtor), __LocalVariable(context, local));
    }

    info->action_pointer = ap;
}

inline void DestroyLocalCond(int apply, ExceptionInfo* info, ThrowContext* context) {
    char*           ap = info->action_pointer;
    int             regcond;
    long            cond, local;
    void*           dtor;
    local_cond_type destroyIt;

    regcond = *(exaction_type*)ap & REGCOND;
    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &cond);
    ap = func_0200d958(ap, &local);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regcond)
            destroyIt = (local_cond_type)__Register(context, cond);
        else
            destroyIt = *(local_cond_type*)__LocalVariable(context, cond);

        if (destroyIt) {
            DTORCALL_COMPLETE(__FunctionPointer(info, context, dtor), __LocalVariable(context, local));
        }
    }

    info->action_pointer = ap;
}

inline void DestroyLocalPointer(int apply, ExceptionInfo* info, ThrowContext* context) {
    char* ap = info->action_pointer;
    int   regptr;
    long  ptr;
    void *dtor, *objectptr;

    regptr = *(exaction_type*)ap & REGPTR;
    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &ptr);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr)
            objectptr = (void*)__Register(context, ptr);
        else
            objectptr = *(void**)__LocalVariable(context, ptr);

        DTORCALL_COMPLETE(__FunctionPointer(info, context, dtor), objectptr);
    }

    info->action_pointer = ap;
}

inline void DestroyLocalArray(int apply, ExceptionInfo* info, ThrowContext* context) {
    char*         ap = info->action_pointer;
    long          array;
    unsigned long nelements, elemsize, i;
    void*         dtor;
    char*         arrayptr;

    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &array);
    ap = func_0200d9e4(ap, &nelements);
    ap = func_0200d9e4(ap, &elemsize);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        arrayptr = (char*)__LocalVariable(context, array);
        for (arrayptr += nelements * elemsize, i = nelements; i > 0; i--) {
            arrayptr -= elemsize;
            DTORCALL_COMPLETE(__FunctionPointer(info, context, dtor), arrayptr);
        }
    }

    info->action_pointer = ap;
}

inline void DestroyVarLenArray(int apply, ExceptionInfo* info, ThrowContext* context) {
    char*         ap = info->action_pointer;
    int           regptr1, regptr2;
    long          ptr1, ptr2;
    unsigned long nelements, elemsize, i;
    void*         dtor;
    char *        arrayptr, *arraysize;

    regptr1 = *(exaction_type*)ap & REGPTR;
    ap += sizeof(exaction_type);
    ap      = func_0200d958(ap, &ptr1);
    regptr2 = *(unsigned char*)ap & REGPTR;
    ap += sizeof(char);
    ap = func_0200d958(ap, &ptr2);
    ap = func_0200d9e4(ap, &elemsize);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr1)
            arrayptr = (char*)__Register(context, ptr1);
        else
            arrayptr = *(char**)__LocalVariable(context, ptr1);

        if (regptr2)
            arraysize = (char*)__Register(context, ptr2);
        else
            arraysize = *(char**)__LocalVariable(context, ptr2);

        nelements = (unsigned long)arraysize / elemsize;
        for (arrayptr += (unsigned long)arraysize, i = nelements; i > 0; i--) {
            arrayptr -= elemsize;
            DTORCALL_COMPLETE(__FunctionPointer(info, context, dtor), arrayptr);
        }
    }

    info->action_pointer = ap;
}

inline void FreeVarLenArray(int apply, ExceptionInfo* info, ThrowContext* context) {
    char* ap = info->action_pointer;
    int   regptr1;
    long  ptr1, spaddend;
    long* arrayptr;

    regptr1 = *(exaction_type*)ap & REGPTR;
    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &ptr1);

    if (apply) {
        if (regptr1)
            arrayptr = (long*)__Register(context, ptr1);
        else
            arrayptr = *(long**)__LocalVariable(context, ptr1);
    }

    info->action_pointer = ap;
}

inline void DestroyBaseVTTObject(int apply, ExceptionInfo* info, ThrowContext* context) {
    char* ap = info->action_pointer;
    int   regptr;
    long  ptr, offset, vtt_offset;
    void* dtor;
    char *objectptr, *vtt;

    regptr = *(exaction_type*)ap & REGPTR;
    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &ptr);
    ap = func_0200d958(ap, &offset);
    ap = __DecodeAddress(ap, (void**)&vtt);
    ap = func_0200d958(ap, &vtt_offset);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr)
            objectptr = (char*)__Register(context, ptr);
        else
            objectptr = *(char**)__LocalVariable(context, ptr);

        DTORCALL_VTTOBJECT(__FunctionPointer(info, context, dtor), objectptr + offset, vtt + vtt_offset);
    }

    info->action_pointer = ap;
}

inline void DestroyBaseVTTPointer(int apply, ExceptionInfo* info, ThrowContext* context) {
    char* ap = info->action_pointer;
    int   regptr1, regptr2;
    long  ptr1, ptr2, offset, vtt_offset;
    void* dtor;
    char *objectptr, *vtt;

    regptr1 = *(exaction_type*)ap & REGPTR;
    ap += sizeof(exaction_type);
    ap      = func_0200d958(ap, &ptr1);
    ap      = func_0200d958(ap, &offset);
    regptr2 = *(unsigned char*)ap & REGPTR;
    ap += sizeof(char);
    ap = func_0200d958(ap, &ptr2);
    ap = func_0200d958(ap, &vtt_offset);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr1)
            objectptr = (char*)__Register(context, ptr1);
        else
            objectptr = *(char**)__LocalVariable(context, ptr1);

        if (regptr2)
            vtt = (char*)__Register(context, ptr2);
        else
            vtt = *(char**)__LocalVariable(context, ptr2);

        DTORCALL_VTTOBJECT(__FunctionPointer(info, context, dtor), objectptr + offset, vtt + vtt_offset);
    }

    info->action_pointer = ap;
}

inline void DestroyBase(int apply, ExceptionInfo* info, ThrowContext* context) {
    char* ap = info->action_pointer;
    int   regptr;
    long  ptr, offset;
    void* dtor;
    char* objectptr;

    regptr = *(exaction_type*)ap & REGPTR;
    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &ptr);
    ap = func_0200d958(ap, &offset);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr)
            objectptr = (char*)__Register(context, ptr);
        else
            objectptr = *(char**)__LocalVariable(context, ptr);

        DTORCALL_PARTIAL(__FunctionPointer(info, context, dtor), objectptr + offset);
    }

    info->action_pointer = ap;
}

inline void DestroyMember(int apply, ExceptionInfo* info, ThrowContext* context) {
    char* ap = info->action_pointer;
    int   regptr;
    long  ptr, offset;
    void* dtor;
    char* objectptr;

    regptr = *(exaction_type*)ap & REGPTR;
    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &ptr);
    ap = func_0200d958(ap, &offset);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr)
            objectptr = (char*)__Register(context, ptr);
        else
            objectptr = *(char**)__LocalVariable(context, ptr);

        DTORCALL_COMPLETE(__FunctionPointer(info, context, dtor), objectptr + offset);
    }

    info->action_pointer = ap;
}

inline void DestroyMemberCond(int apply, ExceptionInfo* info, ThrowContext* context) {
    char*               ap = info->action_pointer;
    int                 regptr, regcond;
    long                cond, ptr, offset;
    void*               dtor;
    char*               objectptr;
    vbase_ctor_arg_type destroyIt;

    regcond = *(exaction_type*)ap & REGCOND;
    regptr  = *(exaction_type*)ap & REGPTR;
    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &cond);
    ap = func_0200d958(ap, &ptr);
    ap = func_0200d958(ap, &offset);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regcond)
            destroyIt = (vbase_ctor_arg_type)__Register(context, cond);
        else
            destroyIt = *(vbase_ctor_arg_type*)__LocalVariable(context, cond);

        if (destroyIt) {
            if (regptr)
                objectptr = (char*)__Register(context, ptr);
            else
                objectptr = *(char**)__LocalVariable(context, ptr);

            DTORCALL_COMPLETE(__FunctionPointer(info, context, dtor), objectptr + offset);
        }
    }

    info->action_pointer = ap;
}

inline void DestroyMemberArray(int apply, ExceptionInfo* info, ThrowContext* context) {
    char*         ap = info->action_pointer;
    int           regptr;
    long          ptr, offset;
    unsigned long nelements, elemsize, i;
    void*         dtor;
    char*         arrayptr;

    regptr = *(exaction_type*)ap & REGPTR;
    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &ptr);
    ap = func_0200d958(ap, &offset);
    ap = func_0200d9e4(ap, &nelements);
    ap = func_0200d9e4(ap, &elemsize);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr)
            arrayptr = (char*)__Register(context, ptr) + offset;
        else
            arrayptr = *(char**)__LocalVariable(context, ptr) + offset;

        for (arrayptr += nelements * elemsize, i = nelements; i > 0; i--) {
            arrayptr -= elemsize;
            DTORCALL_COMPLETE(__FunctionPointer(info, context, dtor), arrayptr);
        }
    }

    info->action_pointer = ap;
}

inline void DeletePointer(int apply, ExceptionInfo* info, ThrowContext* context) {
    char* ap = info->action_pointer;
    long  ptr;
    void* deletefunc;
    char* objectptr;
    int   regptr;

    regptr = *(exaction_type*)ap & REGPTR;
    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &ptr);
    ap = __DecodeAddress(ap, &deletefunc);

    if (apply) {
        if (regptr)
            objectptr = (char*)__Register(context, ptr);
        else
            objectptr = *(char**)__LocalVariable(context, ptr);

        ((DeleteFunc)__FunctionPointer(info, context, deletefunc))(objectptr);
    }

    info->action_pointer = ap;
}

inline void DeletePointerCond(int apply, ExceptionInfo* info, ThrowContext* context) {
    char*           ap = info->action_pointer;
    long            cond, ptr;
    void*           deletefunc;
    char*           objectptr;
    int             regptr, regcond;
    local_cond_type deleteIt;

    regcond = *(exaction_type*)ap & REGCOND;
    regptr  = *(exaction_type*)ap & REGPTR;
    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &cond);
    ap = func_0200d958(ap, &ptr);
    ap = __DecodeAddress(ap, &deletefunc);

    if (apply) {
        if (regcond)
            deleteIt = (local_cond_type)__Register(context, cond);
        else
            deleteIt = *(local_cond_type*)__LocalVariable(context, cond);

        if (deleteIt) {
            if (regptr)
                objectptr = (char*)__Register(context, ptr);
            else
                objectptr = *(char**)__LocalVariable(context, ptr);

            ((DeleteFunc)__FunctionPointer(info, context, deletefunc))(objectptr);
        }
    }

    info->action_pointer = ap;
}

inline void CatchBlock(int apply, ExceptionInfo* info, ThrowContext* context) {
    char*         ap = info->action_pointer;
    void*         catch_type;
    unsigned long pcoffset;
    long          cinfo_ref;

    ap += sizeof(exaction_type);
    ap = __DecodeAddress(ap, &catch_type);
    ap = func_0200d9e4(ap, &pcoffset);
    ap = func_0200d958(ap, &cinfo_ref);

    if (apply) {
    }

    info->action_pointer = ap;
}

inline void ActiveCatchBlock(int apply, ExceptionInfo* info, ThrowContext* context) {
    char*      ap = info->action_pointer;
    long       cinfo_ref;
    CatchInfo* catchinfo;

    ap += sizeof(exaction_type);
    ap = func_0200d958(ap, &cinfo_ref);

    if (apply) {
        catchinfo = (CatchInfo*)__LocalVariable(context, cinfo_ref);
        if (catchinfo->dtor) {
            if (context->location == catchinfo->location) {
                context->dtor = catchinfo->dtor;
            } else
                DTORCALL_COMPLETE(catchinfo->dtor, catchinfo->location);
        }
    }

    info->action_pointer = ap;
}

inline void Specification(int apply, ExceptionInfo* info, ThrowContext* context) {
    char*         ap = info->action_pointer;
    unsigned long nspecs, pcoffset;
    long          cinfo_ref;

    ap += sizeof(exaction_type);
    ap = func_0200d9e4(ap, &nspecs);
    ap = func_0200d9e4(ap, &pcoffset);
    ap = func_0200d958(ap, &cinfo_ref);
    ap += nspecs * sizeof(char*);

    if (apply) {
    }

    info->action_pointer = ap;
}


// USA: func_0200df80
extern "C" ARM void func_0200df80(ThrowContext* context, ExceptionInfo* info, char* catcher) {
    exaction_type action;

#pragma exception_terminate

    while (true) {
        if (info->action_pointer == 0) {
            func_0200dad4(func_0200f1a0(context, info), info);

            if (!info->exception_record) {
                func_0200efb8();
            }
            func_0200f1fc(context, info);

            if (info->action_pointer == 0) {
                continue;
            }
        }

        action = *(exaction_type*)info->action_pointer;

        switch (action & EXACTION_MASK) {
            case EXACTION_BRANCH:
                Branch(info, context);
                break;
            case EXACTION_DESTROYLOCAL:
                DestroyLocal(APPLY, info, context);
                break;
            case EXACTION_DESTROYLOCALCOND:
                DestroyLocalCond(APPLY, info, context);
                break;
            case EXACTION_DESTROYLOCALPOINTER:
                DestroyLocalPointer(APPLY, info, context);
                break;
            case EXACTION_DESTROYLOCALARRAY:
                DestroyLocalArray(APPLY, info, context);
                break;
            case EXACTION_DESTROYBASE:
                DestroyBase(APPLY, info, context);
                break;
            case EXACTION_DESTROYMEMBER:
                DestroyMember(APPLY, info, context);
                break;
            case EXACTION_DESTROYMEMBERCOND:
                DestroyMemberCond(APPLY, info, context);
                break;
            case EXACTION_DESTROYMEMBERARRAY:
                DestroyMemberArray(APPLY, info, context);
                break;
            case EXACTION_DELETEPOINTER:
                DeletePointer(APPLY, info, context);
                break;
            case EXACTION_DELETEPOINTERCOND:
                DeletePointerCond(APPLY, info, context);
                break;
            case EXACTION_CATCHBLOCK:
                if (catcher == info->action_pointer)
                    return;
                CatchBlock(SKIP, info, context);
                break;
            case EXACTION_ACTIVECATCHBLOCK:
                ActiveCatchBlock(APPLY, info, context);
                break;
            case EXACTION_SPECIFICATION:
                if (catcher == info->action_pointer)
                    return;
                Specification(SKIP, info, context);
                break;
            case EXACTION_DESTROYBASEVTTOBJECT:
                DestroyBaseVTTObject(APPLY, info, context);
                break;
            case EXACTION_DESTROYBASEVTTPOINTER:
                DestroyBaseVTTPointer(APPLY, info, context);
                break;
            case EXACTION_DESTROYVLA:
                DestroyVarLenArray(APPLY, info, context);
                break;
            case EXACTION_FREEVLA:
                FreeVarLenArray(APPLY, info, context);
                break;
            default:
                func_0200efb8();
        }

        if (action & EXACTION_ENDBIT) {
            info->action_pointer = 0;
        }
    }
}

