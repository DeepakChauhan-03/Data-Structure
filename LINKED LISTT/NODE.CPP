//WAP to create a node and display it
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
int main(){
    insert(10);
    insert(20);
    show();
    insert(30);
    insert(40);
    insert(50);
    show();
    return 0;
}