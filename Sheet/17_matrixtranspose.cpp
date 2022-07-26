#include <iostream>
using namespace std;
int main()
{
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

   for (size_t i = 0; i < 3; i++)
   {
       for (size_t j = i; j < 3 ; j++)
       {
           swap(a[i][j],a[j][i]);
       }
       
   }

      for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << a[i][j] <<"  ";
        }
        cout<<endl;
    }

    return 0;
}
   