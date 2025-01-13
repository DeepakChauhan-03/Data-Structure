#include<iostream>
using namespace std;
int main(){
    int err[3];
    cout<<"Enter size of first array : ";
    cin>>err[0];
    cout<<"Enter size of second array : ";
    cin>>err[1];
    cout<<"Enter size of third array : ";
    cin>>err[2];
    int temp;
    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(err[i]>err[j])
            {
                temp = err[i];
                err[i] = err[j];
                err[j] = temp;
            }
        }
    }
     cout<<"After sorting : ";
    for(int i=0; i<3; i++)  cout<<err[i]<<" ";
    int m,n,o;
    m = err[0];
    n = err[1];
    o = err[2];
    int arr[m], brr[n] , crr[o];
    
    return 0;
}