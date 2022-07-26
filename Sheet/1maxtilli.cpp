#include<iostream>
#include<climits>
using namespace std;
int main()
{   
    
    int n,m=INT_MIN;
    cin>>n;
    int arr[n];
    for (size_t i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        m=max(arr[i],m);
        cout<<m<<endl;
    }
    
    
    return 0;
}