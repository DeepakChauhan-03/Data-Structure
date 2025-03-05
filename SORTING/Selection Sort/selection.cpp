//WAP for selection sort
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5,3,1,4,2};
    int n = sizeof(arr)/4;
    cout<<"Before Sorting : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Selection sort
    for(int i=0; i<n-1; i++){
        int min = INT_MAX;
        int mindex = -1;
        //to find minimum element
        for(int j= i; j<n; j++){
            if(arr[j]<min)
            {
                min = arr[j];
                mindex = j;
            }
        }
        swap(arr[i],arr[mindex]);
    }
    cout<<"Sorted Elements : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}