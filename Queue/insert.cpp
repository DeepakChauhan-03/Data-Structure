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
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    return 0;
}