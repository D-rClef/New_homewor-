#include <iostream>
#include <cmath>

using namespace std;

void apelsin (int b, int c, int &k)
{
   if (b < c) {return;};
   if (b == c) {k++; return;}
   else
   {
       if ((b >= 7*c) && ((b % 7) == 0))
            {apelsin((b/7), c, k);};

       if ((b >= c*c) && (sqrt(b) == floor(sqrt(b))))
            {apelsin(sqrt(b), c, k);};

       if ((b >= (10*c + 1)) && ((b % 10) == 1))
            {apelsin((b/10), c, k);};

       if (b >= (c + 9))
            {apelsin((b - 9), c, k);};
   }
}

int main()
{
    int x, y, k = 0;
    cin >> x >> y;

    apelsin(y, x, k);
    if (k != 0) {cout << "Yes";}
    else {cout << "No";};

    return 0;
}
