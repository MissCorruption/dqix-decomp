#include <globaldefs.h>

struct ExceptionSavedRegisters { unsigned int values[21]; };
struct ExceptionFrame {
    const char* typeName;
    void* exceptionObject;
    unsigned int cleanup;
    void* currentException;
    unsigned int returnAddress;
    void* savedStack;
    unsigned char* frameBase;
    ExceptionSavedRegisters savedRegisters;
};
struct ExceptionTableCursor {
    unsigned int functionStart;
    void* header;
    unsigned char* cursor;
    void* rangeStart;
    void* rangeEnd;
    unsigned int unknown14;
};
struct ExceptionScanContext {
    ExceptionTableCursor cursor;
    ExceptionFrame frame;
};
struct ExceptionObjectRecord { void* object; const char* typeName; };
extern "C" int func_0200dbdc(ExceptionScanContext*);
extern "C" int func_0200dbf8(ExceptionScanContext*);
extern "C" void* func_0200d958(void*, int*);

// USA: func_0200e830
extern "C" ARM void* func_0200e830(ExceptionFrame* frame, ExceptionTableCursor* table) {
    ExceptionScanContext scan;
    scan.cursor.functionStart = table->functionStart;
    scan.cursor.header = table->header;
    scan.cursor.cursor = table->cursor;
    scan.cursor.rangeStart = table->rangeStart;
    scan.cursor.rangeEnd = table->rangeEnd;
    scan.cursor.unknown14 = table->unknown14;
    scan.frame.typeName = frame->typeName;
    scan.frame.exceptionObject = frame->exceptionObject;
    scan.frame.cleanup = frame->cleanup;
    scan.frame.currentException = frame->currentException;
    scan.frame.returnAddress = frame->returnAddress;
    scan.frame.savedStack = frame->savedStack;
    scan.frame.frameBase = frame->frameBase;
    scan.frame.savedRegisters = frame->savedRegisters;
    int opcode = func_0200dbdc(&scan);
    for (;;) {
        switch (opcode) {
        case 0: case 2: case 3: case 4: case 5: case 6: case 7: case 8:
        case 9: case 10: case 11: case 12: case 15: case 16: case 17: case 18:
            break;
        default:
            return NULL;
        case 13:
            goto found;
        }
        opcode = func_0200dbf8(&scan);
    }
found:
    int offset;
    func_0200d958(scan.cursor.cursor + 1, &offset);
    ExceptionObjectRecord* record = (ExceptionObjectRecord*)(scan.frame.frameBase + offset);
    frame->typeName = record->typeName;
    frame->exceptionObject = record->object;
    frame->cleanup = 0;
    frame->currentException = record;
    return record;
}
