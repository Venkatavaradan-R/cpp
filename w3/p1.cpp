// area and peri using radius and ifelse

#include <iostream>
#include <cmath>

int main()
{
    std::cout << "enter the rad and choice(1 for ar 2 for peri)\n";
    int r, ch;
    std::cin >> r >> ch;

    if (ch == 1)
        std::cout << "Area: \t" << 3.14 * pow(r, 2);
    else
    {
        std::cout << "Perimeter: \t" << 2 * 3.14 * r;
    }
}