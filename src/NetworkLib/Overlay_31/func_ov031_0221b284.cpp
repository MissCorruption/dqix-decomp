#include <globaldefs.h>
#include <NitroSDK/IPC.h>
#include <NitroSDK/Cache.h>
#include <NitroSDK/Timing.h>

struct IPCStatus0221b284 {
    unsigned short status;
    unsigned short padding;
    int complete;
    unsigned long backupAddress;
};
extern IPCStatus0221b284 data_ov031_0224e6a0;
extern unsigned char data_ov031_0224e6c0[32] __attribute__((aligned(32)));
extern "C" void WaitByLoop(int);

typedef unsigned long u32;
typedef unsigned char u8;
typedef int BOOL;
typedef uint64_t OSTick;
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

static inline BOOL SendRead(u32 address, u32 size, u32 buffer) {
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x02002300 | ((address >> 16) & 0xFF), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x10000 | (address & 0xFFFF), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x20000 | (size >> 16), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x30000 | (size & 0xFFFF), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x40000 | (buffer >> 16), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x01050000 | (buffer & 0xFFFF), FALSE) < 0) {
        return FALSE;
    }
    return TRUE;
}

static inline BOOL SendWren(void) {
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x03002000, FALSE) < 0) {
        return FALSE;
    }
    return TRUE;
}

static inline BOOL SendWrite(u32 address, u32 size, u32 buffer) {
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x02002500 | ((address >> 16) & 0xFF), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x10000 | (address & 0xFFFF), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x20000 | size, FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x30000 | (buffer >> 16), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x01040000 | (buffer & 0xFFFF), FALSE) < 0) {
        return FALSE;
    }
    return TRUE;
}

static inline BOOL SendStatus(void *buf) {
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x02002200 | ((u32)buf >> 24), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x10000 | (((u32)buf >> 8) & 0xFFFF), FALSE) < 0) {
        return FALSE;
    }
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x01020000 | (((u32)buf << 8) & 0xFF00), FALSE) < 0) {
        return FALSE;
    }
    return TRUE;
}

static inline BOOL SendReset(void) {
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x03002D00, FALSE) < 0) {
        return FALSE;
    }
    return TRUE;
}

static inline BOOL SendWriteDisable(void) {
    if (SendCommandToArm7(PXI_FIFO_TAG_NVRAM, 0x03002100, FALSE) < 0) {
        return FALSE;
    }
    return TRUE;
}

// USA: func_ov031_0221b284
extern "C" ARM int func_ov031_0221b284(int command, unsigned long address, unsigned long size, unsigned char *buffer) {
    BOOL sent = FALSE;
    u8 *status = data_ov031_0224e6c0;
    OSTick start;

    while (TRUE) {
        if (!sent) {
            data_ov031_0224e6a0.complete = 0;
            switch (command) {
            case NVRAM_CMD_READ:
                sent = SendRead(address, size, (u32)buffer);
                break;
            case NVRAM_CMD_WRITE:
                sent = SendWren();
                break;
            case NVRAM_CMD_PROGRAM:
                sent = SendWrite(address, size, (u32)buffer);
                start = GetCurrentTimestamp();
                break;
            case NVRAM_CMD_CHECK_WREN:
            case NVRAM_CMD_WAIT_WRITE:
                sent = SendStatus(status);
                break;
            case NVRAM_CMD_ABORT:
                sent = SendReset();
                break;
            case NVRAM_CMD_WRITE_DISABLE:
                sent = SendWriteDisable();
                break;
            }
        } else if (data_ov031_0224e6a0.complete == 1) {
            sent = FALSE;
            if (data_ov031_0224e6a0.status != 0) {
                break;
            }
            switch (command) {
            case NVRAM_CMD_READ:
                return TRUE;
            case NVRAM_CMD_WRITE:
                command = NVRAM_CMD_CHECK_WREN;
                break;
            case NVRAM_CMD_PROGRAM:
                command = NVRAM_CMD_WAIT_WRITE;
                break;
            case NVRAM_CMD_CHECK_WREN:
            case NVRAM_CMD_WAIT_WRITE:
                InvalidateDataCacheRange(status, 1);
                if (command == NVRAM_CMD_CHECK_WREN) {
                    if (status[0] & NVRAM_STATUS_WEL) {
                        command = NVRAM_CMD_PROGRAM;
                    } else {
                        return FALSE;
                    }
                } else {
                    if (!(status[0] & NVRAM_STATUS_BUSY)) {
                        return TRUE;
                    }
                    if ((status[0] & NVRAM_STATUS_ERR) || (GetCurrentTimestamp() - start) * 64 / 0x82EA > 4000) {
                        command = NVRAM_CMD_ABORT;
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
