#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int a=10;
    for(int i=0; i<10; i++){
        arr[i]=a;
        a=a+10;
    }
    for(int i=0; i<10; i++){
        
        cout<<arr[i]<<" "<<&arr<<endl;
    }
    return 0;
}