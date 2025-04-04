//WAP to calculate size of Linked List
#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node *next;

  Node(int val){
    this->val = val;
    this->next = NULL;
    cout<<"Linked list is created"<<endl;
  }
};
void show(Node *head){
    Node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int size(Node *head){
    Node *temp = head;
    int n = 0;
    while (temp!=NULL)
    {
        n++;
        temp = temp->next;
    }
    return n;
}
int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;
    show(a);
    
    cout<<"Size of Linked List is : "<<size(a);
    
    return 0;
}