#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    int a = 10;
    for(int i = 0; i<n; i++){
        arr[i] = a;
    }
    cout<<"After filling the value array is :"<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}