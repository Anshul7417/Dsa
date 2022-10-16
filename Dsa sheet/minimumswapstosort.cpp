class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    
	    // brute selection sort because it does in min no of comparisions
	    int c=0;
	    vector<pair<int,int>> v(nums.size());
	    
	    for(int i=0;i<nums.size();i++) v[i]={nums[i],i};
	    
	    sort(v.begin(),v.end());
	    
	    for(int i=0;i<nums.size();i++){
	        if(v[i].second == i) continue;
	        else{
	            c++;
	            swap(v[i],v[v[i].second]);
	            i--;
	        }
	    }
	    
	    return c;
	}