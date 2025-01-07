//WAP to insert element at start of array by using function
#include<iostream>
using namespace std;
int arr[100];
void addAtStart(int arr[],int n, int x){
     cout<<"Array without inserting element : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=n; i>=0; i--){
        arr[i+1]=arr[i];
    }
    arr[0]=x;
    n++;
    cout<<"\nArray after inserting element at statign position : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    cout<<"Enter elements of array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"\nEnter the element to be insert at first position : ";
    cin>>x;
    addAtStart(arr,n,x);
    return 0;
}