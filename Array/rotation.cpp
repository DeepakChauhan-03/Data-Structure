#include<iostream>
using namespace std;
int main(){
    int n,pos,mid;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter position : ";
    cin>>pos;
    mid = (pos+n)/2;

    cout<<"Original array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    for(int i=pos, j=1; i<mid; i++,j++)
    {
        int temp = arr[i];
        arr[i] = arr[n-j];
        arr[n-j] = temp;
    }
     cout<<"\nNew array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}