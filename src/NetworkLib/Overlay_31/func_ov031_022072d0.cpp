#include <globaldefs.h>

struct SocketAddress022072d0 {
    unsigned char length;
    unsigned char family;
    unsigned short port;
    unsigned int address;
};

extern "C" int func_ov031_022058f0(int socket, void* buffer, int length, unsigned short* port, unsigned int* address, int flags);

// USA: func_ov031_022072d0
extern "C" ARM int func_ov031_022072d0(int socket, void* buffer, int length, int flags, void* from) {
    unsigned int address;
    unsigned short port;
    int result = func_ov031_022058f0(socket, buffer, length, &port, &address, flags);
    if (result < 0) return result;
    if (from == NULL) return result;
    SocketAddress022072d0* output = static_cast<SocketAddress022072d0*>(from);
    unsigned int hostPort = port;
    output->port = ((int)hostPort >> 8 & 0xff) | ((hostPort << 8) & 0xff00);
    unsigned int hostAddress = address;
    output->address = ((hostAddress >> 24) & 0xff) | ((hostAddress >> 8) & 0xff00) | ((hostAddress << 8) & 0xff0000) | ((hostAddress << 24) & 0xff000000);
    return result;
}
