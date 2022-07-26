#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    a[n]=-1;   //last element ko -1 kiya hai
    for (size_t i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    
    if(n==1){
        cout<<1<<endl;
        return 0;
    }

    int ans=0;
    int mx=-1;

    for (size_t i = 0; i < n; i++)
    {
        if(a[i]>mx and a[i]>a[i+1])
            ans++;
        mx=max(mx,a[i]);
    }

    cout<<ans<<endl;
    


    return 0;
}