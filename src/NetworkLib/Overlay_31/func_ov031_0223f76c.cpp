#include <globaldefs.h>

struct Struct022412e8;
extern "C" int func_ov031_022412e8(Struct022412e8*, int*);
extern "C" void func_ov031_0223fb60(void*, unsigned int);
extern "C" void func_ov031_0223fb74(void*, const void*, unsigned int);
extern "C" int func_ov031_0223e42c(int);
extern "C" int func_ov031_022411e4(Struct022412e8*, const char*, char**);
extern "C" int func_ov031_0223e54c(signed char*, const char*, int);
extern "C" int func_ov031_0223fb8c(const char*, int);
extern const char data_ov031_0224c760[];
struct DWCNdFileInfo {
    char name[33];
    short description[51];
    char param1[11];
    char param2[11];
    char param3[11];
    unsigned int size;
};
struct DownloadOperation0223f76c {
    int field0;
    int operation;
    int field8;
    int fieldc;
    void* buffer;
    int capacity;
    void* responseBuffer;
    void* encodedOffset;
    void* encodedCount;
};

// USA: func_ov031_0223f76c
extern "C" ARM int func_ov031_0223f76c(Struct022412e8* source, DownloadOperation0223f76c* output) {
    int textAddress;
    char* header;
    int result = 0;
    func_ov031_0223fb60(output->buffer, output->capacity * sizeof(DWCNdFileInfo));
    if (func_ov031_022411e4(source, data_ov031_0224c760, &header) > 0) {
        if (header[0] == '0' && header[1] == 0) return 1;
    }
    int length = func_ov031_022412e8(source, &textAddress);
    if (length > 0) {
        int cursor = 0;
        int row = 0;
        if (output->capacity > 0) {
            int byteOffset = 0;
            do {
                if (cursor >= length) { result = 1; break; }
                int field = 0;
                int start = cursor;
                DWCNdFileInfo* record = (DWCNdFileInfo*)((unsigned char*)output->buffer + byteOffset);
                int carriage = 0;
                result = 0;
                if (cursor < length) do {
                    int ch = ((const char*)textAddress)[cursor];
                    if (ch == '\r') carriage = 1;
                    else {
                        if (carriage) {
                            if (ch == '\n') {
                                if (field == 5) {
                                    int size = cursor - 1 - start;
                                    if (size > 8) goto done;
                                    int value = func_ov031_0223fb8c((const char*)textAddress + start, size);
                                    if (value < 0) goto done;
                                    record->size = value;
                                }
                                ++cursor;
                                result = field >= 5;
                                break;
                            }
                        } else if (ch == '\t') {
                            switch (field) {
                            case 0:
                                if ((unsigned int)(cursor - start) > 32) goto done;
                                func_ov031_0223fb74(record->name, (const char*)textAddress + start, cursor - start);
                                break;
                            case 1: {
                                int size = cursor - start;
                                if ((unsigned int)func_ov031_0223e42c(size) > 102) goto done;
                                func_ov031_0223e54c((signed char*)record->description, (const char*)textAddress + start, size);
                                record->description[50] = 0;
                                break;
                            }
                            case 2:
                                if ((unsigned int)(cursor - start) > 10) goto done;
                                func_ov031_0223fb74(record->param1, (const char*)textAddress + start, cursor - start);
                                break;
                            case 3:
                                if ((unsigned int)(cursor - start) > 10) goto done;
                                func_ov031_0223fb74(record->param2, (const char*)textAddress + start, cursor - start);
                                break;
                            case 4:
                                if ((unsigned int)(cursor - start) > 10) goto done;
                                func_ov031_0223fb74(record->param3, (const char*)textAddress + start, cursor - start);
                                break;
                            case 5: {
                                int size = cursor - start;
                                if (size > 8) goto done;
                                int value = func_ov031_0223fb8c((const char*)textAddress + start, size);
                                if (value < 0) goto done;
                                record->size = value;
                                break;
                            }
                            }
                            ++field;
                            start = cursor + 1;
                        }
                        carriage = 0;
                    }
                    ++cursor;
                } while (cursor < length);
                ++row;
                byteOffset += sizeof(DWCNdFileInfo);
            } while (row < output->capacity);
        }
    }
done:
    return result;
}
