//WAP to delete first element of Array
#include<iostream>
using namespace std;
void deleteAtFirst(int arr[], int s){
    cout<<"Original Array : ";
    for(int i=0; i<s; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<s; i++){
        arr[i] = arr[i+1];
    }
    cout<<"Updated Array : ";
    for(int i=0; i<s-1; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={11,22,33,44,55,66,77};
    int s = sizeof(arr)/sizeof(arr[0]);
    deleteAtFirst(arr,s);
    s--;
    return 0;
}