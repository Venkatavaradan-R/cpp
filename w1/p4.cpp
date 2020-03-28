// area and peri using radius

#include<iostream>
#include<cmath>

int main()
{
    std::cout<<"enter the rad\n";
    int r;
    std::cin>>r;
    std::cout<<"Area: \t"<< 3.14*pow(r,2)<<"\nPerimeter: \t"<< 2*3.14*r;
}