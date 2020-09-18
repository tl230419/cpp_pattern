#ifndef HANDLER_H
#define HANDLER_H

#include <iostream>

class IHandler
{
public:
    IHandler()
    {
        g_successor = nullptr;
    }
    virtual ~IHandler()
    {
    }
    void set_successor(IHandler *successor)
    {
        g_successor = successor;
    }
    virtual void handle_request(int days) = 0;

protected:
    IHandler *g_successor;
};

#endif // HANDLER_H