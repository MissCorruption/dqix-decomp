#include <globaldefs.h>

struct CatchInfo0200ea08 {
    void* location;
    void* typeInfo;
    void* dtor;
    void* subLocation;
    long pointerCopy;
    void* stackTop;
};

struct ThrowContext0200ea08 {
    unsigned char* throwType;
    void* location;
    void* dtor;
    CatchInfo0200ea08* catchInfo;
    char* returnAddr;
    char* sp;
    char* fp;
};

struct ExceptionInfo0200ea08 {
    char* currentFunction;
    char* exceptionRecord;
    char* actionPointer;
    void* exceptionTableStart;
    void* exceptionTableEnd;
    int target;
};

struct ExceptionSpecification0200ea08 {
    unsigned long specCount;
    unsigned long pcOffset;
    long catchInfoRef;
    char* specs;
};

extern "C" void func_0200df80(ThrowContext0200ea08* context, ExceptionInfo0200ea08* info, char* catcher);
extern "C" void func_0200f2ec(ThrowContext0200ea08* context, ExceptionInfo0200ea08* info, char* address);

// USA: func_0200ea08
extern "C" ARM void func_0200ea08(ThrowContext0200ea08* context, ExceptionInfo0200ea08* info,
                                  ExceptionSpecification0200ea08* spec, char* unexpected) {
    CatchInfo0200ea08* catchInfo;

#pragma exception_terminate

    func_0200df80(context, info, unexpected);

    catchInfo = (CatchInfo0200ea08*)(context->fp + spec->catchInfoRef);
    catchInfo->location = context->location;
    catchInfo->typeInfo = context->throwType;
    catchInfo->dtor = context->dtor;
    catchInfo->stackTop = unexpected;

    func_0200f2ec(context, info, info->currentFunction + spec->pcOffset);
}
