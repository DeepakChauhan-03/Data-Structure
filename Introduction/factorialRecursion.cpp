//WAP to print factorial of a number by using Recursion
#include<iostream>
using namespace std;
int fact(int);
    int fact(int n){
    if(n==0){  
        return 1;
    }
    else{   
        return n*fact(n-1);
    }
    }
    int main(){
      int n;
      cout<<"Enter any number : ";
      cin>>n;
      cout<<"Factorial is : "<<fact(n);
      return 0;
    }
    
