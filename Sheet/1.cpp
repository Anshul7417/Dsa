#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int A[5] = {5, -1, -4, 56, 89};
    int N = 5;
    int minimum = INT_MIN;
    int maximum = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        minimum = max(minimum, A[i]);
        maximum = min(maximum, A[i]);
    }
    cout << minimum + maximum;
    return 0;
}
