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

int main()
{
    head = NULL;
    cout<<"How many nos.?\n";
    int n,i,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the no. to be inserted.\n";
        cin>>x;
        cout<<"Enter the position at which the node is to be inserted.\n";
        cin>>y;
        Insert(x,y);
        Print();
    }
}

