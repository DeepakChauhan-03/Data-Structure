//WAP to delete elemets from a queue
//WAP to make a queue and insert element into it
#include<iostream>
using namespace std;
#define n 5
int queue[n];
int f = -1;
int r = -1;
void enqueue(int x)
{
    if(r==n-1)
    {
        cout<<"Queue is already full"<<endl;
        return;
    }
    if(f==-1)
    {
        f=0;
    }
    r++;
    queue[r] = x;
    cout<<"Element inseted successfully "<<x<<endl;
    }
    void show()
    {
        cout<<"\nElements of array are : "<<endl;
        for(int i = f; i<=r; i++){
            cout<<queue[i]<<" ";
        }
    }
    int peek(){
        return queue[f];
    }
    void myDelete()
    {
      if(f==-1)
      {
        cout<<"Queue is already empty "<<endl;
        return;
      }
      cout<<"\nDeleted Element from queue "<<queue[f]<<endl;
      f++;
      if(f>r)
      {
        f = -1;
        r = -1;
      }
    }
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    show();
    myDelete();
    show();
    myDelete();
    show();
    cout<<"\nElement on front pointer : "<<peek()<<endl;
    enqueue(80);
    show();
    return 0;
}