// largest of 3 nos

#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    std::cout << "enter 3 nos";
    std::cin >> a >> b >> c;
    if (a > b && a > c)
        std::cout << "the largest no is:" << a;
    if (a < b && b > c)
        std::cout << "the largest no is:" << b;
    if (c > b && a < c)
        std::cout << "the largest no is:" << c;

    return 0;
}