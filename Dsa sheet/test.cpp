//{ Driver Code Starts
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int>v;
        int i=0;
        
        for(i=0;i<n;i++){
            v[i]=arr1[i];
        }
        
        for(int j=0;j<m;j++,i++){
            v[i]=arr2[i];
        }
        
        sort(v.begin(),v.end());
        
        return v[k-1];
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[100],arr2[100];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends