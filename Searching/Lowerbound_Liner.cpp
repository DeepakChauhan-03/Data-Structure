//WAP to find lower bound  of x by using linear search
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,12,11};
    int n = sizeof(arr)/4;
    int x = 8;
    for(int i = 0; i<n; i++){
        if(arr[i]>x){
            cout<<arr[i-1];
            break;
        }
    }
    return 0;
}