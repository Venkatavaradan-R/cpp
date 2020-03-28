// print ascii for backspace and input digit
//!NOT WORKING IDK WHAT IS HAPPENING HEREHELP PLS

#include <iostream>

int main()
{
    std::cout << "enter the digit";
    char n[10];
    std::cin >> n;
    std::cout << "ascii for backspace:" << (int)'\b' << "\nascii for digit:" << (int)n[0];
}