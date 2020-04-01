// check if call by ref works using dma

#include<iostream>
#include<cstring>

using namespace std;

void check(char *);

int main()
{
    char* arr = new char[10];
    strcpy(arr,"Hello World!");
    cout<<"inside main 1 :\t"<<arr<<endl;
    check(arr);
    cout<<"inside main 2 :\t"<<arr<<endl;


    delete[] arr;
    return 0;
}

void check(char * a)
{
    cout<<"inside check 1 :\t"<<a<<endl;
    a[11] = '?';

}