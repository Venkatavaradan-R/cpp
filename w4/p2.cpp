//fiboncci

#include <iostream>

int main()
{
    int a = 0, b = 1, c;
    c = a + b;

    for (int i = 0; i < 10; i++)
    {
        std::cout << a << "  ";
        a = b;
        b = c;
        c = a + b;
    }
}