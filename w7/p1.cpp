//define and do basic ops on a struct for student that contains name srn and sex

#include<iostream>
#include<cstring>

using namespace std;

struct student {
    char name[50];
    long int srn;
    char sex;
};

typedef struct student stud;

void display(stud);

int main()
{
    stud a;
    strcpy(a.name, "ananth");
    a.sex = 'm';
    a.srn = 121212121212;
    display(a);


}

void display(stud a)
{
    cout<<"details are as follows:"<<endl<<"name:\t"<<a.name<<endl<<"srn:\t"<<a.srn<<endl<<"sex:\t"<<a.sex<<endl;


}