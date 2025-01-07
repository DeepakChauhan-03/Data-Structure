//WAP to insert an element at last position
#include<iostream>
using namespace std;
int arr[100];
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Original Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int x;
    cout<<"\nEnter the element to be inserted at last : ";
    cin>>x;
    arr[n] = x;
    n++;
    cout<<"Updated Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}