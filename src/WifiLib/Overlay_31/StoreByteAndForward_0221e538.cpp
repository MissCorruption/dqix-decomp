#include <globaldefs.h>

extern "C" int func_ov031_022072d0(int socket, void* buffer, int size, int flags, void* address);

// USA: func_ov031_0221e538  (semantic: StoreByteAndForward_0221e538)
extern "C" THUMB int func_ov031_0221e538(int socket, void* buffer, int size, int flags, unsigned char* address, int* addressSize) {
    *address = (unsigned char)*addressSize;
    return func_ov031_022072d0(socket, buffer, size, flags, address);
}
