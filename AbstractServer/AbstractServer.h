#ifndef ABSTRACTSERVER_H_INCLUDED
#define ABSTRACTSERVER_H_INCLUDED

class AbstractServer {
 public:
    virtual void func() = 0;
};

AbstractServer* CreateInstance();

#endif // ABSTRACTSERVER_H_INCLUDED
