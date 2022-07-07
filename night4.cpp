#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
class Solution{
    public:
        vector<int> intersection(vector<int>&nums1,vector<int>&nums2){
            unordered_set<int>num1;
            unordered_map<int,int>bar;
            vector<int>res;
            for(auto re:nums2){
                bar[re] = 1;
            }
            for(auto x:nums1){
                num1.insert(x);
            }
            for(auto y:num1){
                if(bar.count(y)){
                    res.push_back(y);
                }
            }
            return res;
        }
};
int main(){
    vector<int>nums1{4,9,5}, nums2{9,4,9,8,4};
    Solution sol;
    auto res=sol.intersection(nums1,nums2);
    for(auto x:res){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
        
}
///