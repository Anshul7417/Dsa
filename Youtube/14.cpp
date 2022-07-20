#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    for (size_t i = 0; i < size/2; i++)
    {
        swap(arr[i],arr[size-i-1]);
    }
    
}

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    reverse(arr,8);
    for (size_t i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
