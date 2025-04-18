//WAP for insertion sort
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Original array : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
    //Insertion sort
    for(int i = 1; i<n; i++){
        int j = i;
        while(j>=1  && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<"Sorted array : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}