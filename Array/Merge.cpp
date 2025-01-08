//WAP to merge two arrays
#include <iostream>
using namespace std;

int main()
{
	int n1,n2,n;
	int arr[] = {1,2,3,4,5,6};
	int brr[] = {7,8,9,10,11};
	
	n1 = sizeof(arr)/4;
	n2 = sizeof(brr)/4;
	n = n1+n2;
	int crr[n];
	for(int i =0; i <n1; i++)
	{
		crr[i] = arr[i];
	}
	for(int i=n1,j=0;i<n; i++, j++)
	{
		crr[i] = brr[j];
	}
	
	cout<<"Array first : ";
	for(int i=0; i<n1; i++) cout<<arr[i]<<" ";
	cout<<endl;	
    cout<<"Array second : ";
	for(int i=0; i<n2; i++) cout<<brr[i]<<" ";
	cout<<endl;
    cout<<"Updated Merge Array : ";	
 	for(int i=0; i<n; i++) cout<<crr[i]<<" ";
	cout<<endl;	
}