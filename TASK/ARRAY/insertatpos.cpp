//WAP to insert element at a specific position in a array
#include<iostream>
using namespace std;
int arr[100];
void insertAtPos(int arr[], int n, int x, int pos){
     cout<<"Original Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=n; i>=pos; i--){
        arr[i+1]=arr[i];
    }
    arr[pos] = x;
    n++;
    cout<<"\nUpdated Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter element of Array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pos,x;
    cout<<"Enter the element : ";
    cin>>x;
    cout<<"Enter the Position : ";
    cin>>pos;
    
    insertAtPos(arr,n,x,pos);
    return 0;
}