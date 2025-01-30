//WAP for bubble sort
#include<iostream>
using namespace std;
void bubbleSort(int arr[], int s){
    for(int i=0; i<s; i++){
        for(int j = i+1; j<s; j++){
            if(arr[i]>arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}
void show(int arr[], int s){
    for(int i = 0; i<s; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {11,2,3,44,55,2,4,6,88,4,99,7,8,5};
    int n = sizeof(arr)/4;
    show( arr, n);
    bubbleSort(arr, n);
    show(arr, n);
    return 0;
}