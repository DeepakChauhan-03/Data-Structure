//WAP to split two arrays
#include <iostream>
using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99};
	int s = sizeof(arr)/sizeof(arr[0]);
	int pos=0, ls=0, rs=0;
	cout<<"Enter the pos: ";
	cin>>pos;
	
	ls = pos;
	rs = s-ls;
	
	int lsarr[ls];
	int rsarr[rs];
	
	for(int i=0; i<ls; i++)
	{
		lsarr[i] = arr[i];
	}
	for(int i=ls,j=0; i<s; i++, j++)
	{
		rsarr[j] = arr[i];
	}
	cout<<"Arrays are"<<endl;
	for(int i=0; i<s; i++) cout<<arr[i]<<" ";
	cout<<endl;
	for(int i=0; i<ls; i++) cout<<lsarr[i]<<" ";
	cout<<endl;
	for(int i=0; i<rs; i++) cout<<rsarr[i]<<" ";
	cout<<endl;
	return 0;
}