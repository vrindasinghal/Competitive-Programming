#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* head;
void Insert(int x,int y){
    node* temp1 = new node();
    temp1->next=NULL;
    temp1->data=x;
    int i;
    if(y==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    node* temp2=head;
    for(i=0;i<y-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}

void  Print(){
    node* temp=head;
    cout<<"The list is: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

void Reverse(node* p){
    if (p->next==NULL){
        head=p;
        return;
    }
    Reverse(p->next);
    node* q=p->next;
    q->next=p;
    p->next=NULL;
}

int main()
{
    head = NULL;
    Insert(22,1);
    Insert(23,1);
    Insert(24,1);
    Insert(25,1);
    Insert(26,1);
    Print();
    Reverse(head);
    Print();
}

