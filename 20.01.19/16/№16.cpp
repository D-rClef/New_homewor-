#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int* sigma = new int [N];
    for(int i = 0; i < N; i++)
    {
        cin >> *(sigma + i);
    };

    int alfa = 0, omega = 0;
    while (alfa < (N - 6))
    {
        for(int j = (alfa + 6); j < N; j++)
        {
            if (((sigma[alfa] % 2) == 1) && ((sigma[j] % 2) == 1)) continue;
            omega = max(omega, (sigma[alfa] * sigma[j]));
        };
    };

    cout << omega;

    return 0;
}
