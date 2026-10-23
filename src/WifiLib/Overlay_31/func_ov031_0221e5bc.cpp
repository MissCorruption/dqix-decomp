#include <globaldefs.h>

struct Packet02207204;
extern "C" int func_ov031_02207204(void* obj, struct Packet02207204* pkt);

// USA: func_ov031_0221e5bc
extern "C" THUMB int func_ov031_0221e5bc(void* obj, struct Packet02207204* pkt, unsigned char val) {
    *(unsigned char*)pkt = val;
    return func_ov031_02207204(obj, pkt);
}
