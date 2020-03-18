#include "IUnknown_.h"

class IClassFactory : public IUnknown_
{
public:
    virtual HResult_ __stdcall CreateInstance(IID_ &iid, void **ppv) = 0;
};

HResult_ __stdcall getClassObject(CLSID_ &clsid, IID_ &iid, void **ppv)