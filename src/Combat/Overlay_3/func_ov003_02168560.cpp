#include <globaldefs.h>
#if defined(jpn)
enum { kRegione4 = 0xe0 };
#else
enum { kRegione4 = 0xe4 };
#endif

struct Cont0205d1e0;
extern "C" void func_0205d1e0(struct Cont0205d1e0* obj);
struct Cont0205d228;
extern "C" void func_0205d228(struct Cont0205d228* obj);
struct Cont0205d274;
extern "C" void func_0205d274(struct Cont0205d274* obj);
extern "C" void func_0205da88(void* p, int a, int b, int c);
extern "C" void func_ov003_0216acf0(char* base);
extern "C" void func_ov003_0216a880(char* obj);

// USA: func_ov003_02168560
extern "C" ARM void func_ov003_02168560(char* obj) {
    func_0205d1e0((struct Cont0205d1e0*)(obj + kRegione4));
    func_0205d228((struct Cont0205d228*)(obj + kRegione4));
    func_0205da88(obj + kRegione4, 1, 2, 1);
    func_0205d274((struct Cont0205d274*)(obj + kRegione4));
    func_ov003_0216acf0(obj);
    func_ov003_0216a880(obj);
}
