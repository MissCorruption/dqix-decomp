#include <globaldefs.h>
#include <NitroSDK/Matrix.h>
#include <NitroSDK/NSBXX/RenderConfig.h>

#if defined(jpn)
#define func_0208b610 func_0208bf04
#endif

extern "C" void func_02016d8c(void* arg0);
fix32_t fix32cos(int x);
fix32_t fix32sin(int x);
extern "C" void func_0208b548(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, unsigned int arg7);
extern "C" ARM void func_0208b588(unsigned int arg0, unsigned int arg1, unsigned int arg2,
                                  unsigned int arg3, unsigned int arg4, unsigned int arg5);

// USA: func_0208b610
extern "C" ARM void func_0208b610(Vector3fix arg0, unsigned short arg1, int arg2, int arg3, int arg4, short arg5) {
    RenderConfig::SetObjectPosition(&arg0);
    fix32_t var0 = fix32cos(arg5);
    fix32_t var1 = fix32sin(arg5);
    Matrix3x3 var2;
    Mat3x3_WriteRotationY(&var2, var1, var0);
    func_02016d8c(&var2);
    Vector3fix var3;
    var3.x = arg2;
    var3.y = arg3;
    var3.z = arg4;
    RenderConfig::SetObjectScale(&var3);
    RenderConfig::SubmitToFifo();
    func_0208b548(0, 0, 1, 1, 0, 0, 0, 0);
    func_0208b588(0, 0, 3, 0, 0, 0);
    *(volatile unsigned int*)0x04000500 = 1;
    *(volatile unsigned int*)0x04000480 = arg1;
    *(volatile unsigned int*)0x0400048c = 0x08000800;
    *(volatile unsigned int*)0x0400048c = 0x00000800;
    *(volatile unsigned int*)0x0400048c = 0xf8000800;
    *(volatile unsigned int*)0x0400048c = 0x00000800;
    *(volatile unsigned int*)0x0400048c = 0xf800f800;
    *(volatile unsigned int*)0x0400048c = 0x00000800;
    *(volatile unsigned int*)0x0400048c = 0x0800f800;
    *(volatile unsigned int*)0x0400048c = 0x00000800;
    *(volatile unsigned int*)0x0400048c = 0x08000800;
    *(volatile unsigned int*)0x0400048c = 0x0000f800;
    *(volatile unsigned int*)0x0400048c = 0xf8000800;
    *(volatile unsigned int*)0x0400048c = 0x0000f800;
    *(volatile unsigned int*)0x0400048c = 0xf800f800;
    *(volatile unsigned int*)0x0400048c = 0x0000f800;
    *(volatile unsigned int*)0x0400048c = 0x0800f800;
    *(volatile unsigned int*)0x0400048c = 0x0000f800;
    *(volatile unsigned int*)0x0400048c = 0x08000800;
    *(volatile unsigned int*)0x0400048c = 0x00000800;
    *(volatile unsigned int*)0x0400048c = 0x08000800;
    *(volatile unsigned int*)0x0400048c = 0x0000f800;
    *(volatile unsigned int*)0x0400048c = 0xf8000800;
    *(volatile unsigned int*)0x0400048c = 0x0000f800;
    *(volatile unsigned int*)0x0400048c = 0xf8000800;
    *(volatile unsigned int*)0x0400048c = 0x00000800;
    *(volatile unsigned int*)0x0400048c = 0x0800f800;
    *(volatile unsigned int*)0x0400048c = 0x00000800;
    *(volatile unsigned int*)0x0400048c = 0x0800f800;
    *(volatile unsigned int*)0x0400048c = 0x0000f800;
    *(volatile unsigned int*)0x0400048c = 0xf800f800;
    *(volatile unsigned int*)0x0400048c = 0x0000f800;
    *(volatile unsigned int*)0x0400048c = 0xf800f800;
    *(volatile unsigned int*)0x0400048c = 0x00000800;
    *(volatile unsigned int*)0x04000504 = 0;
}
