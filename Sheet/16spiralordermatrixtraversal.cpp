#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int rs = 0, re = n - 1, cs = 0, ce = m - 1;

    while (rs <= re and cs <= ce)
    {
        //for rs
        for (size_t col = cs; col <= ce; col++)
        {
            cout << a[rs][col] << " ";
        }

        rs++;

        //for ce
        for (size_t row = rs; row <= re; row++)
        {
            cout << a[row][ce] << " ";
        }

        ce--;

        //for re
        if(rs<=re){
        for (int col = ce; col >= cs; col--)
        {
            cout << a[re][col] << " ";
        }
        }
        re--;

        //for cs
        if(cs<=ce){
        for (int row = re; row >= rs; row--)
        {
            cout << a[row][cs] << " ";
        }
        }

        cs++;
    }

    return 0;
}