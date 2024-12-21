//Performing push Operation in stack
#include<iostream>
using namespace std;
#define N 5
int arr[N];
int top=-1;
void push(int data){
//step1: Checking the overflow condition
if(top==N-1){
cout<<"\nOverflow";
return;
}
else{
//step2: Increment Top By 1
top++;//0
//step3:Assign data into top
arr[top]=data;
cout<<"\nData insert success into the top of the stack : "<<data;
    }
}
int main(){
push(10);
push(20);
push(30);
push(40);
push(50);
push(60);
return 0;
}