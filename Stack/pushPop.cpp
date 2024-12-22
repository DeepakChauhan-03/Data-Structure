//Stack using Array
#include<iostream>
using namespace std;
#define N 6
int arr[N];
int top = -1;

int pop(){
    int r = -1;
    if(top==-1){  //step 1:Checking underflow Condition
        cout<<"Under Flow Condition";
        return r;
    }
    else{
        //step 2:Store top index value into another value
        r = arr[top];
        //step 3:Decrease top by 1
        top--;
        return r;
    }
}
void push(int data){
    //step 1: Check overflow condition
    if(top==N-1){
        cout<<"Overflow";
        return;
    }
    else{
        //step 2: Increment top by 1
        top++;
        //step 3:Assign data into top
        arr[top]=data;
        cout<<"\nData inserted successfully into the top of the stack : "<<data;
    }
}
int main(){
    push(2);
    push(4);
    push(6);
    push(8);
    push(10);
    push(12);
    cout<<endl<<endl;
    cout<<"Delete top element of the stack : "<<pop();
    cout<<"\nDelete top element of the stack : "<<pop();
}