//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int i=0,j=m-1,idx=-1;
    while(i<n && j>=0)
    {
        if(arr[i][j]==1)
        {
            idx=i;
            j--;
        }
        else
        i++;
    }
    return idx;
    }

};