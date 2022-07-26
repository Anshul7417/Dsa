#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    const int N = 1e6+2;
    bool check[N];
    for (size_t i = 0; i < N; i++)
    {
        check[i] = 0;
    }

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            check[a[i]] = 1;
        }
    }
    int ans = -1;
    for (size_t i = 1; i < N; i++)  // check from 1 bcoz 0 index is for element 0;
    {
        if (check[i] == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}