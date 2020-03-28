// convert from c to f

#include<iostream>

int main()
{
    int c;
    std::cout<<"Enter the temp in celcius";
    std::cin>>c;
    int f = c*9/5 +32;
    std::cout<<"\n "<<f;
}