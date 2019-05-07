#include "mydll.h"

DLL_EXPORT int __stdcall foo (int x) {
    return x;
}

DLL_EXPORT double __stdcall Add(double *a, double b)
{
return *a + b;
}