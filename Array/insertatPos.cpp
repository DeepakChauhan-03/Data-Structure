//WAP to insert element array at specific Position
#include<iostream>
using namespace std;
int arr[100];
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter Elements of array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Original Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int x,pos;
    cout<<"\nEnter the position : ";
    cin>>pos;
    cout<<"Enter the Element : ";
    cin>>x;
    for(int i=n; i>=pos; i--){
        arr[i+1]=arr[i];
    }
    arr[pos] = x;
    n++;
    cout<<"\nUpdated Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}