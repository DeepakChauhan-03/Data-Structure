//WAP to add node at end of a linked list
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
void insertAtEnd(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    Node *temp = head;
    while(temp->next !=NULL)
    {
      temp = temp->next;
    }
    temp->next = newNode;
}
int main(){
    insert(10);
    insert(20);
    show();
    insert(30);
    insert(40);
    insertAtEnd(100);
    insert(50);
    show();
    return 0;
}