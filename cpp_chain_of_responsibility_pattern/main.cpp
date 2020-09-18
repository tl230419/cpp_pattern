#include <iostream>
#include "concrete_handler.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if (p) { delete p; p = nullptr; } }
#endif

int main()
{
    IHandler *manager = new Manager();
    IHandler *director = new Director();
    IHandler *ceo = new CEO();

    manager->set_successor(director);
    director->set_successor(ceo);

    manager->handle_request(1);
    manager->handle_request(2);
    manager->handle_request(5);
    manager->handle_request(10);

    SAFE_DELETE(manager);
    SAFE_DELETE(director);
    SAFE_DELETE(ceo);

    getchar();

    std::cout << "end!!!" << std::endl;
    return 0;
}
