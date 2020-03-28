//fn to return address of the smaller odd number

#include<iostream>

int* smodd(int* ,int* );

int main()
{
    int a = 113,b = 112;

    std::cout<<"the smaller odd nos reference is:"<< smodd(&a,&b) <<std::endl <<"The value at that location is:" << *smodd(&a,&b);
}

int * smodd (int *a, int *b)
{

    if (*a%2 !=0  && *b%2!=0)
    {
        if (*a>*b) return b;
        return a;
    }
    if (*a%2 !=0) return a;
    if (*b%2 !=0) return b;


}