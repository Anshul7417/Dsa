{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26]={0};
        for(int i = 0; i< str.size();i++){
            char ch = str[i];
            int no=ch-'a';
            arr[no]++;
        }
        int maxi=-1,ans=0;
        for(int i =0;i<25;i++){
            if(maxi<arr[i]){
                ans=i;
                maxi=arr[i];
            }
        }
        return 'a'+ans;
    }

};