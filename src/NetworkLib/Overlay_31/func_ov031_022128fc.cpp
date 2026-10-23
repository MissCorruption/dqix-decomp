#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/ProcessorContext.h"

extern "C" int func_ov031_02212598();
extern "C" int func_ov031_022119b0(int*);
extern "C" void func_ov031_02211b08(int, int);
extern "C" int func_020c7170(char*, unsigned long, const char*, ...);
extern "C" void* func_ov031_02212790(void*, int);
extern "C" void* func_ov031_022127a8(void*);
extern "C" void func_ov031_022127c0(int, int, int);
extern "C" int func_ov031_0221aae4(int, int, char*, int);
typedef void* (*AllocateCallback)(unsigned int, unsigned int);
typedef void (*FreeCallback)(void*);
extern "C" int func_ov031_0223e6c0(AllocateCallback, FreeCallback, const char*, const char*, const void*, const void*, void*);

struct RequestContext {
    void (*notify)(int, int, int);
    char pad4[4];
    char identifier[32];
    char token[32];
    int active;
    char pad4c[4];
    char identity[65];
    char secret[1];
};

extern RequestContext* data_ov031_0224e5c0;
extern const char data_ov031_02249a8c[];
extern const char data_ov031_02249aa0[];

// USA: func_ov031_022128fc
extern "C" ARM void func_ov031_022128fc() {
    char identity[256];
    char secret[400];
    for (;;) {
        int state = func_ov031_02212598();
        if (state == 3) {
            RequestContext* context = data_ov031_0224e5c0;
            unsigned int length = strlen(context->identity);
            if (length + strlen(data_ov031_02249a8c) > 255) {
                func_ov031_022127c0(0, 8, -1);
                return;
            }
            func_020c7170(identity, 256, data_ov031_02249aa0, context->identity);
            context = data_ov031_0224e5c0;
            int secretLength = strlen(context->secret);
            if (func_ov031_0221aae4((int)context->secret, secretLength, secret, 400) < 0) {
                func_ov031_022127c0(0, 8, -1);
                return;
            }
            if (!func_ov031_0223e6c0((AllocateCallback)func_ov031_02212790, (FreeCallback)func_ov031_022127a8, identity, secret, data_ov031_0224e5c0->identifier, data_ov031_0224e5c0->token, (void*)func_ov031_022127c0)) {
                func_ov031_022127c0(0, 8, -1);
                return;
            }
            data_ov031_0224e5c0->active = 1;
            func_ov031_022127c0(0, 0, -1);
            return;
        }
        if (state == 4) {
            int result;
            func_ov031_022119b0(&result);
            func_ov031_02211b08(14, result);
            data_ov031_0224e5c0->notify(0, 3, -1);
            return;
        }
        if (state == 5) func_ov031_022127c0(0, 6, -1);
        SleepCurrentContext(100);
    }
}
