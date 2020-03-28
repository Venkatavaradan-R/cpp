// take 2 nums, divide and print quotient and remainder

#include <iostream>

int main()
{
    std::cout << "enter the 2 numbers,p,q considering p/q form";
    int p, q;
    std::cin >> p >> q;
    std::cout << "q:" << p / q << "\nr:" << p % q;
}