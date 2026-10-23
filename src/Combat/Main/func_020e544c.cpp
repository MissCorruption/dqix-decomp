#include <globaldefs.h>

struct Header020e544c {
    unsigned int field0;
};

// USA: func_020e544c
extern "C" ARM unsigned int func_020e544c(struct Header020e544c* header) {
    return (header->field0 & 0xFFF) << 4;
}
