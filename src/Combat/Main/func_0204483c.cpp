#include <globaldefs.h>
#include "std_library_functions.h"

struct RingBuffer020457e8;

struct ByteStream02044974 {
    unsigned char* cursor;
};

extern "C" ARM const char* func_020449a4(struct RingBuffer020457e8* rb, const char* msg);
ARM void WriteHalfwordToStream02044974(struct ByteStream02044974* stream, int value);
ARM int StringStartsWithCI020d85dc(const char* str, const char* prefix);
extern "C" ARM int func_02005a94(const char* s);
ARM void PushToRingBuffer020457e8(struct RingBuffer020457e8* rb, int value);

extern char data_020f00a3[];

enum TextControl0204483c { TextEnd0204483c = 0xff01, TextNewline0204483c = 0xff18, TextTime0204483c = 0xff1a };

// USA: func_0204483c
extern "C" ARM void func_0204483c(struct RingBuffer020457e8* rb, const char* msg, struct ByteStream02044974 stream) {
    const char* closingTag;
    if (msg == 0 || stream.cursor == 0) {
        return;
    }
    msg = func_020449a4(rb, msg);
    for (;;) {
        TextControl0204483c newline;
        ByteStream02044974* output = &stream;
        newline = TextNewline0204483c;
        signed char c = *msg;
        if (c == 0) {
            break;
        }
        signed char next = msg[1];
        if ((c == '\\' && next == 'n') || (c == '\r' && next == '\n')) {
            WriteHalfwordToStream02044974(output, newline);
            msg += 2;
            continue;
        }
        if (c == '\n') {
            WriteHalfwordToStream02044974(output, newline);
            msg += 1;
            continue;
        }
        if (c == '<') {
            int recognizedTag = 1;
            closingTag = strchr(msg, '>');
            if (closingTag == 0) {
                break;
            }
            const char* nextText = closingTag + 1;
            if (StringStartsWithCI020d85dc(msg + 1, data_020f00a3)) {
                int timeValue = func_02005a94(msg + 6);
                if (timeValue < 0) {
                    timeValue = 0;
                }
                PushToRingBuffer020457e8(rb, timeValue);
                WriteHalfwordToStream02044974(output, TextTime0204483c);
            } else {
                recognizedTag = 0;
            }
            if (recognizedTag) {
                msg = nextText;
                continue;
            }
        }
        unsigned char* writeCursor = stream.cursor;
        stream.cursor = writeCursor + 1;
        *writeCursor = *msg++;
    }
    WriteHalfwordToStream02044974(&stream, TextEnd0204483c);
}
