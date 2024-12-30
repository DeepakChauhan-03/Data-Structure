//WAP to delete last node of a Singly Linked List
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
//Deleting Last Position
Node *deleteLastNode(Node *head){
    Node *temp = head;
    if(head->next==NULL){
        head = NULL;
        delete temp;
    }
    else{
        while(temp->next->next!=NULL){
            temp =temp->next;
        }
        Node *temp2 = temp->next;
        temp->next = NULL;
        delete temp2;
    }
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
     
     cout<<"\nSingly Linked list after deleting Last element ";
     deleteLastNode(head);
     display(head);
    return 0;
}
