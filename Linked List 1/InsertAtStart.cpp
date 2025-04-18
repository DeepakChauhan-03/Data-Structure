//WAP to insert Node at the beggining of the Linked List
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class LinkedList{
    public:
    Node *head;
    Node *tail;
    int size;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    // 1 2 3 4 5 6
    void insertAtEnd(int val){
        Node *temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtStart(int val){
        Node *newNode = new Node(val);
        if(size==0) head = tail = newNode;
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
      cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.insertAtStart(200);
    ll.insertAtEnd(30);
    ll.display();
    return 0;
}