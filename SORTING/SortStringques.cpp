//WAP to sort the string in decreasing order
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "AZYZXBDJKX";
    string str;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='X'){
             str.push_back(s[i]);
        }
    }
    sort(str.begin(),str.end());
    reverse(str.begin(), str.end());
    cout<<"After sorting : ";
    for(int i = 0; i<str.size(); i++){
        cout<<str[i]<<" ";
    }
    return 0;
}