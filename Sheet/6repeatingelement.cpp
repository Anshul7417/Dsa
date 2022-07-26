#include <iostream>
#include <climits>
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
    const int m = 1e5;
    int ind[m];
    for (size_t i = 0; i < m; i++)
    {
        /* code */
        ind[i] = -1;
    }
    int minimum = INT_MAX;
    for (size_t i = 0; i < n; i++)
    {
        if (ind[a[i]] != -1)
        {
            minimum = min(minimum, ind[a[i]]);
        }
        else
        {
            ind[a[i]] = i;
        }
    }

    if (minimum == INT_MAX)
        cout << -1 << endl;
    else
        cout << minimum + 1 << endl;

    return 0;
}
