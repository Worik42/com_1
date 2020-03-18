#include "IClassFactory.h"
class CFB : public IClassFactory
{
public:
     HResult_ CreateInstance(IID_ &iid, void **ppv);
};