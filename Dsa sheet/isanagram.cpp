bool isAnagram(string a, string b){
        
        // Your code here
        unordered_map<char,int>mp;
        
        int s=a.length();
        int t=b.length();
        
        if(s!=t) return false;
        
        for(int i=0;i<s;i++){
            mp[a[i]]++;
            mp[b[i]]--;
        }
        
        for(auto it:mp){
            if(it.second!=0){
                return false;
            }
        }
        
        return true;
        
    }