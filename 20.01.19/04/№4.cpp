#include <iostream>
#include <cmath>

using namespace std;

void apelsin (int b, int c, int d, int &k)
{
   if ((b < c) || (b == d)) {return;};
   if (b == c) {k++; return;}
   else
   {
       if ((b >= 3*c) && ((b % 3) == 0))
            {apelsin((b/3), c, d, k);};

       if ((b >= c*c) && (sqrt(b) == floor(sqrt(b))))
            {apelsin(sqrt(b), c, d, k);};

       if ((b >= (10*c + 2)) && ((b % 10) == 2))
            {apelsin((b/10), c, d, k);};

       if (b >= (c + 5))
            {apelsin((b - 5), c, d, k);};
   }
}

int main()
{
    int x, y, z, k = 0;
    cin >> x >> y >> z;

    apelsin(y, x, z, k);
    if (k != 0) {cout << "Yes";}
    else {cout << "No";};

    return 0;
}
