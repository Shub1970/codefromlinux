//i am going to use slide window
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int countGoodSubstrings(string s){
            int repeat=0;
            int count;
            if(s.length()<3)return 0;
            vector<int>mp(26);
            for(int i=0;i<s.length();i++){
                mp[s[i]-'a']++;
                if(mp[s[i]-'a']==2)repeat++;
                if(i<2)continue;    
                if(repeat==0)count++;
                //let shrink the window
                mp[s[i-2]-'a']--;
                if(mp[s[i-2]-'a']==1)repeat--; 
        }
        return count;
    }
};

int main(){
    string st = "xyzzaz";
    Solution s;
    cout<<s.countGoodSubstrings(st);

}