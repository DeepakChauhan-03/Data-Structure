//WAP for bubble sort
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the elements : "<<endl;
    for(int i = 0; i<arr.size(); i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++){
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Sorted elements are : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}