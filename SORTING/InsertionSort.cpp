//WAP for insertion sort
#include<iostream>
using namespace std;
void insertionSort(int arr[], int s){
    for(int i=1; i<s; i++){
        int key = arr[i];
        int j = i-1;
        while (j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
    insertionSort(arr,n);
    show(arr, n);
    return 0;
}