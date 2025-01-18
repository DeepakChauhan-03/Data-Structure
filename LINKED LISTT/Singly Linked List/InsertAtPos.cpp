//WAP to insert Node at specific Position
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;
void insert(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}
void show()
{
    Node *temp = head;
    cout<<"\nElements of Linked List \n";
    while(temp!=NULL)
    {
       cout<<temp->data<<"  ";
       temp = temp->next;
    }
    cout<<"\nEnd of Linked List"<<endl;
}
void InsertAtPos(int x, int pos)
{
    Node *newNode = new Node;
    newNode->data = x;
    if(pos==1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    for(int i=1; i<pos-1 && temp!=NULL; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
int main(){
    insert(10);
    insert(20);
    show();
    insert(30);
    InsertAtPos(1010,2);
    insert(40);
    insert(50);
    show();
    return 0;
}