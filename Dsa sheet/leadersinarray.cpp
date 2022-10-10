vector<int> leaders(int a[], int n){
        // Code here
        
        vector<int>v;
        int maxi=a[n-1];
        
        v.push_back(a[n-1]);
        
        for(int i=n-2;i>=0;i--){
            maxi=max(a[i+1],maxi);
            
            if(a[i]>=maxi){
                v.push_back(a[i]);
            }
            
        }
        
        reverse(v.begin(),v.end());
        return v;
        
    }
};