#include <globaldefs.h>
#include "System/ProcessorContext.h"

struct ContextIdentifierState {
    char unknown0[8];
    unsigned short currentIdentifier;
};

struct ContextIdentifierRecord {
    int active;
    char unknown4[6];
    unsigned short identifier;
};

extern "C" ContextIdentifierState _ZZ18GetGlobal_02201364vE1s;

// USA: func_ov031_02203078
extern "C" ARM unsigned short func_ov031_02203078(void) {
    int duplicate;
    ProcessorContext* context;
    unsigned short identifier;
    ProcessorContext* firstContext = data_02111304.firstContext;
    do {
        duplicate = 0;
        ++_ZZ18GetGlobal_02201364vE1s.currentIdentifier;
        if (_ZZ18GetGlobal_02201364vE1s.currentIdentifier < 1024 ||
            _ZZ18GetGlobal_02201364vE1s.currentIdentifier >= 5000) {
            _ZZ18GetGlobal_02201364vE1s.currentIdentifier = 1024;
        }
        context = firstContext;
        if (context != NULL) {
            identifier = _ZZ18GetGlobal_02201364vE1s.currentIdentifier;
            do {
                ContextIdentifierRecord* record = (ContextIdentifierRecord*)context->unknown_A4;
                if (record != NULL && record->active != 0 &&
                    record->identifier == identifier) {
                    duplicate = 1;
                    break;
                }
                context = context->pNext;
            } while (context != NULL);
        }
    } while (duplicate != 0);
    return _ZZ18GetGlobal_02201364vE1s.currentIdentifier;
}
