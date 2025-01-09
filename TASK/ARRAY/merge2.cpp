#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter size of first array : ";
    cin>>m;
    cout<<"Enter size of second array : ";
    cin>>n;

    int arr[m],brr[n];
    int crr[m+n];
    cout<<"Enter element of first array : "<<endl;
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element of second array : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>brr[i];
    }
    if(m<n){
        for(int i =0; i <m; i++)
	{
		crr[i] = arr[i];
	}
	for(int i=m,j=0;i<n+m; i++, j++)
	{
		crr[i] = brr[j];
	}
    }
    if(m>n){
        for(int i =0; i <n; i++)
	{
		crr[i] = brr[i];
	}
	for(int i=n,j=0;i<n+m; i++, j++)
	{
		crr[i] = arr[j];
	}
    }
    cout<<"Array first : ";
	for(int i=0; i<m; i++) cout<<arr[i]<<" ";
	cout<<endl;	
    cout<<"Array second : ";
	for(int i=0; i<n; i++) cout<<brr[i]<<" ";
	cout<<endl;
    cout<<"Updated Merge Array : ";	
 	for(int i=0; i<m+n; i++) cout<<crr[i]<<" ";
	cout<<endl;	
    return 0;
}