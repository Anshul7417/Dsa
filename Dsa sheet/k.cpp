// Given an array arr[] of size N and an element k. The task is to find all elements in array that appear more than n/k times.


{

    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int,int> m;
        int x= n/k,count = 0;
        for(int i =0 ;i<n ;i++){
            m[arr[i]]+=1;
        
        if(m[arr[i]]>x){
            count++;
            m[arr[i]]=-1000;
        }}
        
        return count;
    }