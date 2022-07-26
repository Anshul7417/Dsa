#include <iostream>
#include <algorithm>
using namespace std;
bool pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << "  " << high << endl;
            return 1;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else
            low++;
    }
    return 0;
}

int main()
{
    int a[] = {5, 10, 15, 20, 25, 30};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);

    int k = 55;
    cout << pairsum(a, n, k) << endl;
    return 0;
}