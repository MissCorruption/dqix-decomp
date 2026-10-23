#include <globaldefs.h>

struct Msg_0220fd78 {
    int size;
    unsigned int magic;
    int kind;
    int identifier;
    int value;
};

struct MessageConfig0220fb28 {
    int field_0;
    int identifier;
    int value;
};

struct MessageContext0220fb28 {
    unsigned char field_0[0x24];
    MessageConfig0220fb28* config;
    unsigned char field_28[8];
    int value;
};

extern MessageContext0220fb28* data_ov031_0224e580;
extern "C" void func_ov031_0220fd78(int, Msg_0220fd78*);
extern "C" int func_ov031_0220ff34(int*);
extern "C" int func_ov031_0220fe44(int);
extern "C" int func_ov031_0220ff18(void*);
extern "C" void func_ov031_0220fea0();
extern "C" void func_ov031_0220fed8();

// USA: func_ov031_0220fb28
extern "C" ARM void func_ov031_0220fb28() {
    unsigned char message[0x414];
    Msg_0220fd78* buffer = (Msg_0220fd78*)message;
    func_ov031_0220fd78(data_ov031_0224e580->config->value, buffer);
    buffer->size = 0x14;
    buffer->magic = 0x44535359;
    buffer->kind = 0xd0;
    buffer->identifier = data_ov031_0224e580->config->identifier;
    if ((buffer->value = data_ov031_0224e580->value) == 0) return;
    if (func_ov031_0220fe44((int)func_ov031_0220ff34)) {
        if (func_ov031_0220ff18(buffer)) func_ov031_0220fea0();
    }
    func_ov031_0220fed8();
}
