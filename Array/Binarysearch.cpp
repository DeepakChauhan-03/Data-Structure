//WAP for binary Search
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key value : ";
    cin>>key;
    int low,mid,high;
    low=0;
    high=n-1;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==key){
            cout<<"Key value found at index : "<<mid<<endl;
            break;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return 0;
}