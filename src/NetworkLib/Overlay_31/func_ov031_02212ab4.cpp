#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"

enum DWCNdError {
    DWC_ND_ERROR_NONE,
    DWC_ND_ERROR_ALLOC,
    DWC_ND_ERROR_BUSY,
    DWC_ND_ERROR_HTTP,
    DWC_ND_ERROR_BUFFULL,
    DWC_ND_ERROR_DLSERVER,
    DWC_ND_ERROR_CANCELED,
    DWC_ND_ERROR_PARAM,
    DWC_ND_ERROR_FATAL,
    DWC_ND_ERROR_MAX
};
enum DWCNdCallbackReason {
    DWC_ND_CBREASON_INITIALIZE,
    DWC_ND_CBREASON_GETFILELISTNUM,
    DWC_ND_CBREASON_GETFILELIST,
    DWC_ND_CBREASON_GETFILE,
    DWC_ND_CBREASON_MAX
};
typedef void (*DWCNdCallback)(DWCNdCallbackReason, DWCNdError, int);
typedef void (*DWCNdCleanupCallback)(void);

struct RegisteredContext02212ab4 {
    DWCNdCallback callback;
    DWCNdCleanupCallback cleanupCallback;
    char gameCode[32];
    char password[32];
    int callbackRegistered;
    unsigned char registration[0x9c0 - 0x4c];
    ProcessorContext context;
};
extern RegisteredContext02212ab4* data_ov031_0224e5c0;
extern char data_ov031_02249ab4[];
extern "C" int func_ov031_02211aec();
extern "C" void* func_ov031_02212790(void*, int);
extern "C" void* func_ov031_022127a8(void*);
extern "C" int func_ov031_02212524(char*, void*);
extern "C" void func_ov031_022128fc();

// USA: func_ov031_02212ab4
extern "C" ARM int func_ov031_02212ab4(DWCNdCallback callback, char* gameCode, char* password) {
    if (func_ov031_02211aec()) return 0;
    data_ov031_0224e5c0 = (RegisteredContext02212ab4*)func_ov031_02212790((void*)0xa80, 32);
    data_ov031_0224e5c0->callbackRegistered = 0;
    VectorizedMemset(data_ov031_0224e5c0, 0, 0xa80);
    data_ov031_0224e5c0->callback = callback;
    strncpy(data_ov031_0224e5c0->gameCode, gameCode, 31);
    strncpy(data_ov031_0224e5c0->password, password, 31);
    if (!func_ov031_02212524(data_ov031_02249ab4, data_ov031_0224e5c0->registration)) {
        func_ov031_022127a8(data_ov031_0224e5c0);
        data_ov031_0224e5c0 = 0;
        return 0;
    }
    PopulateContext(&data_ov031_0224e5c0->context, (unsigned int)func_ov031_022128fc, 0, (unsigned int)&data_ov031_0224e5c0->context, 0x800, 16);
    MarkContextReadyAndSwitch(&data_ov031_0224e5c0->context);
    return 1;
}
