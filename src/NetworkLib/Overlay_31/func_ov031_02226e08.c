#include <globaldefs.h>

void* func_ov031_0223cf4c(unsigned int len, int align);
void func_020ca390(int val, void* dst, unsigned int size);
void VectorizedInvertedMemcpy(const void* src, void* dst, unsigned int length);
void CopyFrom027ffcf4_020c99ac(void* dst);
int func_ov031_0221e7d0(int (*allocate)(int), int (*release)(void*));
void func_020c9be0(void);
int TailCallWith32_02226fc8(int size);
int func_ov031_02226fd8(void* p);

typedef union {
    struct {
        unsigned char cmd;
        unsigned short len;
        unsigned char body[0x100];
    };
    unsigned short raw[0x82];
} Packet02226e08;

typedef struct {
    unsigned short tag;
    Packet02226e08 packet;
    short f106;
    short f108;
    short f10a;
    short f10c;
    short f10e;
    unsigned char f110[6];
} Buffer02226e08;

typedef struct {
    unsigned char inUse;
    Buffer02226e08* buf;
} State02226e08;
extern State02226e08 data_ov031_02250c04;
extern const unsigned char data_ov031_02248d80[0xc];

// USA: func_ov031_02226e08
ARM void func_ov031_02226e08(void) {
    Packet02226e08 packet;

    data_ov031_02250c04.buf = (Buffer02226e08*)func_ov031_0223cf4c(0x26c, 4);
    data_ov031_02250c04.inUse = 0;
    func_020ca390(0, &packet, sizeof(packet));
    packet.cmd = 0x50;
    packet.len = 0xc;
    VectorizedInvertedMemcpy(data_ov031_02248d80, packet.body, 0xc);

    data_ov031_02250c04.buf->tag = 3;
    data_ov031_02250c04.buf->packet = packet;
    data_ov031_02250c04.buf->f106 = 1;
    data_ov031_02250c04.buf->f108 = -1;
    data_ov031_02250c04.buf->f10a = 1;
    data_ov031_02250c04.buf->f10c = -1;
    data_ov031_02250c04.buf->f10e = -1;
    CopyFrom027ffcf4_020c99ac(data_ov031_02250c04.buf->f110);

    if (func_ov031_0221e7d0(TailCallWith32_02226fc8, func_ov031_02226fd8) != 0) {
        func_020c9be0();
    }
}
