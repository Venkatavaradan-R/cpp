// linked list boueeeeeeee
//Incomplete

#include<iostream>
#include<cstring>

using namespace std;

struct node {
    int data;
    struct node* link;
};

typedef struct node node;

node* create_node(int);
void insert_beg(node*, int);
void display(node*);
void destroy(node*);

//! main
int main()
{

    node* head = NULL;
    display(head);
    insert_beg(head, 68);
    display(head);

    cout<<endl<<"youre gay "<<endl;

    destroy(head);
    return 0;

    
}

node* create_node(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->link = NULL; 
    return temp;

}

void insert_beg(node* head, int data)
{
    head= create_node(data);
    cout<<endl<<"youre gay "<<endl;

}


void display(node* head)
{
    node* p = head;
    if(p == NULL)
    {

        cout<<"The LL is empty";
        return;
    }

    cout<<"youre gay "<<endl;
    while(p->link!=NULL)
    {
        cout<<p->data<<" ";
        p=p->link;
    }
}

void destroy(node* head)
{
    node* q = head,*p;
    if (head==NULL) return;
    while (q!=NULL)
    {
        p=q;
        q=q->link;
        delete p;
    }
}
