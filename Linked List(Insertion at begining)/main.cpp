#include <iostream>

using namespace std;

struct node{
    int data;
    node* link;
};

node* head;
void Insert(int x){
    node* temp = new node();
    temp->data=x;
    temp->link=head;
    head = temp;
}

void Print(){
    node* temp=head;
    cout<<"The list is: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<"\n";
}

int main()
{
    head = NULL;
    cout<<"How many nos.?\n";
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the no. to be inserted.\n";
        cin>>x;
        Insert(x);
        Print();
    }
}
