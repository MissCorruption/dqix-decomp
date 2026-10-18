#include <globaldefs.h>

struct ConnectionWords02237448 { unsigned int words[17]; };
struct ConnectionTemplate02237448 {
    void* cache;
    unsigned int field_0x4;
    unsigned short fortune;
    unsigned char field_0xa[10];
    unsigned char signature[8];
    unsigned char field_0x1c;
    unsigned char enabled;
    unsigned short field_0x1e;
    unsigned char payload[0x24];
};
struct BattleState02237448 {
    unsigned char field_0x0[0xf00];
    unsigned char cache[0x400];
    unsigned char field_0x1300[0x70];
    int value;
    union { ConnectionTemplate02237448 connection; ConnectionWords02237448 connectionWords; };
    unsigned short status;
    unsigned char field_0x13ba[0x7ce];
    unsigned long long timestamp;
    void* callback;
};
struct ConnectionResponse02237448 {
    unsigned char header[4];
    unsigned char payload[22];
    unsigned short count;
    unsigned char field_0x1c[0x38];
};
BattleState02237448* data_ov031_02290d0c __attribute__((aligned(4)));
extern const ConnectionWords02237448 data_ov031_02249294;
extern const unsigned char data_ov031_02249288[];
extern "C" void* func_ov031_0223cf4c(unsigned int, int);
extern "C" unsigned int func_ov031_0223cf70(void**);
extern "C" void func_ov031_022376fc(void);
extern "C" void func_ov031_022379f0(void);
extern "C" int func_ov031_022375cc(void);
extern "C" void func_020c99c8(void*);
extern "C" void VectorizedInvertedMemcpy(const void*, void*, unsigned int);
unsigned long long GetCurrentTimestamp(void);
int CallFunc020d4fa4Zero_020d4f7c(int, int, int);
int CopyToBattleContextBuffer_020d4848(void*);
unsigned short GetOwnerDataFortuneValue020d4be8(void);
void* CallWithZeroExtra_0223e218(void*, void*, void*, int);

// USA: func_ov031_02237448
extern "C" ARM int func_ov031_02237448(int value) {
    ConnectionResponse02237448 response;
    data_ov031_02290d0c = (BattleState02237448*)func_ov031_0223cf4c(0x1ba0, 0x20);
    data_ov031_02290d0c->value = value;
    unsigned long long timestamp = GetCurrentTimestamp();
    data_ov031_02290d0c->timestamp = timestamp;
    if (CallFunc020d4fa4Zero_020d4f7c((int)data_ov031_02290d0c, (int)func_ov031_022376fc, 3) == 2) {
        BattleState02237448* state;
        do {
            CopyToBattleContextBuffer_020d4848(&data_ov031_02290d0c->status);
        } while ((state = data_ov031_02290d0c)->status != 2);
        state->connectionWords = data_ov031_02249294;
        state->connection.cache = state->cache;
        data_ov031_02290d0c->connection.fortune = GetOwnerDataFortuneValue020d4be8();
        func_020c99c8(&response);
        VectorizedInvertedMemcpy(data_ov031_02249288, data_ov031_02290d0c->connection.signature, 8);
        data_ov031_02290d0c->connection.enabled = 1;
        VectorizedInvertedMemcpy(response.payload, data_ov031_02290d0c->connection.payload, response.count << 1);
        if (func_ov031_022375cc()) {
            data_ov031_02290d0c->callback = CallWithZeroExtra_0223e218(0, (void*)func_ov031_022379f0, 0, 0x78);
            return 1;
        }
    }
    func_ov031_0223cf70((void**)&data_ov031_02290d0c);
    return 0;
}
