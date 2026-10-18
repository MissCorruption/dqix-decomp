#include <globaldefs.h>
#include <GameState/GameState.h>
#include <Memory/SafeAllocator.h>
#include <std_library_functions.h>

struct NetworkOptions02244ad0 {
    unsigned char reserved : 3;
    unsigned char customCapacity : 1;
    unsigned char customTimeout : 1;
    unsigned char reservedHigh : 3;
    unsigned char capacity;
    unsigned char timeout;
};
struct SettingsView02244ad0 {
    unsigned char unknown_0[0x7ff0];
    NetworkOptions02244ad0 network;
};
struct InitConfig02244ad0 {
    int reserved;
    void* (*allocate)(int, unsigned int);
    void (*release)(int, void*);
    int enabled;
    unsigned int address[5];
    unsigned char unknown_24[8];
    int field_2c;
    int field_30;
    unsigned char unknown_34[0x58 - 0x34];
};
struct Struct_02245528 {
    unsigned char unknown_0[0x34];
    unsigned char mode;
    unsigned char state;
    unsigned char unknown_36[0x391 - 0x36];
    unsigned char complete;
    unsigned char unknown_392[0x3a8 - 0x392];
    unsigned long long deadline;
    unsigned long long startTime;
    unsigned char unknown_3b8[0x3d4 - 0x3b8];
    InitConfig02244ad0 config;
};
struct SettingsBlock02244ad0 { unsigned int words[31]; };
struct Bytes6_02244ad0 { unsigned char value[6]; };
unsigned char data_ov031_02291e04;
extern SafeAllocator data_ov031_02291e3c;
extern const SettingsBlock02244ad0 data_ov031_022495d4;
extern Bytes6_02244ad0 data_ov031_02245fb0;
extern SettingsBlock02244ad0 data_ov031_02291ea8;
extern const Bytes6_02244ad0 data_ov031_0224957c;
extern int data_ov031_0224e1c8;
int GetField260_0220d540();
void SetFields_02245858(int, unsigned char);
void SetField12_0224586c(int);
extern "C" void func_ov031_0224587c(SettingsBlock02244ad0*);
unsigned long long GetCurrentTimestamp();
int CompareBytes6_0220f368(unsigned char*, unsigned char*);
extern "C" void func_ov031_0220eb88(int);
unsigned int GetField16_0224598c();
extern "C" void func_ov031_02245938();
extern "C" void VectorizedMemset(void*, int, unsigned int);
extern "C" void func_ov031_0220764c(InitConfig02244ad0*);
extern "C" void func_ov031_022077c0();
int GetSwapped_02207500();
void SetField34AndClear35_37_02245528(Struct_02245528*, int);
void* AllocFromAllocator1e3c_02243450(int, unsigned int);
void FreeFromAllocator1e3c_02243484(int, void*);

// USA: func_ov031_02244ad0
extern "C" ARM void func_ov031_02244ad0(Struct_02245528* self) {
    static unsigned char initialized = 0;
    GameState* game = GameState::GetInstance();
    SettingsView02244ad0* settings = (SettingsView02244ad0*)game;
    switch (self->state) {
    case 0:
        switch (GetField260_0220d540()) {
        case 0:
            if (!initialized) {
                int capacity = 22;
                if (settings->network.customCapacity) capacity = settings->network.capacity;
                SetFields_02245858((int)data_ov031_02291e3c.Allocate(capacity * 208 + 0x230c), capacity);
                SettingsBlock02244ad0 initial = data_ov031_022495d4;
                memcpy(&data_ov031_02291ea8, &initial, sizeof(initial));
                SetField12_0224586c(1);
                func_ov031_0224587c(&data_ov031_02291ea8);
                if (settings->network.customTimeout)
                    self->deadline = GetCurrentTimestamp() + ((33514000ULL * (unsigned int)settings->network.timeout) >> 6);
                else self->deadline = GetCurrentTimestamp() + 2618281ULL;
                Bytes6_02244ad0 broadcast = data_ov031_0224957c;
                CompareBytes6_0220f368(data_ov031_02245fb0.value, broadcast.value);
                self->startTime = GetCurrentTimestamp();
                initialized = 1;
            }
            break;
        case 6:
            func_ov031_0220eb88(1);
            if (GetField16_0224598c() <= 1) {
                func_ov031_0220eb88(0);
                return;
            }
            func_ov031_0220eb88(0);
            break;
        case 9:
            GetCurrentTimestamp();
            self->state = 3;
            break;
        }
        if (GetCurrentTimestamp() <= self->deadline) return;
        if (settings->network.customTimeout && !settings->network.timeout) return;
        func_ov031_02245938();
        self->state = 5;
        return;
    case 3:
        VectorizedMemset(&self->config, 0, sizeof(self->config));
        self->config.enabled = 1;
        self->config.allocate = AllocFromAllocator1e3c_02243450;
        self->config.release = FreeFromAllocator1e3c_02243484;
        data_ov031_0224e1c8 = 0;
        func_ov031_0220764c(&self->config);
        if (settings->network.customTimeout)
            self->deadline = GetCurrentTimestamp() + ((33514000ULL * (unsigned int)settings->network.timeout) >> 6);
        else self->deadline = GetCurrentTimestamp() + 2618281ULL;
        self->state = 4;
        GetCurrentTimestamp();
        return;
    case 4:
        if (GetCurrentTimestamp() > self->deadline) {
            if (settings->network.customTimeout && !settings->network.timeout) goto checkProgress;
            func_ov031_022077c0();
            self->state = 5;
            return;
        }
checkProgress:
        if (GetSwapped_02207500()) {
            GetCurrentTimestamp();
            SetField34AndClear35_37_02245528(self, 6);
        }
        return;
    case 5:
        func_ov031_02245938();
        self->state = 6;
        return;
    case 6:
        if (!GetField260_0220d540()) {
            SetField34AndClear35_37_02245528(self, 0);
            self->complete = 1;
        }
        return;
    default:
        return;
    }
}
