// USA: func_0205aed0
extern "C" void func_0205aed0(void* arg0, char* arg1, unsigned int arg2, int arg3)
{
    if (arg1 != 0) {
        unsigned short var0 = 0;
        while (var0 < arg2) {
            unsigned char* var1 = (unsigned char*)(arg1 + var0 * 0x28);
            var1[0x22] = (unsigned char)(var1[0x22] + arg3);
            var1[0x22] &= 0x7f;
            var0 = var0 + 1;
        }
    }
}
