class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    // see boyer moore
    int majorityElement(int a[], int size)
    {
        
        // your code here
        map<int,int>ma;
        int n=size/2;
        
        for(int i=0;i<size;i++){
            ma[a[i]]++;
        }
        
        for(int i=0;i<size;i++){
         if(ma[a[i]] > n){
             return a[i];
         }   
        }
       return -1; 
    }
};