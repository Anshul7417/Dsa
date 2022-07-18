#include <iostream>
using namespace std;

int main() {
int p=1;
for (size_t i = 0; i < 3; i++)
{
    for (size_t j = 1; j <= 3; j++)
    {
        cout << p << " ";
        p++;
    }

    cout << endl;
}

return 0;

}