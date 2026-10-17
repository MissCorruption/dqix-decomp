#include <globaldefs.h>

struct CatchInfo0200ec44 {
    void* location;
    void* typeInfo;
    void* dtor;
    void* subLocation;
    long pointerCopy;
    void* stackTop;
};

struct ThrowContext0200ec44 {
    unsigned char* throwType;
    void* location;
    void* dtor;
    CatchInfo0200ec44* catchInfo;
    char* returnAddr;
    char* sp;
    char* fp;
};

// USA: func_0200ec44
extern "C" ARM void func_0200ec44(ThrowContext0200ec44* context, long catchInfoRef, long resultOffset) {
    CatchInfo0200ec44* catchInfo = (CatchInfo0200ec44*)(context->fp + catchInfoRef);

    catchInfo->location = context->location;
    catchInfo->typeInfo = context->throwType;
    catchInfo->dtor = context->dtor;

    if (*context->throwType == '*') {
        catchInfo->subLocation = &catchInfo->pointerCopy;
        catchInfo->pointerCopy = *(long*)context->location + resultOffset;
    } else {
        catchInfo->subLocation = (char*)context->location + resultOffset;
    }
}
