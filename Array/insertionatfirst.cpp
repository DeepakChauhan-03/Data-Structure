//WAP to insert element at starting position in an array
#include<iostream>
using namespace std;
int arr[100];
int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    cout<<"Enter Elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array without inserting element : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int x;
    cout<<"\nEnter the element to be inserted at first position : ";
    cin>>x;
    for(int i=n; i>=0; i--){
        arr[i+1]=arr[i];
    }
    arr[0]=x;
    n++;
    cout<<"\nArray after inserting element at statign position : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}