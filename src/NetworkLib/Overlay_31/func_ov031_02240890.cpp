#include <globaldefs.h>

void ZeroMemRegion_022415b4(void* dst, unsigned int size);
void CopyMemory_022415c8(void* dst, const void* src, unsigned int size);
extern "C" int func_ov031_022415a8(const char* s);
extern "C" int func_ov031_02241540(const char* a, const char* b, int n);
extern "C" int func_ov031_02242c54(const char* text, int length);
extern "C" int func_ov031_02242f14(const char* p, int len);

extern int data_ov031_02290fc0;
extern void* (*data_ov031_02290fc4)(unsigned int size, int align);
extern void (*data_ov031_02290fc8)(void* p);
extern const char data_ov031_0224c770[];
extern const char data_ov031_0224c778[];
extern const unsigned char data_ov031_022494c0[];

struct HttpSsl {
    char pad0[0x800];
    char* host;
    char pad804[0x2c];
};

struct HttpBody {
    char pad0[0xc];
    unsigned int len;
    char pad10[8];
    void* buf;
    char pad1c[0x404];
};

struct HttpRequest {
    char pad0[8];
    int ssl;
    int hostEnd;
    int portEnd;
    char pad14[0xc];
    HttpSsl* sslInfo;
    char* url;
    int port;
    void* param;
    HttpBody* body;
    char pad34[8];
    void* callback;
    int method;
    unsigned char header[0x14];
};

// USA: func_ov031_02240890
extern "C" ARM HttpRequest* func_ov031_02240890(const char* url, int method, void* buf, unsigned int len,
                                                void* callback, void* param) {
    int prefix;
    int urlLen;
    int i;
    int j;
    const char* p;
    int esc;
    int slash;
    signed char c;
    HttpRequest* req = 0;
    int state;

    if (method != 0 && method != 1 && method != 2) {
        data_ov031_02290fc0 = 0xb;
        goto fail;
    }
    if (len == 0) {
        data_ov031_02290fc0 = 0xb;
        goto fail;
    }
    req = (HttpRequest*)data_ov031_02290fc4(sizeof(HttpRequest), 4);
    if (req == 0) {
        data_ov031_02290fc0 = 1;
        goto fail;
    }
    ZeroMemRegion_022415b4(req, sizeof(HttpRequest));
    req->body = (HttpBody*)data_ov031_02290fc4(sizeof(HttpBody), 4);
    if (req->body == 0) {
        data_ov031_02290fc0 = 1;
        goto fail;
    }
    ZeroMemRegion_022415b4(req->body, sizeof(HttpBody));
    req->body->buf = buf;
    req->body->len = len;

    urlLen = func_ov031_022415a8(url);
    if (urlLen <= 7) {
        data_ov031_02290fc0 = 4;
        goto fail;
    }
    prefix = 7;
    req->port = 80;
    if (func_ov031_02241540(url, data_ov031_0224c770, prefix) != 0) {
        if (func_ov031_02241540(url, data_ov031_0224c778, 8) != 0) {
            data_ov031_02290fc0 = 4;
            goto fail;
        }
        req->ssl = 1;
        req->port = 443;
        prefix = 8;
    }
    urlLen -= prefix;
    p = url + prefix;
    if (urlLen <= 0) {
        data_ov031_02290fc0 = 4;
        goto fail;
    }

    for (i = 0, esc = 0, state = 0; i < urlLen && p[i] != '/'; i++) {
        if (state == 2) {
            state--;
        } else if (state == 1) {
            c = func_ov031_02242c54(&p[i - 1], 2);
            state--;
            if (c < 0) {
                data_ov031_02290fc0 = 4;
                goto fail;
            }
            if (c == '/') {
                esc--;
                break;
            }
        } else if (p[i] == '%') {
            state = 2;
            esc++;
        }
    }
    if (state != 0) {
        data_ov031_02290fc0 = 4;
        goto fail;
    }

    req->url = (char*)data_ov031_02290fc4(prefix + urlLen - esc * 2 + 1, 4);
    if (req->url == 0) {
        data_ov031_02290fc0 = 1;
        goto fail;
    }
    CopyMemory_022415c8(req->url, url, prefix);

    for (i = 0, j = 0, state = 0, slash = 0; i < urlLen; i++) {
        if (state == 2) {
            state--;
        } else if (state == 1) {
            c = func_ov031_02242c54(&p[i - 1], 2);
            req->url[prefix + j - 1] = c;
            state--;
            if (c == '/') {
                slash = 1;
            }
        } else {
            c = p[i];
            if (c == '/') {
                slash = 1;
            }
            if (slash == 0 && c == '%') {
                state = 2;
            } else {
                req->url[prefix + j] = c;
            }
            j++;
        }
    }
    req->url[prefix + j] = 0;

    {
        const char* host = req->url + prefix;
        int k;
        for (k = 0; k < j; k++) {
            if (host[k] == '/' || host[k] == ':') {
                req->hostEnd = k + prefix;
                break;
            }
        }
        if (k == j) {
            req->hostEnd = k + prefix;
            req->portEnd = k + prefix;
        } else if (host[k] == '/') {
            req->portEnd = req->hostEnd;
        } else if (host[k] == ':') {
            for (; k < j; k++) {
                if (host[k] == '/') {
                    req->portEnd = k + prefix;
                    break;
                }
            }
            if (k == j) {
                req->portEnd = k + prefix;
            } else {
                int start = req->hostEnd + 1;
                int port = func_ov031_02242f14(req->url + start, req->portEnd - start);
                if (port < 0) {
                    port = req->port;
                } else if (port > 0xffff) {
                    data_ov031_02290fc0 = 4;
                    goto fail;
                }
                req->port = (unsigned short)port;
            }
        }
    }

    if (req->ssl != 0) {
        int hostLen = req->hostEnd - prefix;
        req->sslInfo = (HttpSsl*)data_ov031_02290fc4(sizeof(HttpSsl), 4);
        if (req->sslInfo == 0) {
            data_ov031_02290fc0 = 1;
            goto fail;
        }
        ZeroMemRegion_022415b4(req->sslInfo, sizeof(HttpSsl));
        req->sslInfo->host = (char*)data_ov031_02290fc4(hostLen + 1, 4);
        if (req->sslInfo->host == 0) {
            data_ov031_02290fc0 = 1;
            goto fail;
        }
        CopyMemory_022415c8(req->sslInfo->host, req->url + prefix, hostLen);
        req->sslInfo->host[hostLen] = 0;
    }

    CopyMemory_022415c8(req->header, data_ov031_022494c0, sizeof(req->header));
    req->param = param;
    req->method = method;
    req->callback = callback;
    return req;

fail:
    if (req != 0) {
        if (req->sslInfo != 0) {
            if (req->sslInfo->host != 0) {
                data_ov031_02290fc8(req->sslInfo->host);
            }
            data_ov031_02290fc8(req->sslInfo);
        }
        if (req->url != 0) {
            data_ov031_02290fc8(req->url);
        }
        if (req->body != 0) {
            data_ov031_02290fc8(req->body);
        }
        data_ov031_02290fc8(req);
    }
    return 0;
}
