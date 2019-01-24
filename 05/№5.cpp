#include <iostream>
#include <vector>

using namespace std;

void unknown (int* &a, int b, int c, int &d)
{
    if (c == b) return;

    if (((c % 2) == 0) && ((c/2) >= b))
    {
        d++;
        a[d] = 4;
        unknown(a, b, (c/2), d);
    }
    else
    {
        if ((c - 5) >= b)
        {
            d++;
            a[d] = 3;
            unknown(a, b, (c - 5), d);
        }
        else
        {
            if ((c - 4) >= b)
            {
                d++;
                a[d] = 2;
                unknown(a, b, (c - 4), d);
            }
            else
            {
                if ((c - 1) >= b)
                {
                    d++;
                    a[d] = 1;
                    unknown(a, b, (c - 1), d);
            };
        };
    };
}

int main()
{
    int X, Y, n = -1;
    cin >> X >> Y;

    int* comand = new int [32];
    unknown(comand, X, Y, n);

    while (n >= 0)
    {
        cout << comand[n] << " ";
        n--;
    };

    return 0;
}
