//WAP to find Last occurence in sorted array
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,3,3,3,3,4,4,5,5,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;  //target elment
    int low = 0, high = n-1;
    bool flag = false;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==x){
            if(arr[mid+1]!=x)
            {
                flag = true;
                cout<<"Last occurence is present at index : "<<mid;
                break;
            }
            else{
                low = mid+1;
            }
        }
        else if(arr[mid]<x)  low = mid+1;
        else high = mid-1;
    }
    if(flag==false) cout<<-1;
    return 0;
}