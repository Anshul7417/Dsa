
class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        int firstm=-100,secondm=-100;
        map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]+=1;
        }
        
        for(auto it:mp){
            if(it.second>firstm){
                firstm=it.second;
            }
        }
        
        string ans;
        for(auto it:mp){
            if(it.second!=firstm && it.second>secondm){
                ans=it.first;
                secondm=it.second;
            }
        }
        
        return ans;
    }
};