//WAP to print the character that is occuring most number of times 
//Note -- valid only for lowercase string 
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter any string value : ";
    getline(cin,s);
    vector<int> arr(26,0);
    for(int i = 0; i<s.size(); i++)
    {
        char ch = s[i];
        int ascii = (int) ch;
        arr[ascii - 97]++;
    }
    int mx = 0;
    for(int i = 0; i<26; i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
    }
    for(int i = 0; i<26; i++)
    {
        if(arr[i]==mx){
            int ascii = i+97;
            char ch = (char) ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }
    return 0;
}
