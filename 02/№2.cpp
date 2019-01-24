#include <iostream>
using namespace std;

void Mammon (int b, int c, int d, int &k)
{
   if  ((b <= c) || (b == d)) {return;}
   else
   {
       if ((b % 2) == 1)
       {
           if (((b-1)/2) == c) {k++;};
           Mammon(((b-1)/2), c, d, k);
       };

       if ((b % 2) == 0)
       {
           if ((b/2) == c) {k++;};
           Mammon((b/2), c, d, k);
       };

       if ((b % 10) == 0)
       {
           if ((b/10) == c) {k++;};
           Mammon((b/10), c, d, k);
       };

        if ((b - 1) == c) {k++;};
        Mammon((b-1), c, d, k);
   };
}

int main()
{
    int X, Y, Z, k = 0;
    cin >> X >> Y >> Z;

    Mammon(Y, X, Z, k);
    cout << k;

    return 0;
}
