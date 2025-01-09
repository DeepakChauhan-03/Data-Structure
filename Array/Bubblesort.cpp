//WAP for Bubble sort
#include<iostream>
using namespace std;
int main(){
    int arr[]={43,24,63,36,56,47,97,875,67};
    int s = sizeof(arr)/4;
    cout<<"Before sorting : ";
    for(int i=0; i<s; i++)  cout<<arr[i]<<" ";
    cout<<endl;
    int temp;
    for(int i=0; i<s; i++)
    {
        for(int j=i+1; j<s; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
     cout<<"After sorting : ";
    for(int i=0; i<s; i++)  cout<<arr[i]<<" ";
    return 0;
}