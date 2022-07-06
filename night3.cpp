#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

//abccccdd ==> dccaccd
/*
class Solution{
    public:
       int longestPalindrome(string s){
             int maxlength=0;
             int extravalue=0;
             unordered_map<char,int> hass;
             for(auto x:s){
                ++hass[x];
             }
             for(auto y:hass){
                 int temp=y.second/2;
                 if(temp>0){
                     maxlength+=temp;
                     extravalue+=y.second%2;
                 }
                 else{
                     extravalue+=y.second;
                 }
             }
            return (extravalue>0)?1+maxlength*2:maxlength*2;
       }

};
*/

// better solution
class Solution{
    public:
int longestPalindrome(string s) {
    int odds = 0;
    for (char c='A'; c<='z'; c++){
        odds += count(s.begin(), s.end(), c) & 1;
        }
    return s.size() - odds + (odds > 0);}
};

int main(){
    string s = "abccccdd";
    Solution obj;
    cout<<obj.longestPalindrome(s);

}

