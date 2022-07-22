int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans=0;
    for (int i= 0 ; i< arr.size() ; i++){
        ans=ans^arr[i];          // it removes the duplicate element
    }
    
    for (int i = 1 ; i< arr.size() ; i++){
        ans=ans^i;                // now ans has all the elements except duplicate hence xoring with i will give ythe duplicate ones
    }
    
    return ans;
}