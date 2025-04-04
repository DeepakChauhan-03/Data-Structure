//WAP to print element of given index
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
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtStart(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node *t = new Node(val); //t is newNode
            Node *temp = head;
            for(int i=1; i<=idx-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
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

    int getAtIdx(int idx){
       if(idx<0 || idx>=size){
      cout<<"Invalid Index";
      return -1;
       }
      else if(idx==0) return head->val;
      else if(idx==size-1) return tail->val;
      else{
        Node *temp = head;
        for(int i=1; i<=idx; i++){
            temp = temp->next;
        }
        return temp->val;
      } 
    }
};

int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtStart(200);
    ll.insertAtEnd(30);
    ll.display();
    ll.insertAtIdx(1,69);
    ll.display();
    cout<<ll.getAtIdx(3);
    return 0;
}