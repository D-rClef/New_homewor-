#include <iostream>
using namespace std;
int main()
{
    int n, x;

    cin >> n >> x;

    int* MrProper = new int [n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        cin >> MrProper[i];
    };

    int b = MrProper[n];

    for (int i = (n - 1); i >= 1; i--)
    {
        b = MrProper[i] + b * x;
    };

    cout << (MrProper[0] + b * x);
    return 0;
}
