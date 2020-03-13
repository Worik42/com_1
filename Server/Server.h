#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED

#include "../AbstractServer/AbstractServer.h"

class Server : public AbstractServer
{
private:
    int a;
    int b;

public:
    Server();
    virtual void func();
};

#endif // SERVER_H_INCLUDED
