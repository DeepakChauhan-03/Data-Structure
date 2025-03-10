//Node creation for singly Linked List
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
      cout<<head->data<<"==>"<<head->next->data<<"===>"<<head->next->next->data;
    return 0;
}
