#include "IClassFactory.h"

class CFA: public IClassFactory {
    public:
         HResult_ CreateInstance(IID_ &iid, void **ppv);
};