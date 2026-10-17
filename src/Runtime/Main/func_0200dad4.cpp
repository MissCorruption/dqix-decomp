#include <globaldefs.h>

struct ExceptionTableIndex0200dad4 {
    char* functionAddress;
    unsigned long functionSize;
    char* exceptionTable;
};

struct ExceptionInfo0200dad4 {
    char* currentFunction;
    char* exceptionRecord;
    char* actionPointer;
    ExceptionTableIndex0200dad4* exceptionTableStart;
    ExceptionTableIndex0200dad4* exceptionTableEnd;
    int target;
};

extern "C" int func_0200f29c(ExceptionInfo0200dad4* info, char* returnAddress);
extern "C" ExceptionTableIndex0200dad4* func_0200da70(ExceptionTableIndex0200dad4* table, unsigned long tableSize,
                                           char* returnAddress);
extern "C" char* func_0200f2bc(char* exceptionRecord);
extern "C" char* func_0200d9e4(char* p, unsigned long* value);

// USA: func_0200dad4
extern "C" ARM void func_0200dad4(char* returnAddress, ExceptionInfo0200dad4* info) {
    ExceptionTableIndex0200dad4* exceptionTable;
    char* rangeTable;
    unsigned long returnOffset;
    unsigned long currentPc;
    unsigned long deltaPc;
    unsigned long length;
    unsigned long actions;

    info->exceptionRecord = 0;
    info->actionPointer = 0;

    if (!func_0200f29c(info, returnAddress))
        return;

    if (!(exceptionTable = func_0200da70(info->exceptionTableStart,
                                         info->exceptionTableEnd - info->exceptionTableStart, returnAddress)))
        return;

    if ((exceptionTable->functionSize & 1) != 0)
        info->exceptionRecord = (char*)&exceptionTable->exceptionTable;
    else
        info->exceptionRecord = exceptionTable->exceptionTable;

    info->currentFunction = exceptionTable->functionAddress;
    returnOffset = returnAddress - exceptionTable->functionAddress;

    rangeTable = func_0200f2bc(info->exceptionRecord);

    for (currentPc = 0;;) {
        rangeTable = func_0200d9e4(rangeTable, &deltaPc);
        if (deltaPc == 0)
            return;
        rangeTable = func_0200d9e4(rangeTable, &length);
        rangeTable = func_0200d9e4(rangeTable, &actions);
        currentPc += deltaPc;
        if (returnOffset < currentPc)
            return;
        currentPc += length;
        if (returnOffset <= currentPc)
            break;
    }

    info->actionPointer = info->exceptionRecord + actions;
}
