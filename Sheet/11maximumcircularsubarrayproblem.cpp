#include <iostream>
#include <climits>
using namespace std;
int kadane(int arr[], int n)
{
    int cs = 0;
    int ms = INT_MIN;
    for (size_t i = 0; i < n; i++)
    {
        cs += arr[i];
        if (cs < 0)
        {
            cs = 0;
        }
        ms = max(cs, ms);
    }
    return ms;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(a, n);
    int totalsum = 0;
    for (size_t i = 0; i < n; i++)
    {
        totalsum += a[i];
        a[i] = -a[i];
    }
    wrapsum = totalsum + kadane(a, n);  // -- = +

    cout << max(wrapsum, nonwrapsum) << endl;
    return 0;
}
