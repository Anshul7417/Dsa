#include<iostream>
#include<climits>
using namespace std;
int main()
{   
    
    int n,sum=0;
    cin>>n;
    int arr[n];
    for (size_t i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    for (size_t i = 0; i < n; i++)
    {      sum=0;
        for (size_t j = i; j < n; j++)
        {
            sum+=arr[j];
            cout<<sum<<endl;
        }
        
    }

    return 0;
}