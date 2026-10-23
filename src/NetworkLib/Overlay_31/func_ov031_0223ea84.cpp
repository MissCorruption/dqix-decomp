#include <globaldefs.h>

enum DWCNdError0223ea84 {
    ND_ERROR_NONE, ND_ERROR_ALLOC, ND_ERROR_BUSY, ND_ERROR_HTTP,
    ND_ERROR_BUFFULL, ND_ERROR_SERVER, ND_ERROR_CANCELLED, ND_ERROR_PARAM, ND_ERROR_FATAL
};
enum DWCNdCallbackReason0223ea84 {
    ND_REASON_INITIALIZE, ND_REASON_COUNT, ND_REASON_LIST, ND_REASON_FILE
};

struct Struct022412e8;
struct Obj0223f740 {
    int jobId;
    DWCNdCallbackReason0223ea84 mode;
    void (*callback)(DWCNdCallbackReason0223ea84, DWCNdError0223ea84, int);
    void* callbackData;
    void* output;
    int expectedSize;
    void* responseBuffer;
    void* offsetParam;
    void* countParam;
};

struct CleanupCallbacks {
    void (*release)(void*);
};

extern CleanupCallbacks data_ov031_02290dc0;
extern int data_ov031_02290dc4;
extern int data_ov031_02290dbc;
extern const unsigned char data_ov031_0224c6b4[];
extern const unsigned char data_ov031_0224c6c4[];
extern "C" int func_ov031_022411e4(Struct022412e8*, const void*, void**);
extern "C" int func_ov031_0223fb8c(const char*, int);
extern "C" int func_ov031_022412e8(Struct022412e8*, int*);
extern "C" int func_ov031_0223fb54(const unsigned char*, const unsigned char*, int);
extern "C" int func_ov031_0223e54c(char*, const char*, int);
extern "C" int func_ov031_0223f6ec(Struct022412e8*, Obj0223f740*);
extern "C" int func_ov031_0223f76c(Struct022412e8*, Obj0223f740*);
extern "C" int func_ov031_0223f740(Struct022412e8*, Obj0223f740*);
extern "C" void func_ov031_0223fa0c();
extern "C" void func_ov031_0223fa20();
extern "C" void func_ov031_02241060(Struct022412e8*);
extern "C" void func_ov031_0223faa8();
extern "C" void func_ov031_0223fad4(void*);

// USA: func_ov031_0223ea84
extern "C" ARM void func_ov031_0223ea84(int error, Struct022412e8* response, Obj0223f740* work) {
    void (*callback)(DWCNdCallbackReason0223ea84, DWCNdError0223ea84, int) = work->callback;
    void* callbackData = work->callbackData;
    DWCNdCallbackReason0223ea84 mode = work->mode;
    int detail = -1;
    DWCNdError0223ea84 result;
    void* statusText;
    int encodedText;
    char dec[4];

    switch (error) {
    case 0:
        if (func_ov031_022411e4(response, data_ov031_0224c6b4, &statusText) != 3) {
            result = ND_ERROR_HTTP;
            break;
        } else {
            int code = func_ov031_0223fb8c((const char*)statusText, 3);
            if (code == 302) {
                int found = 0;
                int len = func_ov031_022412e8(response, &encodedText);
                int i;
                if (len < 0) {
                    result = ND_ERROR_HTTP;
                    break;
                }
                i = 0;
                if (len > 0) do {
                    int start = i;
                    const char* p = (const char*)encodedText + i;
                    int n;
                    int vstart;
                    const char* q;
                    int vlen;
                    while (*p != '=' && i < len) {
                        p++;
                        i++;
                    }
                    n = i - start;
                    i++;
                    if (n == 8) {
                        found = func_ov031_0223fb54((const unsigned char*)encodedText + start, data_ov031_0224c6c4, 8) == 0;
                    }
                    vstart = i;
                    q = (const char*)encodedText + i;
                    while (*q != '&' && *q != '\r' && *q != '\0' && i < len) {
                        q++;
                        i++;
                    }
                    vlen = i - vstart;
                    i++;
                    if (found) {
                        if (vlen == 4) {
                            int m = func_ov031_0223e54c(dec, (const char*)encodedText + vstart, vlen);
                            dec[m] = '\0';
                            detail = func_ov031_0223fb8c(dec, m);
                        }
                        break;
                    }
                } while (i < len);
                result = detail < 0 ? ND_ERROR_HTTP : ND_ERROR_SERVER;
            } else if (code <= 0 || code != 200) {
                result = ND_ERROR_HTTP;
            } else {
                switch (mode) {
                case 1:
                    result = func_ov031_0223f6ec(response, work) ? ND_ERROR_NONE : ND_ERROR_HTTP;
                    break;
                case 2:
                    result = func_ov031_0223f76c(response, work) ? ND_ERROR_NONE : ND_ERROR_HTTP;
                    break;
                case 3:
                    result = func_ov031_0223f740(response, work) ? ND_ERROR_NONE : ND_ERROR_HTTP;
                    break;
                }
            }
        }
        break;
    case 8:
        result = ND_ERROR_CANCELLED;
        break;
    case 6:
        result = ND_ERROR_BUFFULL;
        break;
    default:
        result = ND_ERROR_HTTP;
        break;
    }

    switch (mode) {
    case 1:
        break;
    case 2:
        if (work->countParam != 0) {
            data_ov031_02290dc0.release(work->countParam);
        }
        if (work->offsetParam != 0) {
            data_ov031_02290dc0.release(work->offsetParam);
        }
        data_ov031_02290dc0.release(work->responseBuffer);
        break;
    case 3:
        data_ov031_02290dc0.release(work->output);
        break;
    }
    func_ov031_0223fa0c();
    data_ov031_02290dc4 = -1;
    func_ov031_0223fa20();
    func_ov031_02241060(response);
    data_ov031_02290dc0.release(work);
    func_ov031_0223faa8();
    if (result != 0) {
        data_ov031_02290dbc = result;
    }
    if (callback != 0) {
        callback(mode, result, detail);
    }
    if (callbackData) {
        func_ov031_0223fad4(callbackData);
    }
}
