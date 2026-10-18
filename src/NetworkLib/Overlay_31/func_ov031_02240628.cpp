#include <globaldefs.h>

struct TextBuffer02240628;
extern "C" void func_ov031_02240410(TextBuffer02240628*, int, void**, int*);
extern "C" signed char func_ov031_0224046c(TextBuffer02240628*, void**, int*);

// USA: func_ov031_02240628
extern "C" ARM int func_ov031_02240628(TextBuffer02240628* buffer, int start, int end, const signed char* name, int delimiter) {
    void* chain;
    int counter;
    if (start < end) {
        func_ov031_02240410(buffer, start, &chain, &counter);
        int character = func_ov031_0224046c(buffer, &chain, &counter);
        int expected;
        int uppercase;
        goto compare;
        do {
            if (*name == 0 || *name == ' ' || *name == delimiter || start == end - 1) return 0;
            character = func_ov031_0224046c(buffer, &chain, &counter);
            ++start;
            ++name;
compare:
            uppercase = 0;
            if (*name >= 'A' && *name <= 'Z') uppercase = 1;
            expected = uppercase ? *name + 32 : *name;
            if (character >= 'A' && character <= 'Z') character += 32;
        } while (character == expected);
    }
    return -1;
}

