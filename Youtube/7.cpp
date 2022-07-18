#include <iostream>
using namespace std;

int main() {
for (size_t i = 1; i <= 4; i++)
{
    for (size_t j = 1; j <= i; j++)
    {
        cout << i << " ";
    }

    cout << endl;
}

return 0;

}