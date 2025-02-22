//WAP to implement vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v = {1,2,3,4,5,6,7,8,9};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.push_back(100);  //to insert at last
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back(); //to delete from last
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}