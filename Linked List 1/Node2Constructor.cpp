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
void insertAtEnd(Node *head, int val){
  Node *t = new Node(val);
  while(head->next!=NULL){
    head = head->next;
   // head->next = t;
  }
  head->next = t;
}
int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;
    
  insertAtEnd(a,60);
     Node *temp = a;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    
    return 0;
}