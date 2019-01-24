#include <iostream>
using namespace std;

void Azazel (int c, int d, int& k)
{
    if (c <= d) return;
    if (c > d)
    {
        if ((c % 3) == 0)
        {
            if ((c/3) == d) {k++;};
            Azazel((c/3), d, k);
        };

        if ((c % 2) == 0)
        {
            if ((c/2) == d) {k++;};
            Azazel((c/2), d, k);
        };

        if ((c - 1) == d) {k++;};
        Azazel((c-1), d, k);
    };
}

int main()
{
    int x, y, k = 0;
    cin >> x >> y;

    if (y < x)
    {
       cout << 0;
       return 0;
    };

    Azazel(y, x, k);
    cout << k;
    return 0;
}
