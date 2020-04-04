// intro to vectors

#include<iostream>
#include<vector>


using namespace std;

void display(vector<int>);

int main()
{
    vector<int> x;
    x.push_back(10);
    x.push_back(100);
    x.insert(x.begin(),1);
    x.insert(x.begin(),69);
    display(x);

    x.erase(x.begin());
    display(x);

    x.resize(10);
    display(x);

    x.erase(x.end()-5,x.end());
    display(x);




}

void display (vector<int> x)
{
    int i ;
    for (i=0;i< x.size();i++)
    {
        cout<<x[i]<<"  ";

    }
    cout<<"\t size:"<<x.size()<<"\t capacity: "<<x.capacity()<<endl;
}