#include <globaldefs.h>
#include <System/ProcessorContext.h>

struct EchoHeader02201364 {
    unsigned short typeAndCode;
    unsigned short checksum;
    unsigned short identifier;
    unsigned short sequence;
};
struct EchoPacket02201364 {
    unsigned char prefix[0x22];
    EchoHeader02201364 echo;
};
struct EchoSocket02201364 {
    unsigned char prefix[0xa];
    unsigned short localPort;
    unsigned char paddingC[0x1c - 0xc];
    unsigned int destination;
    unsigned char padding20[0x4c - 0x20];
    EchoPacket02201364* packet;
};
unsigned char data_ov031_0224c980;
static unsigned char ip_conflict;
static unsigned short mymss;

extern "C" unsigned int func_ov031_022005b4(unsigned char*, unsigned int, unsigned int);
unsigned int NormalizeChecksum_02200668(unsigned int);
extern "C" void func_ov031_0220116c(unsigned char*, unsigned int, const unsigned char*, unsigned int, unsigned int, unsigned char);

// USA: func_ov031_02201364
extern "C" ARM void func_ov031_02201364(unsigned char* payload, unsigned int length, EchoSocket02201364* socket) {
    static unsigned short pingseq = 0;
    EchoPacket02201364* packet = socket->packet;
    packet->echo.typeAndCode = 8;
    packet->echo.identifier = (unsigned int)data_02111304.activeContext;
    packet->echo.checksum = 0;
    socket->localPort = pingseq;
    packet->echo.sequence = pingseq++;
    unsigned char* headerBytes = (unsigned char*)&packet->echo;
    unsigned int sum = func_ov031_022005b4(headerBytes, 8, 0);
    sum = func_ov031_022005b4(payload, length, sum);
    int checksum = NormalizeChecksum_02200668((unsigned short)sum);
    int swapped = checksum << 8;
    packet->echo.checksum = (checksum >> 8) | swapped;
    func_ov031_0220116c(headerBytes, 8, payload, length, socket->destination, 1);
}

static unsigned short ipid;
