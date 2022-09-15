//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& a) {
        //code here
        vector<vector<string>>ans;
        
        unordered_map<string,vector<string>>m;
        
        for(auto i:a){
            string temp=i;
            sort(temp.begin(),temp.end());
            m[temp].push_back(i);
        }
        
        for(auto i:m){
            vector<string>temp=i.second;
            ans.push_back(temp);
        }
        
        return ans;

    }
};