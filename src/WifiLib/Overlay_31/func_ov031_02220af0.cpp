#include <globaldefs.h>

struct Packet02207204 {
    unsigned char length;
    unsigned char family;
    unsigned short port;
    unsigned int address;
};
struct Service02220af0 {
    char isHost;
    char padding01[0xf];
    int cancelled;
    int requestLength;
    char padding18[4];
    int step;
    char padding20[0x14];
    int replyLength;
    int phase;
};
struct Timer02220af0 {
    char padding[0xc];
    unsigned int deadline;
};
struct Session02220af0 {
    unsigned int words[0x95];
};
struct SessionKey02220af0 {
    unsigned char bytes[8];
};
struct Peer02220af0 {
    char padding[0x14];
    char hosting;
};

extern Service02220af0 data_ov031_0224f670;
namespace DuplicatePool {
    extern "C" Service02220af0 data_ov031_0224f670;
}
extern Timer02220af0 data_ov031_0224b114;
extern unsigned char data_ov031_0224fb30[0x10];
extern unsigned char data_ov031_022503a4[0x800];
extern unsigned char data_ov031_0224f6c0[0x30];
extern unsigned char data_ov031_0224fba4[];
extern SessionKey02220af0 data_ov031_0224fb40;
extern unsigned char data_ov031_0224fb48[0x10];
extern Session02220af0 data_ov031_0224f8c4;
extern Peer02220af0 data_ov031_0224f9b0;

void SleepCurrentContext(unsigned int milliseconds);
ARM int SelectAndCall022071d8(int unused, int mode);
int SwapField2AndForward02207204(void* obj, struct Packet02207204* pkt);
extern "C" int func_ov031_0221fee4();
extern "C" int func_ov031_0221fb90();
extern "C" void func_ov031_02222af0();
extern "C" unsigned int func_ov031_02222870();
extern "C" int func_ov031_02207434(int socket);
extern "C" int func_ov031_022205e4(void* output, Packet02207204* address);
extern "C" int func_ov031_022072d0(int socket, void* buffer, int size, int flags, Packet02207204* address);
extern "C" int func_ov031_02220418(void* buffer, void* context);
extern "C" int func_ov031_0222053c(void* request);
extern "C" void func_ov031_022201cc(int socket, Packet02207204* address, void* buffer, int length);
extern "C" int func_ov031_022204ec(void* buffer, int kind, void* packet, void* key);
extern "C" SessionKey02220af0* func_ov031_02220298(void* packet, int* type, int* size);
extern "C" void func_ov031_02222848(unsigned char* digest, void* data, unsigned int length);
extern "C" int func_ov031_022203f0(void* packet, int type, const void* data, int size);
extern "C" int func_ov031_022202cc(void* buffer, int kind, void* packet, int length, const void* key);
extern "C" int func_ov031_022206e0(void* packet);
extern "C" int func_ov031_0221f994();
extern "C" int func_ov031_02220968();

// USA: func_ov031_02220af0
extern "C" THUMB int func_ov031_02220af0() {
    Packet02207204 local;
    Packet02207204 from;
    int socket = 0;
    int result = -5;
    unsigned int timestamp = 0;
    int attempts = 0;
    int done = 0;
    data_ov031_0224f670.step = 1;
    while (!done && !data_ov031_0224f670.cancelled) {
        SleepCurrentContext(500);
        switch (data_ov031_0224f670.step) {
        case 1:
            result = func_ov031_0221fee4();
            if (result != 1) {
                done = 1;
                break;
            }
            data_ov031_0224f670.phase = 3;
            func_ov031_02222af0();
            data_ov031_0224f670.step = 2;
            break;
        case 2:
            result = func_ov031_0221fb90();
            if (result != 1) {
                done = 1;
                break;
            }
            data_ov031_0224f670.step = 3;
            break;
        case 3: {
            typedef int (*Fn3)(int, int, int);
            socket = ((Fn3)SelectAndCall022071d8)(2, 2, 0);
            if (socket < 0) {
                result = -2;
                done = 1;
                break;
            }
            __builtin__clear(&local, sizeof(local));
            local.length = 8;
            local.family = 2;
            local.port = 0x1e6;
            local.address = 0;
            result = SwapField2AndForward02207204((void*)socket, &local);
            if (result < 0) {
                result = -2;
                done = 1;
                break;
            }
            data_ov031_0224f670.step = 4;
            break;
        }
        case 4:
            if (func_ov031_02222870() >= data_ov031_0224b114.deadline) {
                func_ov031_02207434(socket);
                result = -3;
                done = 1;
                break;
            }
            from.length = 8;
            func_ov031_022205e4(data_ov031_0224fb30, &from);
            if (func_ov031_022072d0(socket, data_ov031_022503a4, 0x800, 4, &from) > 0 &&
                func_ov031_02220418(data_ov031_022503a4, data_ov031_0224f6c0) != 0) {
                data_ov031_0224b114.deadline = func_ov031_02222870() + 30000;
                data_ov031_0224f670.step = 5;
                data_ov031_0224f670.phase = 4;
                func_ov031_02222af0();
            }
            break;
        case 5: {
            int length = func_ov031_0222053c(data_ov031_022503a4);
            data_ov031_0224f670.requestLength = length;
            func_ov031_022201cc(socket, &from, data_ov031_022503a4, length);
            timestamp = func_ov031_02222870();
            data_ov031_0224f670.step = 6;
            break;
        }
        case 6:
            if (func_ov031_02222870() >= data_ov031_0224b114.deadline) {
                func_ov031_02207434(socket);
                result = -4;
                done = 1;
                break;
            }
            if (func_ov031_022072d0(socket, data_ov031_022503a4, 0x800, 4, &from) > 0 &&
                func_ov031_022204ec(data_ov031_022503a4, 3, data_ov031_0224fba4, data_ov031_0224fb30) != 0) {
                int type;
                int size;
                const SessionKey02220af0* key = func_ov031_02220298(data_ov031_0224fba4, &type, &size);
                if (type == 0x101) {
                    unsigned int now = func_ov031_02222870();
                    data_ov031_0224fb40 = *key;
                    func_ov031_02222848(data_ov031_0224fb48, &now, 4);
                    attempts = 0;
                    data_ov031_0224f670.step = 7;
                    data_ov031_0224f670.phase = 5;
                    data_ov031_0224b114.deadline = -1;
                    func_ov031_02222af0();
                } else if (type == 0x102) {
                    break;
                }
            } else if (func_ov031_02222870() >= timestamp + 1000) {
                data_ov031_0224f670.step = 5;
            }
            break;
        case 7: {
            data_ov031_0224f670.replyLength = func_ov031_022203f0(data_ov031_0224fba4, 0x102, data_ov031_0224fb48, 8);
            int length = func_ov031_022202cc(data_ov031_022503a4, 4, data_ov031_0224fba4, data_ov031_0224f670.replyLength, data_ov031_0224fb30);
            data_ov031_0224f670.requestLength = length;
            func_ov031_022201cc(socket, &from, data_ov031_022503a4, length);
            timestamp = func_ov031_02222870();
            __builtin__clear(&data_ov031_0224f8c4, sizeof(data_ov031_0224f8c4));
            data_ov031_0224f670.step = 8;
            break;
        }
        case 8:
            if (func_ov031_022072d0(socket, data_ov031_022503a4, 0x800, 4, &from) > 0 &&
                (data_ov031_0224f670.replyLength = func_ov031_022204ec(data_ov031_022503a4, 5, data_ov031_0224fba4, &data_ov031_0224fb40)) != 0 &&
                func_ov031_022206e0(data_ov031_0224fba4) != 0) {
                if (data_ov031_0224f9b0.hosting) data_ov031_0224f670.isHost = 1;
                else data_ov031_0224f670.isHost = 0;
                attempts = 0;
                data_ov031_0224f670.step = 9;
            } else if (func_ov031_02222870() >= timestamp + 1000) {
                if (++attempts >= 10) {
                    func_ov031_02207434(socket);
                    result = -2;
                    done = 1;
                } else {
                    data_ov031_0224f670.step = 7;
                }
            }
            break;
        case 9:
            data_ov031_0224f670.replyLength = func_ov031_022203f0(data_ov031_0224fba4, 0x301, &DuplicatePool::data_ov031_0224f670.isHost, 1);
            data_ov031_0224f670.requestLength = func_ov031_022202cc(data_ov031_022503a4, 6, data_ov031_0224fba4, data_ov031_0224f670.replyLength, &data_ov031_0224fb40);
            if (func_ov031_0221f994() != 7) {
                timestamp = func_ov031_02222870() + 1000;
                attempts = 10;
                data_ov031_0224f670.step = 10;
            } else {
                func_ov031_022201cc(socket, &from, data_ov031_022503a4, data_ov031_0224f670.requestLength);
                timestamp = func_ov031_02222870();
                data_ov031_0224f670.step = 10;
            }
            break;
        case 10:
            if (func_ov031_02222870() >= timestamp + 1000) {
                if (++attempts >= 10) {
                    done = 1;
                    result = func_ov031_02220968();
                } else {
                    data_ov031_0224f670.step = 9;
                }
            }
            break;
        }
    }
    if (socket != 0) func_ov031_02207434(socket);
    if (data_ov031_0224f670.cancelled) result = -8;
    return result;
}
