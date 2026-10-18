#include <globaldefs.h>
#include "System/ProcessorContext.h"
#include "System/Mutex.h"

struct Session02216ca0 {
    char padding[0x1020];
    int state;
    char padding1024[0xb14];
    ProcessorContext context;
};
struct State02216ca0 {
    char padding[0x1004];
    int result;
    int state;
    char padding100c[0x308];
    Session02216ca0* session;
    ProcessorContext context;
    Mutex mutex;
    int interrupted;
};
struct Global02216ca0 { int field0; int field4; State02216ca0* state; };
extern Global02216ca0 data_ov031_0224e5e8;
void SetFieldWithRefGuard_02217598(int);
extern "C" int func_ov031_02216f54();
extern "C" void func_ov031_022183b4(Session02216ca0*);
extern "C" int func_ov031_02216b90(int);

// USA: func_ov031_02216ca0
extern "C" ARM void func_ov031_02216ca0() {
    int retries = 0;
    while (true) {
        if (data_ov031_0224e5e8.state->session->context.uniqueID != 0)
            AwaitContextCompletion(&data_ov031_0224e5e8.state->session->context);
        int mode;
        if (data_ov031_0224e5e8.state->session->state != 8) {
            data_ov031_0224e5e8.state->state = 0x4e84;
            int sessionState = data_ov031_0224e5e8.state->session->state;
            if (sessionState == 7) { SetFieldWithRefGuard_02217598(20); return; }
            if (retries > 2) {
                if (sessionState == 2) { SetFieldWithRefGuard_02217598(9); return; }
                if (sessionState == 3) { SetFieldWithRefGuard_02217598(11); return; }
                SetFieldWithRefGuard_02217598(13); return;
            }
            mode = 1;
            ++retries;
        } else {
            int result = func_ov031_02216f54();
            switch (result) {
            case 21:
                SetFieldWithRefGuard_02217598(21); return;
            case 16:
                if (retries > 2) { SetFieldWithRefGuard_02217598(16); return; }
                mode = 0;
                ++retries;
                break;
            case 17:
                SetFieldWithRefGuard_02217598(result); return;
            default:
                if (retries >= 2) { SetFieldWithRefGuard_02217598(result); return; }
                mode = 1;
                ++retries;
                break;
            }
        }
        unsigned long long start = GetCurrentTimestamp();
        if ((((GetCurrentTimestamp() - start) << 6) / 33514ULL) < 5000ULL) {
          do {
            LockMutex(&data_ov031_0224e5e8.state->mutex);
            if (data_ov031_0224e5e8.state->interrupted == 1) {
                data_ov031_0224e5e8.state->state = 0x4e84;
                UnlockMutex(&data_ov031_0224e5e8.state->mutex);
                SetFieldWithRefGuard_02217598(20);
                return;
            }
            UnlockMutex(&data_ov031_0224e5e8.state->mutex);
            SleepCurrentContext(5000);
          } while ((((GetCurrentTimestamp() - start) << 6) / 33514ULL) < 5000ULL);
        }
        func_ov031_022183b4(data_ov031_0224e5e8.state->session);
        LockMutex(&data_ov031_0224e5e8.state->mutex);
        data_ov031_0224e5e8.state->result = func_ov031_02216b90(mode);
        if (data_ov031_0224e5e8.state->result != 0) {
            data_ov031_0224e5e8.state->state = 0x4e84;
            UnlockMutex(&data_ov031_0224e5e8.state->mutex);
            return;
        }
        UnlockMutex(&data_ov031_0224e5e8.state->mutex);
    }
}

