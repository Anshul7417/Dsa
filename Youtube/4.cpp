#include <iostream>
using namespace std;

int main() {
int p;
for (size_t i = 6; i >= 1; i--)
{
    for (size_t j = 1; j <= 5; j++)
    {
        p = 5 - j + 1 ;
        cout << p << " ";
    }

    cout << endl;
}

return 0;

}