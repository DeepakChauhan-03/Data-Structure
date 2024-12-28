#include<iostream>
#include <vector>
using namespace std;
int main(){
     vector <int> arr={3,2,4};
    int target = 6;
    vector <int> x(2);

    for(int i=0; i<arr.size(); i++){
        for(int j=1; j<arr.size(); j++){
            if(arr[i]+arr[j]==target){
                
                x[0]=j;
                x[1]=i;
                break;
            }
        }
    }
    cout<<"Vector "<<endl;
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    return 0;
}