class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
       int m[256] = {0};
       for(int i=0; i<A.size(); i++) {
           m[A[i]]++;
       }
       for(int i=0; i<B.size(); i++) {
           m[B[i]]--;
       } 
       for(int i=1; i<=256; i++) {
           if(m[i] != 0) {
               return -1;
           }
       }
       int i=A.size()-1, j = B.size()-1;
       int count = 0;
       while(i>=0 && j>=0) {
           if(A[i] == B[j]) {
               i--; j--;
           }
           else {
               i--;
               count++;
           }
       }
       return count;
    }
};