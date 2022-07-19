//binary to decimal
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,i=0,ans=0;
    cin>>n;

    while(n!=0){
        // int bit = n&1;
        // we have to take input as digits not binary
        int digit=n%10;
        if(digit==1){
            ans=pow(2,i)+ans;
        }
        i++;
        n=n/10;
    }

    cout<<ans;
    return 0;
}