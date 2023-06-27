#include <iostream>

int main()
{
    std::cout << "Hello World";
    return 0;
    int peter = 100;
    int klara = 5;
    int tmp;
    tmp = peter;
    std::cout << "1: tmp" << tmp;
    peter = klara;
    tmp = peter;
    std::cout << "tmp" << tmp;
}