#include <globaldefs.h>

struct CatchInfo0200e830 {
    void* location;
    void* typeInfo;
    void* dtor;
    void* subLocation;
    long pointerCopy;
    void* stackTop;
};

struct TargetContext0200e830 {
    unsigned long gpr[16];
    char* throwSp;
    unsigned long frameSize;
    unsigned long argumentSize;
    unsigned short savedGprs;
    bool hasFlushback;
    bool hasFramePtr;
    bool isThumb;
};

struct ThrowContext0200e830 {
    unsigned char* throwType;
    void* location;
    void* dtor;
    CatchInfo0200e830* catchInfo;
    char* returnAddr;
    char* sp;
    char* fp;
    TargetContext0200e830 target;
};

struct ExceptionInfo0200e830 {
    char* currentFunction;
    char* exceptionRecord;
    char* actionPointer;
    void* exceptionTableStart;
    void* exceptionTableEnd;
    int target;
};

struct ActionIterator0200e830 {
    ExceptionInfo0200e830 info;
    ThrowContext0200e830 context;
};

extern "C" unsigned char func_0200dbdc(const ActionIterator0200e830* iter);
extern "C" unsigned char func_0200dbf8(ActionIterator0200e830* iter);
extern "C" char* func_0200d958(char* p, long* value);

// USA: func_0200e830
extern "C" ARM CatchInfo0200e830* func_0200e830(ThrowContext0200e830* context, ExceptionInfo0200e830* info) {
    ActionIterator0200e830 iter;
    unsigned char action;
    CatchInfo0200e830* catchInfo;
    long catchInfoRef;

    iter.info = *info;
    iter.context = *context;
    for (action = func_0200dbdc(&iter);; action = func_0200dbf8(&iter)) {
        switch (action) {
            case 13:
                break;

            case 0:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 15:
            case 16:
            case 17:
            case 18:
                continue;

            case 14:
            default:
                return 0;
        }
        break;
    }

    func_0200d958(iter.info.actionPointer + 1, &catchInfoRef);
    catchInfo = (CatchInfo0200e830*)(iter.context.fp + catchInfoRef);
    context->throwType = (unsigned char*)catchInfo->typeInfo;
    context->location = catchInfo->location;
    context->dtor = 0;
    context->catchInfo = catchInfo;

    return catchInfo;
}
