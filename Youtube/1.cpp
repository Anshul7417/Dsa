#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = a + 1;

    if ((a = 3) == b)
    {
        cout << a;
    }
    else
    {
        cout << a + 1;
    }

    // if(a==9){
    //     cout<<"a";
    // }

    // if(a>0){
    //     cout<<"b";
    // }else{
    //     cout<<"c";
    // }

    return 0;
}