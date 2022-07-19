#include<iostream>
using namespace std;

int iseven(int n){
    if (n&1)
    {   
        return 0;
    }
    
    return 1;
}

int main()
{
    if(iseven(6))
    cout<<"even"<<(6&1);
    else
    cout<<"Odd";
    return 0;
}