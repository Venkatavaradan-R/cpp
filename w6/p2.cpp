// fn to strcmp

#include<iostream>
#include<cstring>

int strcomp(char*, char*);

int main()
{
    char * st1 = new char[10];
    char *st2 = new char[10];
    strcpy(st1 , "bad");
    strcpy(st2 , "bad");
    
    std::cout<<"the out put of comparing bad and Bad is: "<< strcomp(st1, st2);
}

int strcomp(char * st1, char* st2)
{
    int i=0,a = sizeof(st1)/sizeof(st1[0]), b = sizeof(st2)/sizeof(st2[0]);
    while (i<=a && i<=b)
    {
        if (st1[i]!= st2[i]) return 1;
        i++;
    }
    if (a!=b)return 1;
    delete[] st1;
    delete[] st2;

    return 0;

}