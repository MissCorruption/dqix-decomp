#include <globaldefs.h>

struct InstrumentParameters020d2d00 {
    unsigned short wave[2];
    unsigned char originalKey;
    unsigned char attack;
    unsigned char decay;
    unsigned char sustain;
    unsigned char release;
    unsigned char pan;
};

struct InstrumentData020d2d00 {
    unsigned char type;
    unsigned char padding;
    InstrumentParameters020d2d00 param;
};

struct InstrumentPosition020d2d00 {
    unsigned long prgNo;
    unsigned long index;
};

struct SoundBank020d2d00 {
    unsigned char header[0x38];
    unsigned long instCount;
    unsigned long instOffset[1];
};

struct InstrumentParametersCopy020d2d00 {
    unsigned short data[sizeof(InstrumentParameters020d2d00) / sizeof(unsigned short)];
};

struct InstrumentDataCopy020d2d00 {
    unsigned short data[sizeof(InstrumentData020d2d00) / sizeof(unsigned short)];
};

struct DrumSet020d2d00 {
    unsigned char min;
    unsigned char max;
    InstrumentData020d2d00 instruments[1];
};

struct KeySplit020d2d00 {
    unsigned char key[8];
    InstrumentData020d2d00 instruments[8];
};

// USA: func_020d2d00
extern "C" ARM int func_020d2d00(const SoundBank020d2d00* bank, InstrumentData020d2d00* inst,
    InstrumentPosition020d2d00* pos) {
    if (pos->prgNo < bank->instCount) {
        do {
            unsigned long offset = bank->instOffset[pos->prgNo];
            inst->type = offset;
            offset >>= 8;
            switch (inst->type) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                *(InstrumentParametersCopy020d2d00*)&inst->param =
                    *(const InstrumentParametersCopy020d2d00*)((const unsigned char*)bank + offset);
                pos->prgNo++;
                return true;
            case 16: {
                const DrumSet020d2d00* const drumSet = (const DrumSet020d2d00*)((const unsigned char*)bank + offset);
                while (pos->index < drumSet->max - drumSet->min + 1) {
                    *(InstrumentDataCopy020d2d00*)inst =
                        *(const InstrumentDataCopy020d2d00*)&drumSet->instruments[pos->index];
                    pos->index++;
                    return true;
                }
                break;
            }
            case 17: {
                const KeySplit020d2d00* const keySplit = (const KeySplit020d2d00*)((const unsigned char*)bank + offset);
                while (pos->index < 8) {
                    if (keySplit->key[pos->index] == 0)
                        break;
                    *(InstrumentDataCopy020d2d00*)inst =
                        *(const InstrumentDataCopy020d2d00*)&keySplit->instruments[pos->index];
                    pos->index++;
                    return true;
                }
                break;
            }
            }
            pos->prgNo++;
            pos->index = 0;
        } while (pos->prgNo < bank->instCount);
    }
    return false;
}
