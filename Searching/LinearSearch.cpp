//Linear Search
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool flag = false;
    int k;
    cout<<"Enter the target element of array : ";
    cin>>k;
    int idx = -1;
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            flag = true;
            idx = i;
            break;
        }
    }
    if(flag==true) cout<<"Taget is found at index "<<idx;
    else{
        cout<<"Target not found!!!";
    }
    return 0;
}