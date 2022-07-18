#include <iostream>
using namespace std;

int main() {
for (size_t i = 0; i <= 3; i++)
{
    for (size_t j = 1; j <= i+1; j++)
    {
        cout << j+i<<" ";
    }

    cout << endl;
}

return 0;

}