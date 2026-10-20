#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Memory.h"

struct StringPair18b8c { char* name; char* value; };
struct PairList18b8c { StringPair18b8c* entries; int capacity; int count; };
extern char data_ov031_02249df8[];
extern char data_ov031_02249fb8[];
extern char data_ov031_02249fbc[];
extern char data_ov031_02249fc8[];
extern char data_ov031_02249e28[];
extern char data_ov031_02249fcc[];
extern char data_ov031_02249fd0[];
extern char data_ov031_02249fd4[];
extern "C" int func_ov031_02218a38(void* allocator, PairList18b8c* list, const char* name, const char* value);

// USA: func_ov031_02218b8c
extern "C" ARM int func_ov031_02218b8c(void* self, int mode) {
    PairList18b8c list;
    char* text;
    char* body;
    char* end;
    char* status;
    char statusSaved;
    char colonSaved;
    char* eq;
    char termSaved;
    char* line;
    char* headerValue;
    char* paramValue;
    char* param;
    char eqSaved;
    char* amp;
    char* colon;
    char* eol;
    int length;
    list.entries = (StringPair18b8c*)((char*)self + 0x1000 + 0xa38);
    list.capacity = 0x20;
    list.count = 0;
    VectorizedMemset(list.entries, 0, 0x100);
    text = *(char**)((char*)self + 0x1000 + 0xa08);
    body = strstr(text, data_ov031_02249df8);
    if (body == NULL) return 0;
    end = body + 4 + strlen(body + 4);
    status = strstr(text, data_ov031_02249fb8);
    if (status == NULL) return 0;
    statusSaved = status[4];
    status[4] = 0;
    if (func_ov031_02218a38(self, &list, data_ov031_02249fbc, status + 1) != 1) {
        status[4] = statusSaved;
        return 0;
    }
    status[4] = statusSaved;
    if (mode == 1 || strncmp(status + 1, data_ov031_02249fc8, 3) != 0) return 1;
    line = strstr(status + 5, data_ov031_02249e28);
    if (line == NULL) return 0;
    line += 2;
    while (line[0] != '\r' && line[1] != '\n') {
        colon = strstr(line, data_ov031_02249fcc);
        if (colon == NULL) break;
        colonSaved = *colon;
        headerValue = colon + 2;
        *colon = 0;
        eol = strstr(headerValue, data_ov031_02249e28);
        if (eol == NULL) {
            *colon = colonSaved;
            break;
        }
        termSaved = *eol;
        *eol = 0;
        if (func_ov031_02218a38(self, &list, line, headerValue) != 1) {
            *colon = colonSaved;
            *eol = termSaved;
            return 0;
        }
        length = strlen(headerValue);
        *colon = colonSaved;
        *eol = termSaved;
        line = headerValue + length + 2;
    }
    param = body + 4;
    if (param < end) do {
        eq = strstr(param, data_ov031_02249fd0);
        if (eq == NULL) break;
        eqSaved = *eq;
        paramValue = eq + 1;
        *eq = 0;
        amp = strstr(paramValue, data_ov031_02249fd4);
        if (amp == NULL) amp = strstr(paramValue, data_ov031_02249e28);
        if (amp != NULL) {
            termSaved = *amp;
            *amp = 0;
        }
        if (func_ov031_02218a38(self, &list, param, paramValue) != 1) {
            *eq = eqSaved;
            if (amp != NULL) *amp = termSaved;
            return 0;
        }
        length = strlen(paramValue);
        *eq = eqSaved;
        if (amp != NULL) *amp = termSaved;
        param = paramValue + length + 1;
    } while (param < end);
    return 1;
}
