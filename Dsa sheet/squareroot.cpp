#include <bits/stdc++.h> 

int sqrtN(long long int N)
{
    long long int ans=-1;
    int s=0;
    int e=N;
    
    while(s<=e){
        long long int mid=s+(e-s)/2;
        long long int square = mid*mid;
        if(square==N){return mid;}
        else if(square<N) {ans=mid;s=mid+1;}
        else{e=mid-1;}
        
    }
    return ans;
}