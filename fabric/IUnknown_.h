typedef int HResult_;
typedef int CLSID_;
typedef int IID_;
typedef int ULONG_;
//stdcall - компилятор с++ в стандартном стиле, а не с
class IUnknown_
{
public:
    virtual HResult_ __stdcall queryInterface(IID_ *iid, void **ppv) = 0;
    virtual ULONG_ __stdcall addRef() = 0;
    virtual ULONG_ Release() = 0;
};

// HResult_ CreateInstance(CLSID_ *clsid, IID_ *iid, void **ppv);

// HResult_ queryInterface(IID_ &iid,void **ppv);