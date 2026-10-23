#include <globaldefs.h>

struct Message0220fbd4
{
    int length_;
    unsigned int signature_;
    int type_;
    int request_;
    int value_;
    char payload_[0x400];
};
struct Request0220fbd4 { int state_; int request_; int value_; };
struct Queue0220fbd4
{
    char pad_0x0[0x24];
    Request0220fbd4* current_;
    int callback_;
    int completion_;
    int value_;
};
extern Queue0220fbd4* data_ov031_0224e580;
extern "C" void func_ov031_0220fd78(int, Message0220fbd4*);
extern "C" int func_ov031_0220fe44(int);
extern "C" int func_ov031_0220ff78(int*);
extern "C" int func_ov031_0220ff18(void*);
extern "C" void func_ov031_0220fea0(void);
extern "C" void func_ov031_0220fed8(void);

// USA: func_ov031_0220fbd4
extern "C" ARM void func_ov031_0220fbd4(void)
{
    unsigned char buffer[0x414];
    Message0220fbd4* header = (Message0220fbd4*)buffer;
    func_ov031_0220fd78(data_ov031_0224e580->current_->value_, header);
    header->length_ = 20;
    header->signature_ = 0x44535359;
    header->type_ = 0xda;
    header->request_ = data_ov031_0224e580->current_->request_;
    if ((header->value_ = data_ov031_0224e580->value_) == 0)
        return;
    if (func_ov031_0220fe44((int)func_ov031_0220ff78) != 0)
    {
        if (func_ov031_0220ff18(header) != 0)
            func_ov031_0220fea0();
    }
    func_ov031_0220fed8();
}
