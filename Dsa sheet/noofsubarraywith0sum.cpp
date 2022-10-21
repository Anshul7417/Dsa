//{ Driver Code Starts
//Initial function template for C++

#include<iostream>
using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
        map<ll,ll>mp;
        int c=0;
        ll curr=0;
        
        for(int i=0;i<n;i++){
            curr+=arr[i];
            
            if(curr==0){
                c++;
            }
            
            if(mp.find(curr)!=mp.end()){
                c+=mp[curr];
            }
            
            mp[curr]++;
        }
        
        return c;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends