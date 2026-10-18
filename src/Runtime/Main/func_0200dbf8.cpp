#include <globaldefs.h>

struct CatchInfo0200dbf8 {
    void* location;
    void* typeInfo;
    void* dtor;
    void* subLocation;
    long pointerCopy;
    void* stackTop;
};

struct TargetContext0200dbf8 {
    unsigned long gpr[16];
    char* throwSp;
    unsigned long frameSize;
    unsigned long argumentSize;
    unsigned short savedGprs;
    bool hasFlushback;
    bool hasFramePtr;
    bool isThumb;
};

struct ThrowContext0200dbf8 {
    unsigned char* throwType;
    void* location;
    void* dtor;
    CatchInfo0200dbf8* catchInfo;
    char* returnAddr;
    char* sp;
    char* fp;
    TargetContext0200dbf8 target;
};

struct ExceptionInfo0200dbf8 {
    char* currentFunction;
    char* exceptionRecord;
    char* actionPointer;
    void* exceptionTableStart;
    void* exceptionTableEnd;
    int target;
};

struct ActionIterator0200dbf8 {
    ExceptionInfo0200dbf8 info;
    ThrowContext0200dbf8 context;
};

struct VttRef0200dbf8 {
    long offset;
    unsigned long base;
};

extern "C" char* func_0200f1a0(ThrowContext0200dbf8* context, ExceptionInfo0200dbf8* info);
extern "C" void func_0200dad4(char* returnAddress, ExceptionInfo0200dbf8* info);
extern "C" void func_0200f1fc(ThrowContext0200dbf8* context, ExceptionInfo0200dbf8* info);
extern "C" char* func_0200d958(char* p, long* value);
extern "C" char* func_0200d9e4(char* p, unsigned long* value);

static inline char* SkipDestroyLocal(char* p) {
    long local;
    p = func_0200d958(p + 1, &local);
    return p + 4;
}

static inline char* SkipDestroyLocalCond(char* p) {
    long local, cond;
    p = func_0200d958(p + 1, &local);
    p = func_0200d958(p, &cond);
    return p + 4;
}

static inline char* SkipDestroyLocalPointer(char* p) {
    long pointer;
    p = func_0200d958(p + 1, &pointer);
    return p + 4;
}

static inline char* SkipDestroyLocalArray(char* p) {
    long localArray;
    unsigned long elements, elementSize;
    p = func_0200d958(p + 1, &localArray);
    p = func_0200d9e4(p, &elements);
    p = func_0200d9e4(p, &elementSize);
    return p + 4;
}

static inline char* SkipDestroyBase(char* p) {
    long objectPtr, offset;
    p = func_0200d958(p + 1, &objectPtr);
    p = func_0200d958(p, &offset);
    return p + 4;
}

static inline char* SkipDestroyMember(char* p) {
    long objectPtr, offset;
    p = func_0200d958(p + 1, &objectPtr);
    p = func_0200d958(p, &offset);
    return p + 4;
}

static inline char* SkipDestroyMemberCond(char* p) {
    long objectPtr, cond, offset;
    p = func_0200d958(p + 1, &objectPtr);
    p = func_0200d958(p, &cond);
    p = func_0200d958(p, &offset);
    return p + 4;
}

static inline char* SkipDestroyMemberArray(char* p) {
    long objectPtr, offset;
    unsigned long elements, elementSize;
    p = func_0200d958(p + 1, &objectPtr);
    p = func_0200d958(p, &offset);
    p = func_0200d9e4(p, &elements);
    p = func_0200d9e4(p, &elementSize);
    return p + 4;
}

static inline char* SkipDeletePointer(char* p) {
    long pointerObject;
    p = func_0200d958(p + 1, &pointerObject);
    return p + 4;
}

static inline char* SkipDeletePointerCond(char* p) {
    long pointerObject, cond;
    p = func_0200d958(p + 1, &pointerObject);
    p = func_0200d958(p, &cond);
    return p + 4;
}

static inline char* SkipCatchBlock(char* p) {
    unsigned long catchPcOffset;
    long cinfoRef;
    p = func_0200d9e4(p + 5, &catchPcOffset);
    p = func_0200d958(p, &cinfoRef);
    return p;
}

static inline char* SkipActiveCatchBlock(char* p) {
    long cinfoRef;
    p = func_0200d958(p + 1, &cinfoRef);
    return p;
}

static inline char* SkipSpecification(char* p) {
    unsigned long specs, pcOffset;
    long cinfoRef;
    p = func_0200d9e4(p + 1, &specs);
    p = func_0200d9e4(p, &pcOffset);
    p = func_0200d958(p, &cinfoRef);
    return p + specs * sizeof(void*);
}

static inline char* SkipAction16(char* p) {
    long objectPtr, offset;
    VttRef0200dbf8 vtt;
    p = func_0200d958(p + 1, &objectPtr);
    p = func_0200d958(p, &offset);
    vtt.base = p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
    p = func_0200d958(p + 4, &vtt.offset);
    return p + 4;
}

static inline char* SkipAction17(char* p) {
    long objectPtr, vttPtr, objectOffset, vttOffset;
    p = func_0200d958(p + 1, &objectPtr);
    p = func_0200d958(p, &objectOffset);
    p = func_0200d958(p + 1, &vttPtr);
    p = func_0200d958(p, &vttOffset);
    return p + 4;
}

static inline char* SkipAction18(char* p) {
    long arrayPtr, arrayEnd;
    unsigned long elementSize;
    p = func_0200d958(p + 1, &arrayPtr);
    p = func_0200d958(p + 1, &arrayEnd);
    p = func_0200d9e4(p, &elementSize);
    return p + 4;
}

static inline char* SkipAction19(char* p) {
    long value;
    p = func_0200d958(p + 1, &value);
    return p;
}

static inline void TakeBranch(ExceptionInfo0200dbf8* info) {
    long target;
    func_0200d958(info->actionPointer + 1, &target);
    info->actionPointer += target;
}

// USA: func_0200dbf8
extern "C" ARM unsigned char func_0200dbf8(ActionIterator0200dbf8* iter) {
    char* p;
    unsigned char action;

    for (;;) {
        if ((p = iter->info.actionPointer) == 0 || ((action = *p) & 0x80) != 0) {
            func_0200dad4(func_0200f1a0(&iter->context, &iter->info), &iter->info);
            if (iter->info.exceptionRecord == 0)
                return 0xff;
            func_0200f1fc(&iter->context, &iter->info);
            if (iter->info.actionPointer != 0)
                break;
        } else {
            switch (action & 0x1f) {
                case 2: iter->info.actionPointer = SkipDestroyLocal(p); break;
                case 3: iter->info.actionPointer = SkipDestroyLocalCond(p); break;
                case 4: iter->info.actionPointer = SkipDestroyLocalPointer(p); break;
                case 5: iter->info.actionPointer = SkipDestroyLocalArray(p); break;
                case 6: iter->info.actionPointer = SkipDestroyBase(p); break;
                case 7: iter->info.actionPointer = SkipDestroyMember(p); break;
                case 8: iter->info.actionPointer = SkipDestroyMemberCond(p); break;
                case 9: iter->info.actionPointer = SkipDestroyMemberArray(p); break;
                case 10: iter->info.actionPointer = SkipDeletePointer(p); break;
                case 11: iter->info.actionPointer = SkipDeletePointerCond(p); break;
                case 12: iter->info.actionPointer = SkipCatchBlock(p); break;
                case 13: iter->info.actionPointer = SkipActiveCatchBlock(p); break;
                case 15: iter->info.actionPointer = SkipSpecification(p); break;
                case 16: iter->info.actionPointer = SkipAction16(p); break;
                case 17: iter->info.actionPointer = SkipAction17(p); break;
                case 18: iter->info.actionPointer = SkipAction18(p); break;
                case 19: iter->info.actionPointer = SkipAction19(p); break;
                default:
                    return 0xff;
            }
            break;
        }
    }

    while ((action = *iter->info.actionPointer & 0x1f) == 1)
        TakeBranch(&iter->info);
    return action;
}
