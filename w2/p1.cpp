//even or odd

#include <iostream>

int main()
{
    std::cout << "entr the number";
    int n;
    std::cin >> n;
    if (n % 2 == 0)
        std::cout << "even";
    else
    {
        std::cout << "odd";
    }
}