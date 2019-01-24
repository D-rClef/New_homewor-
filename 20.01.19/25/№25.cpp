#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    cin >> N;
    int* rofl = new int [N];

    for (int i = 0; i < N; i++)
    {
        cin >> rofl[i];
        if (rofl[i] < 38) {continue;}
        else
        {
            if ((rofl[i] % 38) == 0) {rofl[i] = 0;}
            else
            {
                while (rofl[i] > 38) {rofl[i] /= 38;};
            };
        };
    };

    for (int i = 0; i < (N - 4); i++)
    {
        if (rofl[i] == 0) {sum += (N - i);}
        else
        {
            for (int j = (i + 4); j < N; j++)
            {
                if (((rofl[i] * rofl[j]) % 38) == 0) {sum++;};
            };
        };
    };

    cout << sum;
}
