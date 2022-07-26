#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int k;
    cin>>k;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if(a[i][j]==k){
            cout<<"element found";
            return 0;
            }
        }
        
    }
    

    return 0;
}