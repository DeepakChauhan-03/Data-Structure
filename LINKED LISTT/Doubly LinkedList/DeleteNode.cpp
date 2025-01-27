//WAP to delete Node
#include<iostream>
using namespace std;
struct Node{
    Node *prev;
    int data;
    Node *next;
};
Node *head = NULL;

void insert(int x){
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = head;
    newNode->prev = NULL;

    if(head!=NULL){
    head->prev = newNode;
    }
    head = newNode;
}

void insertAtEnd(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(head==NULL)
    {
        insert(x);
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL)
    {
       temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void insertAtPos(int pos, int x)
{
    if(head==NULL)
    {
        insert(x);
        return;
    }
    Node *newNode = new Node;
    newNode->data = x;
    Node *temp = head;

    for(int i=1; i<pos-1 && temp!=NULL; i++)
    {
        temp = temp->next;
    }
    if(temp==NULL)
    {
        cout<<"You Entered invalid position ";
        return;
    }
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;
    temp->next->prev = newNode;
    
}
void deleteNode()
{
    Node *temp = head;
    if(temp==NULL){
        cout<<"Linked List is already empty"<<endl;
        return;
    }

    head = head->next;
    head->prev = NULL;
    delete temp;
}

void deleteEndNode()
{
    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
}

void deleteAtPos(int pos)
{
    Node *temp = head;
    if(head==NULL)
    {
        cout<<"Linked List is already empty"<<endl;
        return;
    }
    if(pos<=0)
    {
        cout<<"You entered a negative position which is not exist"<<endl;
        return;
    }
    if(pos==1)
    {
        deleteNode();
        return;
    }
    for(int i=1; i<pos && temp!=NULL; i++)
    {
        temp = temp->next;
    }
    if(temp==NULL)
    {
        cout<<"You entered invalid position"<<endl;
        return;
    }
    if(temp->next!=NULL)
    {
        temp->next->prev = temp->prev;
    }
    if(temp->prev!=NULL)
    {
        temp->prev->next = temp->next;
    }
    delete temp;
}
void show()
{
  if(head==NULL)
  {
    cout<<"Linked list is empty";
    return;
  }  
  Node *temp = head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}
int main()
{
    insert(10);
    insert(20);
    show();
    insertAtEnd(40);
    show();
    insertAtPos(2,123);
    show();
    deleteAtPos(3);
    show();
    return 0;
}