#include <iostream>

#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top should 17: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size should 1: " << mstack.size() << std::endl;

    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);
    mstack.push(6);
    mstack.push(7);
    mstack.push(8);
    mstack.push(9);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << "size should 10: " << mstack.size() << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << std::endl;
    return 0;
}
