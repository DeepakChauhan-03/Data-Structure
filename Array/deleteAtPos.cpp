//WAP to delete element at specific position from an array
#include<iostream>
using namespace std;
int main(){
    int arr[]={11,22,33,44,55,66,77};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array : ";
    for(int i=0; i<s; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pos = 1;
    while(pos!=-1){
        cout<<"Enter position : ";
        cin>>pos;
        if(pos<0){
            break;
        }
        for(int i=pos; i<s; i++){
            arr[i] = arr[i+1];
        }
        s--;
        cout<<"Updated Array : ";
        for(int i=0; i<s; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}