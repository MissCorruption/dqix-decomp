#include <globaldefs.h>

struct CipherKeys_022157f8 {
    signed char* post;
    int unused4;
    signed char* pre;
};

struct Order_022157f8 {
    unsigned char slot[0x18];
};

extern "C" void func_ov031_02215b64(void* obj, unsigned char* buf, int a, int b);

extern Order_022157f8 data_ov031_02246083;
extern CipherKeys_022157f8 data_ov031_02249ad4;

// USA: func_ov031_022157f8
extern "C" ARM void func_ov031_022157f8(void* obj, unsigned char* buf) {
    Order_022157f8 order = data_ov031_02246083;

    func_ov031_02215b64(obj, buf, 0x20, 0x18);

    for (int i = 0; i < 0x18; i++) {
        buf[i] ^= data_ov031_02249ad4.pre[i];
    }

    {
        unsigned char home = 0;
        unsigned char slot = 0;
        unsigned char v = 0;
        int i = 0;
        do {
            home = (unsigned char)i;
            slot = home;
            v = buf[i];
            if (order.slot[home] != 0xff) {
                do {
                    unsigned char next = order.slot[slot];
                    unsigned char t = buf[next];
                    buf[order.slot[home]] = v;
                    order.slot[slot] = 0xff;
                    home = next;
                    slot = next;
                    v = t;
                } while (order.slot[slot] != 0xff);
            }
            i++;
        } while (i < 0x18);
    }

    for (int i = 0; i < 0x18; i++) {
        buf[i] ^= data_ov031_02249ad4.post[i];
    }
}
