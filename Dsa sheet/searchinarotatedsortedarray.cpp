#include <bits/stdc++.h> 

int bs(vector<int> arr,int low,int high,int k) {
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(arr[mid]==k) return mid;
            else if(arr[mid]>k)
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
}
int getpivot(vector <int> arr, int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=(s+e)/2;
        if(arr[mid]>=arr[0]) s=mid+1;
        else e=mid;
    }
    
    return s;
}
int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot=getpivot(arr,n);
    int ans;
    if(arr[pivot]<=k && k<=arr[n-1]){
       ans= bs(arr,pivot,n-1,k);
    }else{
        ans=bs(arr,0,pivot-1,k);
    }
    
    return ans;
}

