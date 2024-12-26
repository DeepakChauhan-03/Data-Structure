//WAP to insert Node at specific Position
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
//aDDING a Specific Position
void addAtPos(Node *head, int pos, int data){
    Node *newNode = new Node(data);
    Node *temp1 = head;
    Node *temp2 = head->next;
    pos--;
    while(pos>1){
        temp1 = temp1->next;
        temp2 = temp2->next;
        pos--;
    }
    temp1->next = newNode;
    newNode->next = temp2;
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
     addAtPos(head,2,55);
     cout<<"Linked List after Node adding at the last : "<<endl;
     display(head);
    return 0;
}
