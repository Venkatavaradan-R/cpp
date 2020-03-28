//ask if they want option a b c or d
// program for switch case

#include <iostream>
int main()
{
    int ch;
    std::cout << "enter an option";
    std::cin >> ch;

    switch (ch)
    {
    case 1:
        std::cout << "one";
        break;
    case 2:
        std::cout << "two";
        goto x;
        break;
    case 3:
        std::cout << "three";
        break;
    case 4:
    x:
        std::cout << "four";
        break;
    }
}