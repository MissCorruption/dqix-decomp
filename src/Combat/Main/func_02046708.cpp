#include <globaldefs.h>

struct FlagWord02046708 {
    unsigned int flags;
};

// USA: func_02046708
extern "C" ARM int func_02046708(struct FlagWord02046708* word, unsigned int mask) {
    return (word->flags & mask) != 0;
}
