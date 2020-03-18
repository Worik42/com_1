#include "CA.h"
#include "Ix.h"

CA::CA(){};
HResult_ CA::queryInterface(IID_ *iid, void **ppv)
{
    if (*iid == 1)
    {
        *ppv = (void *)(Ix *)this;
        return 0;
    }
}
// CA::queryInterface(IID_ &iid, void **ppv) {}
