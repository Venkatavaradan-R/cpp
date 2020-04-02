// substring to check if a substring is there
//!incomplete - not working
#include<iostream>
#include<cstring>

using namespace std;

int removess(char*, char*);

int main()
{
    char *s = new char[30], *ss = new char[30]; 
    cout<<"enter the string and then substring that you wanna search for:"<<endl;
    cin>>s;
    cout<<endl;
    cin>>ss;
    cout<<"The substring is present at location:"<<removess(s,ss);

    delete[] s, ss;
    return 0;
}


int removess(char* s, char* ss)
{
    int n = 5, m = 3, i= 0, j=0;
    cout<<"the size of the s and ss resp are:"<< n<< "   "<<m;
    while (i<n-m)
    {
        j=0;
        while(j<m && s[j+i]==ss[j])
            j++;
        if (j=m) return i;
        i++;
    }
    return -1;
}