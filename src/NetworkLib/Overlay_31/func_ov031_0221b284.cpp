#include <globaldefs.h>
#include <NitroSDK/IPC.h>
#include <NitroSDK/Cache.h>
#include <NitroSDK/Timing.h>

struct Struct_ov031_0224e6a0_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    unsigned long unknown_8_;
};
extern Struct_ov031_0224e6a0_3 data_ov031_0224e6a0;
extern unsigned char data_ov031_0224e6c0[32] __attribute__((aligned(32)));
extern "C" void WaitByLoop(int);

typedef unsigned long Type_020b11c8;
typedef unsigned char Type_020b1300;
typedef int Type_020b0a1c_2;
typedef uint64_t Type_ov031_0221b284;
#define TRUE 1
#define FALSE 0
#define PXI_FIFO_TAG_NVRAM 4
#define NVRAM_CMD_READ          1
#define NVRAM_CMD_WRITE         2
#define NVRAM_CMD_PROGRAM       3
#define NVRAM_CMD_CHECK_WREN    4
#define NVRAM_CMD_WAIT_WRITE    5
#define NVRAM_CMD_ABORT         6
#define NVRAM_CMD_WRITE_DISABLE 7

#define NVRAM_STATUS_BUSY 0x01
#define NVRAM_STATUS_WEL  0x02
#define NVRAM_STATUS_ERR  0x20

static inline Type_020b0a1c_2 inline_ov031_0221b284_6(Type_020b11c8 arg0, Type_020b11c8 arg1, Type_020b11c8 arg2) {
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x02002300 | ((arg0 >> 16) & 0xFF), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x10000 | (arg0 & 0xFFFF), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x20000 | (arg1 >> 16), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x30000 | (arg1 & 0xFFFF), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x40000 | (arg2 >> 16), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x01050000 | (arg2 & 0xFFFF), FALSE) < 0) {
        return FALSE;
    }
    return TRUE;
}

static inline Type_020b0a1c_2 inline_ov031_0221b284(void) {
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x03002000, FALSE) < 0) {
        return FALSE;
    }
    return TRUE;
}

static inline Type_020b0a1c_2 inline_ov031_0221b284_2(Type_020b11c8 arg0, Type_020b11c8 arg1, Type_020b11c8 arg2) {
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x02002500 | ((arg0 >> 16) & 0xFF), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x10000 | (arg0 & 0xFFFF), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x20000 | arg1, FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x30000 | (arg2 >> 16), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x01040000 | (arg2 & 0xFFFF), FALSE) < 0) {
        return FALSE;
    }
    return TRUE;
}

static inline Type_020b0a1c_2 inline_ov031_0221b284_3(void *arg0) {
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x02002200 | ((Type_020b11c8)arg0 >> 24), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x10000 | (((Type_020b11c8)arg0 >> 8) & 0xFFFF), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x01020000 | (((Type_020b11c8)arg0 << 8) & 0xFF00), FALSE) < 0) {
        return FALSE;
    }
    return TRUE;
}

static inline Type_020b0a1c_2 inline_ov031_0221b284_4(void) {
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x03002D00, FALSE) < 0) {
        return FALSE;
    }
    return TRUE;
}

static inline Type_020b0a1c_2 inline_ov031_0221b284_5(void) {
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x03002100, FALSE) < 0) {
        return FALSE;
    }
    return TRUE;
}

// USA: func_ov031_0221b284
extern "C" ARM int func_ov031_0221b284(int arg0, unsigned long arg1, unsigned long arg2, unsigned char *arg3) {
    Type_020b0a1c_2 var0 = FALSE;
    Type_020b1300 *var1 = data_ov031_0224e6c0;
    Type_ov031_0221b284 var2;

    while (TRUE) {
        if (!var0) {
            data_ov031_0224e6a0.unknown_4_ = 0;
            switch (arg0) {
            case NVRAM_CMD_READ:
                var0 = inline_ov031_0221b284_6(arg1, arg2, (Type_020b11c8)arg3);
                break;
            case NVRAM_CMD_WRITE:
                var0 = inline_ov031_0221b284();
                break;
            case NVRAM_CMD_PROGRAM:
                var0 = inline_ov031_0221b284_2(arg1, arg2, (Type_020b11c8)arg3);
                var2 = GetCurrentTimestamp();
                break;
            case NVRAM_CMD_CHECK_WREN:
            case NVRAM_CMD_WAIT_WRITE:
                var0 = inline_ov031_0221b284_3(var1);
                break;
            case NVRAM_CMD_ABORT:
                var0 = inline_ov031_0221b284_4();
                break;
            case NVRAM_CMD_WRITE_DISABLE:
                var0 = inline_ov031_0221b284_5();
                break;
            }
        } else if (data_ov031_0224e6a0.unknown_4_ == 1) {
            var0 = FALSE;
            if (data_ov031_0224e6a0.unknown_0_ != 0) {
                break;
            }
            switch (arg0) {
            case NVRAM_CMD_READ:
                return TRUE;
            case NVRAM_CMD_WRITE:
                arg0 = NVRAM_CMD_CHECK_WREN;
                break;
            case NVRAM_CMD_PROGRAM:
                arg0 = NVRAM_CMD_WAIT_WRITE;
                break;
            case NVRAM_CMD_CHECK_WREN:
            case NVRAM_CMD_WAIT_WRITE:
                InvalidateDataCacheRange(var1, 1);
                if (arg0 == NVRAM_CMD_CHECK_WREN) {
                    if (var1[0] & NVRAM_STATUS_WEL) {
                        arg0 = NVRAM_CMD_PROGRAM;
                    } else {
                        return FALSE;
                    }
                } else {
                    if (!(var1[0] & NVRAM_STATUS_BUSY)) {
                        return TRUE;
                    }
                    if ((var1[0] & NVRAM_STATUS_ERR) || (GetCurrentTimestamp() - var2) * 64 / 0x82EA > 4000) {
                        arg0 = NVRAM_CMD_ABORT;
                    } else {
                        WaitByLoop(0x4000);
                    }
                }
                break;
            case NVRAM_CMD_ABORT:
                return FALSE;
            case NVRAM_CMD_WRITE_DISABLE:
                return TRUE;
            }
        }
    }
    return FALSE;
}
