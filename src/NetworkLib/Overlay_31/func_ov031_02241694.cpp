#include <globaldefs.h>

struct _NHTTPReq;
extern "C" int func_ov031_02241480(_NHTTPReq*, int, char*, int, int);

// USA: func_ov031_02241694
extern "C" ARM int func_ov031_02241694(_NHTTPReq* req, int s) {
    char buf[2];
    int p;
    int recvbyte;
    int rc = 0;

    buf[0] = 0;
    buf[1] = 0;
    p = 0;
    while (buf[p & 1] != 13 || buf[(p - 1) & 1] != 10) {
        recvbyte = func_ov031_02241480(req, s, buf + (p & 1), 1, 0);
        if (recvbyte <= 0) return recvbyte;
        rc += recvbyte;
        p++;
    }
    return rc;
}
