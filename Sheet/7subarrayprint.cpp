#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i; j < n; j++)
        {
            for (size_t k = i; k <= j; k++)
            {
                cout << arr[k] << " ";

            }
            cout<<endl;
            
        }
    }
    return 0;
}
