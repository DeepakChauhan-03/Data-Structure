//WAP to insert node at last 
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
//aDDING NODE AT THE LAST 
Node *addAtLast(Node *head, int data){
    Node *newNode = new Node(data);
    if(head==NULL){
        head=newNode;
    }
    else{
        Node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next=newNode;
    }
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
     head = addAtLast(head,50); //head , Data
     cout<<"Linked List after Node adding at the last : "<<endl;
     display(head);
    return 0;
}
