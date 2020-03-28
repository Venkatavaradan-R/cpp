//function to return a number

#include <iostream>

int retrand();

int main()
{
    std::cout << "random no:\t " << retrand() << std::endl;
}

int retrand()
{
    // srand(100);
    return rand() % 10;
}