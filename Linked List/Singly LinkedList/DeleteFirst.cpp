//WAP to delete first Node
#include<iostream>
using namespace std;
class Node{   //Creating a Node
   public:
      int data;
      Node *next;

      Node(int data){
        this->data = data;
        next = NULL;
        cout<<"\nNode is created";
      }
};
//Deleting first position
Node *deleteFirstNode(Node *head){
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

void display(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<"==>"<<temp->data;
        temp = temp->next;
    }
}

int main(){
    Node *first = new Node(10);
     Node *second = new Node(20);
      Node *third = new Node(30);

      Node *head = first;
      //Connecting first node to second node
      head->next = second;
      //Connecting second node to third node
      head->next->next = third;
      cout<<"\nSingly Linked list Data ";
     display(head);
     
     cout<<"\nSingly Linked list after deleting first element";
     head = deleteFirstNode(head);
     cout<<"\n";
     display(head);
    return 0;
}
