#include <globaldefs.h>
#include <std_library_functions.h>
#include "System/Memory.h"
#include "System/Mutex.h"
#include "System/Timing.h"

struct HttpRequest {
    unsigned char payload[0x800];
    int handle;
    unsigned char padding804[0xc];
    int (*callback)(int);
    unsigned char padding814[0x1c];
};

struct HttpResponse {
    char* start;
    char* current;
    char* limit;
    int capacity;
    Mutex mutex;
    int contentLength;
    int bodyOffset;
};

struct HttpConfiguration {
    unsigned char padding0[0xc];
    HttpRequest* request;
    unsigned char padding10[0x54];
};

struct HttpFields {
    unsigned char padding0[0x1c];
    int timeout;
    int status;
    unsigned char padding24[0x100];
    int handle;
    unsigned char padding128[4];
    unsigned int address;
    int mode;
    unsigned short port;
    unsigned short padding136;
    HttpConfiguration configuration;
    HttpRequest request;
    unsigned char padding9cc[0x2c];
    char* url;
    unsigned char padding9fc[0xc];
    HttpResponse response;
};

struct HttpState {
    unsigned char prefix[0x1000];
    HttpFields network;
};

extern "C" void func_ov031_02217f44(void*);
int Wrapper02217f9c(void*);
void InitSessionFields_0220321c();
int ClearHighBit15_02218798(int);
void RegisterNamedEntry_02207d60(void*, void*);
void SetActiveContextByte9_0220aa68(unsigned char);
void UpdateObjFromContext_022031bc(int, unsigned short, unsigned int);
extern "C" int func_ov031_02203358();
void ZeroField164_02203250();
void ClearField164_02203178();
extern "C" int func_ov031_02203a84(void*, int);
void ClearField60_02203b8c();
int TryProcessAndSleep_02217ecc(char*);
extern "C" int func_ov031_02203b1c();
extern "C" int func_ov031_0220357c(unsigned int*);
extern "C" int func_ov031_02217fb0(void*);
extern "C" void func_ov031_02203670(int);
extern "C" void func_ov031_022033e8();
void UpdateAndWaitOnContext_02203424();
extern char data_ov031_02249d84[];
extern int data_ov031_0224c9d0;

// USA: func_ov031_02218098
extern "C" ARM void func_ov031_02218098(HttpState* state) {
    HttpResponse* response;
    int timeout = state->network.timeout;
    HttpConfiguration* configuration = &state->network.configuration;
    HttpRequest* request = &state->network.request;
    response = &state->network.response;
    int headersParsed = 0;
    if (timeout <= 0)
        timeout = 60000;
    func_ov031_02217f44(state);
    unsigned int address = Wrapper02217f9c(state);
    if (!address) {
        state->network.status = 2;
        return;
    }
    state->network.address = address;
    InitSessionFields_0220321c();
    int received;
    if (state->network.mode == 1) {
        VectorizedMemset(request, 0, 0x830);
        request->callback = ClearHighBit15_02218798;
        request->handle = state->network.handle;
        configuration->request = request;
        RegisterNamedEntry_02207d60(data_ov031_02249d84, (void*)12);
        SetActiveContextByte9_0220aa68(1);
    }
    UpdateObjFromContext_022031bc(0, state->network.port, address);
    if (func_ov031_02203358()) {
        state->network.status = 3;
        ZeroField164_02203250();
        ClearField164_02203178();
        return;
    }
    char* url = state->network.url;
    received = func_ov031_02203a84(url, strlen(url));
    if (received <= 0) {
        state->network.status = 5;
        goto cleanup;
    }
    ClearField60_02203b8c();
    if (!TryProcessAndSleep_02217ecc((char*)state)) {
        state->network.status = 7;
        goto cleanup;
    }
    response->current = response->start;
    response->limit = response->start + response->capacity;
    unsigned long long lastActivity = GetCurrentTimestamp();
    while (true) {
        if (!data_ov031_0224c9d0) {
            state->network.status = 5;
            goto cleanup;
        }
        received = func_ov031_02203b1c();
        if (received < 0)
            break;
        if (received > 0) {
            lastActivity = GetCurrentTimestamp();
            int payloadAddress = func_ov031_0220357c((unsigned int*)&received);
            if (!payloadAddress)
                break;
            int count = received;
            int available = response->limit - 1 - response->current;
            if (count >= available)
                count = available;
            VectorizedInvertedMemcpy((void*)payloadAddress, response->current, count);
            response->current += count;
            *response->current = 0;
            if (headersParsed == 1) {
                LockMutex(&state->network.response.mutex);
                state->network.response.bodyOffset += count;
                UnlockMutex(&state->network.response.mutex);
            } else {
                headersParsed = func_ov031_02217fb0(state);
            }
            if ((unsigned int)received > (unsigned int)count) {
                func_ov031_02203670(received);
                break;
            }
            func_ov031_02203670(count);
        }
        if (state->network.response.contentLength >= 0 && state->network.response.bodyOffset >= state->network.response.contentLength)
            break;
        if (((GetCurrentTimestamp() - lastActivity) << 6) / 33514 > (unsigned long long)timeout) {
            state->network.status = 6;
            goto cleanup;
        }
        if (!TryProcessAndSleep_02217ecc((char*)state)) {
            state->network.status = 7;
            goto cleanup;
        }
    }
    func_ov031_022033e8();
    UpdateAndWaitOnContext_02203424();
    ZeroField164_02203250();
    ClearField164_02203178();
    state->network.status = 8;
    return;
cleanup:
    func_ov031_022033e8();
    UpdateAndWaitOnContext_02203424();
    ZeroField164_02203250();
    ClearField164_02203178();
}
