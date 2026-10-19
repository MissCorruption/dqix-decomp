#include <globaldefs.h>
#include "std_library_functions.h"

struct SecuritySource {
    int type;
    int keyIndex;
};
struct SecuritySettings {
    char padding_0[0xc];
    int mode;
    int keyIndex;
};
struct PairwiseMasterKey {
    unsigned int words[16];
};
struct WepKey40 {
    unsigned char bytes[5];
};
struct WepKey104 {
    unsigned char bytes[13];
};
struct WepKey128 {
    unsigned char bytes[16];
};
union WepKey {
    unsigned char bytes[0x20];
    WepKey40 key40;
    WepKey104 key104;
    WepKey128 key128;
};
union WepKeyText {
    char text[0x21];
    WepKey40 key40;
    WepKey104 key104;
    WepKey128 key128;
};

extern char data_ov031_0224f7dc[];
extern char data_ov031_0224f9c4[];
extern SecuritySource data_ov031_0224f9f0;
extern SecuritySettings data_ov031_0224f7f0;
extern char data_ov031_0224fa28[4][0x28];
extern WepKey data_ov031_0224f804[4];
extern PairwiseMasterKey data_ov031_0224f884;
struct Passphrase {
    char text[0x40];
    int length;
    int field_0x44;
};
extern Passphrase data_ov031_0224fac0;
extern "C" void func_ov031_022208b4(WepKey* destination, const char* text, int length);

// USA: func_ov031_02220968
extern "C" THUMB int func_ov031_02220968() {
    int result = 1;
    strcpy(data_ov031_0224f7dc, data_ov031_0224f9c4);
    switch (data_ov031_0224f9f0.type) {
    case 0:
        data_ov031_0224f7f0.mode = 0;
        break;
    case 1: {
        if (data_ov031_0224f9f0.keyIndex == 0) {
            result = -7;
            break;
        }
        data_ov031_0224f7f0.keyIndex = data_ov031_0224f9f0.keyIndex;
        WepKeyText key;
        const WepKeyText* text;
        const char (*source)[0x28] = data_ov031_0224fa28;
        WepKey* destination = data_ov031_0224f804;
        int i = 0;
        text = &key;
        do {
            memcpy(key.text, *source, 0x20);
            key.text[0x20] = 0;
            switch (strlen(key.text)) {
            case 0:
                break;
            case 5:
                data_ov031_0224f7f0.mode = 1;
                destination->key40 = text->key40;
                break;
            case 10:
                data_ov031_0224f7f0.mode = 1;
                func_ov031_022208b4(destination, text->text, 10);
                break;
            case 13:
                data_ov031_0224f7f0.mode = 2;
                destination->key104 = text->key104;
                break;
            case 26:
                data_ov031_0224f7f0.mode = 2;
                func_ov031_022208b4(destination, text->text, 26);
                break;
            case 16:
                data_ov031_0224f7f0.mode = 3;
                destination->key128 = text->key128;
                break;
            case 32:
                data_ov031_0224f7f0.mode = 3;
                func_ov031_022208b4(destination, text->text, 32);
                break;
            default:
                result = -7;
                break;
            }
            source++;
            destination++;
            i++;
        } while (i < 4);
        break;
    }
    case 2:
        data_ov031_0224f7f0.mode = 4;
        __memcpy(&data_ov031_0224f884, data_ov031_0224fac0.text, sizeof(data_ov031_0224f884));
        break;
    case 3:
        data_ov031_0224f7f0.mode = 5;
        __memcpy(&data_ov031_0224f884, data_ov031_0224fac0.text, sizeof(data_ov031_0224f884));
        break;
    default:
        result = -7;
        break;
    }
    return result;
}
