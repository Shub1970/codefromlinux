#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*class Solution{
    public:
         int getLucky(string s,int k){
             string st;
             for(auto t:s){
                 st+=to_string(t-'a'+1);
             }
             while (k--)
             {
                 int sum=0;
                 for(auto ch:st){
                     sum+=(ch-'0');
                 }
                 st=to_string(sum);
             }
             return stoi(st);
         }
};
*/
//better solution
class Solution{
    public:
       int sumDigits(int num){
           int sum=0;
           while(num){
               sum+=num%10;
               num/=10;
               cout<<"sum:"<<sum<<endl;
               cout<<"num:"<<num<<endl;
           }
           return sum;
       }
       int getLucky(string s,int k){
           int sum=0;
           for(char ch:s){
               int val=ch-'a'+1;
               sum+=val<10?val:(val%10+val/10);
           }
           cout<<"initinalsum"<<sum<<endl;
           k-=1;
           while(k--&&sum>=10)sum=sumDigits(sum);
           return sum;
       }
};
int main(){
    string s = "leetcode";
    int  k = 2;
    Solution obj;
    cout<<obj.getLucky(s,k);
}
