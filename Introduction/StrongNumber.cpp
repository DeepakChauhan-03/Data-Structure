//WAP to check strong number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int m = n;
    int result = 0;
    int fact = 1;
    int lastdigit ;
    for(; n!=0;){
        lastdigit = n%10;
        n = n/10;
        fact=1;
    for(int i=1; i<=lastdigit; i++){
        fact = fact*i;
       
    }
      result = result + fact;
    }
  if(result==m){
    cout<<"Strong number";
  }
  else{
    cout<<"Not a Strong Number";
  }
    return 0;
}