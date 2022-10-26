class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        // while(n!=0){
        //     if(n&1 and k==0) return true;
        //     n=n>>1; k--;
        // }
        // return false;
        
         n=n>>k;

        return n&1==1;
    }