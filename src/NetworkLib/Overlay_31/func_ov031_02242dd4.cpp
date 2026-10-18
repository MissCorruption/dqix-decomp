#include <globaldefs.h>

struct DecimalPowers {
    unsigned int values[9];
};

extern DecimalPowers data_ov031_0224954c;

// USA: func_ov031_02242dd4
extern "C" ARM int func_ov031_02242dd4(char* output, unsigned int value) {
    DecimalPowers powersStorage = data_ov031_0224954c;
    unsigned int* powers = powersStorage.values;
    int index;
    int count = 0;
    index = 0;
    bool started = false;
    do {
        unsigned int divisor = powers[index];
        if (value >= divisor) {
            unsigned int digit = value / divisor;
            unsigned int consumed = digit * divisor;
            started = true;
            if (output != 0) {
                output[count] = digit + '0';
            }
            value -= consumed;
            count++;
        } else if (started != 0) {
            if (output != 0) {
                output[count] = '0';
            }
            count++;
        }
        index++;
    } while (index < 9);
    if (output != 0) {
        output[count] = value + '0';
    }
    return count + 1;
}
