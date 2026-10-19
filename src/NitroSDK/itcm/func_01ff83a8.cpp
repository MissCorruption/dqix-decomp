// NitroSDK OS_reset.c: OSi_ReadCardRom32, the ITCM-resident CPU card-ROM reader used by
// OSi_ReloadRomData (func_01ff8300) while resetting the system.

#define reg_CARD_MASTERCNT (*(volatile unsigned char*)0x040001a1)
#define reg_CARD_CMD (*(volatile unsigned char*)0x040001a8)
#define reg_CARD_CNT (*(volatile unsigned int*)0x040001a4)
#define reg_CARD_DATA (*(volatile unsigned int*)0x04100010)

#define HW_ROM_HEADER_BUF 0x027ffe00

enum
{
    CARD_MASTER_SELECT_ROM = 0x00,
    CARD_MASTER_ENABLE = 0x80,
    CARD_CMD_READ_PAGE = 0xb7,
    CARD_CTRL_CMD_MASK = 0x07000000,
    CARD_CTRL_CMD_PAGE = 0x01000000,
    CARD_CTRL_READ = 0x00000000,
    CARD_CTRL_RESET_HI = 0x20000000,
    CARD_CTRL_START = 0x80000000,
    CARD_CTRL_READY = 0x00800000
};

// USA: func_01ff83a8
extern "C" void func_01ff83a8(unsigned int src, void* dst, int len)
{
    unsigned int* const hdr_GAME_BUF = (unsigned int*)(HW_ROM_HEADER_BUF + 0x60);

    const unsigned int ctrl_start = (unsigned int)((*hdr_GAME_BUF & ~CARD_CTRL_CMD_MASK)
        | (CARD_CTRL_CMD_PAGE | CARD_CTRL_READ | CARD_CTRL_START | CARD_CTRL_RESET_HI));

    int pos = -(int)(src & 511);

    while (reg_CARD_CNT & CARD_CTRL_START)
    {
    }
    reg_CARD_MASTERCNT = (unsigned int)(CARD_MASTER_SELECT_ROM | CARD_MASTER_ENABLE);

    for (src = (unsigned int)(src + pos); pos < len; src += 512)
    {
        (&reg_CARD_CMD)[0] = (unsigned char)(CARD_CMD_READ_PAGE);
        (&reg_CARD_CMD)[1] = (unsigned char)(src >> 24);
        (&reg_CARD_CMD)[2] = (unsigned char)(src >> 16);
        (&reg_CARD_CMD)[3] = (unsigned char)(src >> 8);
        (&reg_CARD_CMD)[4] = (unsigned char)(src >> 0);
        (&reg_CARD_CMD)[5] = 0;
        (&reg_CARD_CMD)[6] = 0;
        (&reg_CARD_CMD)[7] = 0;

        reg_CARD_CNT = ctrl_start;
        for (;;)
        {
            unsigned int ctrl = reg_CARD_CNT;

            if ((ctrl & CARD_CTRL_READY))
            {
                const unsigned int data = reg_CARD_DATA;

                if ((pos >= 0) && (pos < len))
                {
                    *(unsigned int*)((unsigned int)dst + pos) = data;
                }

                pos += sizeof(unsigned int);
            }

            if (!(ctrl & CARD_CTRL_START))
            {
                break;
            }
        }
    }
}
