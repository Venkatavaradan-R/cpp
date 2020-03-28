//euclids recursive gcd

#include <iostream>

int gcd(int, int);

int main()
{
    int m, n;
    std::cout << "enter 2 nos u want gcd of";
    std::cin >> m >> n;
    std::cout << "\nthe gcd of those nos is:" << gcd(m, n);
}

int gcd(int m, int n)
{
    if (n == 0)
        return m;
    return gcd(n, m % n);
}