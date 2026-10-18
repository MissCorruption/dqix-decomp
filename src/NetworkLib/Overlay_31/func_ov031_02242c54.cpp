#include <globaldefs.h>

// USA: func_ov031_02242c54
extern "C" ARM int func_ov031_02242c54(const signed char* text, int length) {
    if (length > 8) return -1;
    if (length == 8 && *text > '7') return -1;
    int index = 0;
    int value = 0;
    int hasDigits = 0;
    if (length > 0) do {
        int uppercase = 0;
        int raw = text[index];
        if (raw >= 'A' && raw <= 'Z') uppercase = 1;
        signed char character = uppercase ? raw + 32 : raw;
        if (character >= '0' && character <= '9') {
            value = value * 16 + character - '0';
            hasDigits = 1;
        } else if (character >= 'a' && character <= 'f') {
            value = value * 16 + character - 'a' + 10;
            hasDigits = 1;
        } else {
            if (hasDigits && (character == ' ' || character == 0)) break;
            if (hasDigits || character != ' ') return -1;
        }
        ++index;
    } while (index < length);
    return value;
}

