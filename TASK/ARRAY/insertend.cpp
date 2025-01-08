//WAP to insert element at end of Array using function
#include<iostream>
using namespace std;
int arr[100];
void insertAtEnd(int arr[], int n, int x){
    cout<<"Original Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    arr[n] = x;
    n++;
    cout<<"Updated Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter Elements of array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to be inserted at end : ";
    cin>>x;
    
    insertAtEnd(arr,n,x);
    return 0;
}