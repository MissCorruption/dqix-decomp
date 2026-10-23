#include <globaldefs.h>

struct SessionMessage02210bec {
    unsigned int length;
    unsigned int magic;
    unsigned int command;
    int code;
    int unknown_10;
    int unknown_14;
    char name[0x3fc];
};

struct Session02210bec {
    char pad_0[0x28];
    int unknown_28;
    int unknown_2c;
    void (*callback)(int);
    char pad_34[0xc];
    int state;
    char pad_44[0x45];
    char name[0x12c];
    char flag_1b5;
};

extern Session02210bec* data_ov031_0224e588;
extern "C" void VectorizedMemset(void* dst, int value, unsigned int size);
extern "C" int func_020d2ff0(const char* s);
extern "C" int func_020d2f28(char* dst, const char* src, int n);
extern "C" int func_ov031_0221042c(unsigned char* buf);
extern "C" int func_ov031_022104e4(unsigned char* buf);
extern "C" void func_ov031_02210358(int a, int b);
extern "C" void func_ov031_022103f8(void* value);
extern "C" void func_ov031_022103dc(void* value);

// USA: func_ov031_02210bec
extern "C" ARM void func_ov031_02210bec(void) {
    int len;
    unsigned int length;
    unsigned char buffer[0x414];
    SessionMessage02210bec* msg = (SessionMessage02210bec*)buffer;
    unsigned int received;

    if (data_ov031_0224e588->state != 3) {
        func_ov031_022103f8((void*)5);
        return;
    }
    data_ov031_0224e588->flag_1b5 = 0;
    len = func_020d2ff0(data_ov031_0224e588->name);
    length = len + 0x19;
    VectorizedMemset(buffer, 0, sizeof(buffer));
    msg->length = length;
    msg->magic = 0x44535359;
    msg->command = 0xd3;
    msg->code = 0;
    msg->unknown_10 = data_ov031_0224e588->unknown_28;
    msg->unknown_14 = data_ov031_0224e588->unknown_2c;
    func_020d2f28(msg->name, data_ov031_0224e588->name, len + 1);
    if (func_ov031_0221042c(buffer) != length) {
        func_ov031_022103f8((void*)5);
        return;
    }
    received = func_ov031_022104e4(buffer);
    if (received < 0xc || received != msg->length) {
        func_ov031_022103f8((void*)5);
        return;
    }
    switch (msg->command) {
    case 0xca:
        switch (msg->code) {
        case 0x15:
            func_ov031_02210358(2, -2);
            break;
        case 0x18:
            func_ov031_02210358(6, -0x14);
            break;
        case 0x1b:
            func_ov031_02210358(2, -2);
            break;
        case 0x1d:
            data_ov031_0224e588->state = 0;
            VectorizedMemset(&data_ov031_0224e588->pad_44, 0, 0x174);
            func_ov031_022103dc((void*)5);
            return;
        }
        func_ov031_022103f8((void*)5);
        return;
    case 0xd4:
        if (data_ov031_0224e588->unknown_2c == 0) {
            int code = msg->code;
            data_ov031_0224e588->unknown_2c = code;
            if (data_ov031_0224e588->callback != NULL) {
                data_ov031_0224e588->callback(code);
            }
        }
        func_ov031_022103dc((void*)7);
        return;
    }
    func_ov031_02210358(2, -0x28);
    func_ov031_022103f8((void*)5);
}
