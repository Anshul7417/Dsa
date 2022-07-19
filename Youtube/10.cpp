#include<iostream>
#include<math.h>
using namespace std;

// negative no stored

int main()
{
    int n,ans=0,i=0;
    cin>>n;
    int p=abs(n);
    while(p!=0){ 
        // this is decimal to binary
        int bit = p & 1;
        ans=(bit*pow(10,i))+ans;   //this formula reverses
        p=p>>1;
        i++;

    }
    int binary = (~ans)+1;
    cout<<binary;
    return 0;
}