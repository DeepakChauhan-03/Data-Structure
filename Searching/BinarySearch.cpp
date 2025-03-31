//WAP for binary search
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/4;
    int x = 4; //target element
    int low = 0, high = n-1;
    bool flag = false;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<"Target element is found at : "<<mid<<" index."<<endl;
            break;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else if(arr[mid]>x){
            high = mid-1;
        }
    }
    if(flag==false){
         cout<<"Element is not found."<<endl;
    }
    return 0;
}