//WAP to push data into stack and print it
#include<iostream>
using namespace std;
int stack[5], n=5, top = -1;
void push(int x){
    if(top==n-1){
        cout<<"Stack if full "<<endl;
        return;
    }
    else{
        top++;
        stack[top] = x;
    }
}
void display()
{
    cout<<"Elements of stacks are : "<<endl;
    cout<<endl;
    for(int i=top; i>=0; i--)
    {
        cout<<"|\t"<<stack[i]<<"\t|"<<endl;
        cout<<"_________________"<<endl;
    }
}
int main()
{
    push(11);
    push(12);
    display();
    push(13);
    push(14);
    push(15);
    display();
    push(16);
    push(17);
    display();
    return 0;
}