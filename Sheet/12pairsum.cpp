#include <iostream>
#include <algorithm>
using namespace std;
bool pairsum(int arr[], int n, int k)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << i << "  " << j << endl;
                return true;
            }
        }
    }

    return false;
}
int main()
{
    int a[] = {5,10,15,20,25,30};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);

    int k = 55;
    cout<<pairsum(a,n,k)<<endl;
    return 0;
}