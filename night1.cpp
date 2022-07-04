#include<iostream>
#include<vector>
#include<numeric>
#include<unordered_map>
using namespace std;
 //!=
/*class Solution{
    public:
    string mergeAlternately(string word1,string word2){
        string temp;
        size_t i=min(word1.size(),word2.size());
        string longstr=(i!=word1.size())?word1:word2;
        for(int t=0;t<i;t++){
            temp.push_back(word1[t]);
            temp.push_back(word2[t]);
        }
        if(longstr.size()!=i){
            for(int t=i;t<longstr.size();t++){
                temp.push_back(longstr[t]);
            }
        }
        return temp;
    }
};

int main(){
    string word1 = "ab", word2 = "pqrs";
    Solution s;
    cout<<s.mergeAlternately(word1,word2);
}

//better solution

string mergeAlternately(string w1,string w2){
    int i=0,j=0;
    string res;
    while(i<w1.size()&&j<w2.size()){
        res+=string()+w1[i++]+w2[j++];
    return res+w1.substr(i)+w2.substr(j);
    }
}
*/

//second question

class Solution{
    public:
    bool isAnagram(string s,string t){
        vector<int>arr(26);
        for(auto x:s){
            ++arr[x-'a'];
        }
        for(auto y:t){
            if(arr[y-'a']>0){
                --arr[y-'a'];}
            else{
                ++arr[y-'a']
            }
        }
        return (accumulate(arr.begin(),arr.end(),0))?false:true;
    }
};

//better solution
/*class Solution{
    public:
    bool isAnagram(string s,string t){
        if(s.length()!=t.length())return false;
        int n=s.length();
        unordered_map<char,int> counts;
        for(int i=0;i<n;i++){
            counts[s[i]]++;
            counts[t[i]]--;
        }
        for(auto count:counts)
             if(count.second)return false;
        return true;
    }
};

int main(){
    string s = "rat";
    string t = "cat";
    Solution obj;
    cout<<obj.isAnagram(s,t);
}
*/
