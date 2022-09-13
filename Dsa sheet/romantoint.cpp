//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        map<char,int>mp;
        int ans=0;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        
        for(int i=0;i<str.length();i++){
            if(mp[str[i]]<mp[str[i+1]] and i+1<str.length()) {ans=ans+(mp[str[i+1]]-mp[str[i]]);i++;}
            else {ans=ans+mp[str[i]];}
        }
        
        return ans;
    }
};