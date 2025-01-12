#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i<nums.size(); i++){
            result = result^nums[i];
        }
         return result;
    }
};
int main(){
    vector<int> nums = {1,2,3,2,3,5,1};
    Solution obj;
    //obj.singleNumber(nums);
    cout<<"Single Number  : "<<obj.singleNumber(nums);
    return 0;
}