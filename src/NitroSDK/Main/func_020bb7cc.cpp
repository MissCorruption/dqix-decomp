#include <globaldefs.h>

/* NitroSystem gfd: NNS_GfdAllocFrmPlttVram, the frame palette VRAM manager's allocator. */

struct NNSGfdFrmPlttVramManager {
    unsigned int loAddr;
    unsigned int hiAddr;
    unsigned int szByte;
};
extern NNSGfdFrmPlttVramManager data_0210cf88;

static inline unsigned int NNSi_GfdGetPlttKeyRoundupSize(unsigned int size) {
    if (size == 0) {
        return 8;
    } else {
        return (size + 7) & ~7;
    }
}

static inline unsigned int NNS_GfdMakePlttKey(unsigned int addr, unsigned int size) {
    return ((size >> 3) << 16) | (0xffff & (addr >> 3));
}

static inline unsigned int GetUpperSideAlignmentSize_(unsigned int addr, int b4Pltt) {
    if (b4Pltt) {
        return 7 & (8 - (addr & 7));
    } else {
        return 0xf & (0x10 - (addr & 0xf));
    }
}

static inline unsigned int GetLowerSideAlignmentSize_(unsigned int addr, int b4Pltt) {
    if (b4Pltt) {
        return addr & 7;
    } else {
        return addr & 0xf;
    }
}

static inline unsigned int GetCapacity_(void) {
    return data_0210cf88.hiAddr - data_0210cf88.loAddr;
}

static inline int AllocFromLo_(unsigned int szByte, int b4Pltt, unsigned int* pResAddr) {
    const unsigned int addr = data_0210cf88.loAddr;
    const unsigned int alignment = GetUpperSideAlignmentSize_(addr, b4Pltt);
    const unsigned int increase = szByte + alignment;

    if (GetCapacity_() >= increase) {
        const unsigned int tail = data_0210cf88.loAddr + increase;

        if (b4Pltt) {
            if (tail > 0x10000) {
                return 0;
            }
        }

        *pResAddr = data_0210cf88.loAddr + alignment;
        data_0210cf88.loAddr += increase;
        return 1;
    } else {
        return 0;
    }
}

static inline int AllocFromHi_(unsigned int szByte, int b4Pltt, unsigned int* pResAddr) {
    if (data_0210cf88.hiAddr >= szByte) {
        const unsigned int addr = data_0210cf88.hiAddr - szByte;
        const unsigned int alignment = GetLowerSideAlignmentSize_(addr, b4Pltt);
        const unsigned int increase = szByte + alignment;

        if (GetCapacity_() >= increase) {
            const unsigned int tail = data_0210cf88.hiAddr;

            if (b4Pltt) {
                if (tail > 0x10000) {
                    return 0;
                }
            }

            data_0210cf88.hiAddr -= increase;
            *pResAddr = data_0210cf88.hiAddr;
            return 1;
        }
    }
    return 0;
}

// USA: func_020bb7cc
extern "C" ARM unsigned int func_020bb7cc(unsigned int szByte, int b4Pltt, unsigned int bAllocFromLo) {
    unsigned int addr = 0;
    int result = 0;

    szByte = NNSi_GfdGetPlttKeyRoundupSize(szByte);
    if (szByte >= 0x7fff8) {
        return 0;
    }

    if (bAllocFromLo == 1) {
        result = AllocFromLo_(szByte, b4Pltt, &addr);
    } else {
        result = AllocFromHi_(szByte, b4Pltt, &addr);
    }

    if (result) {
        return NNS_GfdMakePlttKey(addr, szByte);
    }
    return 0;
}
