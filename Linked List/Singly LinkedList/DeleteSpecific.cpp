//WAP to delete node at Specific Position
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
//Deleting Node at specific Position
void deleteNodeAtPos(Node *head, int pos){
    pos--;
    Node *temp1 =head;
    Node *temp2 =head->next;
    while(pos>1){
        temp1 =temp1->next;
        temp2 = temp2->next;
        pos--;
    }
    Node *temp3;
    temp1->next = temp2->next;
    temp2 = temp2;
    delete temp3;
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
     
     cout<<"\nSingly Linked list after deleting Node at Specific Position ";
     deleteNodeAtPos(head,2);
     display(head);
    return 0;
}
