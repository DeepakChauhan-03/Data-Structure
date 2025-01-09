//WAP for Linear Search
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter size of array : ";
     cin>>n;
     int arr[n];
     cout<<"Enter Elements of array : "<<endl;
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     int key;
     cout<<"Enter the searching Element : ";
     cin>>key;
     for(int i=0; i<n; i++){
        if(arr[i]==key){
            cout<<"Key value found at index "<<i;
            break;
        }
     }
    return 0;
}