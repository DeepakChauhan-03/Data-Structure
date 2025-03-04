//WAP to check the array is sorted or not
#include<iostream>
using namespace std;
int main(){
    int n;
    bool flag = true;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i =0; i<n ;i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]>=arr[i+1])
        {
            flag = false;
            break;
        }
    }
    if(flag==true)  cout<<"Array is sorted "<<endl;
    else  cout<<"Array is not sorted";
    return 0;
}