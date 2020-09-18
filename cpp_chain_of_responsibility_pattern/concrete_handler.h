#ifndef CONCRETE_HANDLER_H
#define CONCRETE_HANDLER_H

#include "handler.h"

class Manager : public IHandler
{
public:
    void handle_request(int days) override
    {
        if (days <= 1)
        {
            std::cout << "Manager agreed " << days << " days." << std::endl;
        }
        else
        {
            g_successor->handle_request(days);
        }
    }
};

class Director : public IHandler
{
public:
    void handle_request(int days) override
    {
        if (days <= 3)
        {
            std::cout << "Director agreed " << days << " days." << std::endl;
        }
        else
        {
            g_successor->handle_request(days);
        }
    }
};

class CEO : public IHandler
{
public:
    void handle_request(int days) override
    {
        if (days <= 7)
        {
            std::cout << "CEO agreed " << days << " days." << std::endl;
        }
        else
        {
            std::cout << "Have a long holiday! No need go to work." << std::endl;
        }
    }
};

#endif // CONCRETE_HANDLER_H
