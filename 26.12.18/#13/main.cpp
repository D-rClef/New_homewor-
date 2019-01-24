#include <iostream>

using namespace std;

void Min (int** A, int size_, int n, int m, int k)
{
    int p = A[0][0], q;
    swap(A[k-1][0], A[n][0]);
    swap(A[k-1][1], A[n][1]);

    for (int i = k; i < size_; i++)
        if ((A[i][0] > n) && (A[i][0] <= p))
        {
            p = A[i][0];
            q = i;
        }
    cout << q << ' ';
    k++;

    Min(A, size_, q, p, k);
};

int main()
{
    int N, r;
    cin >> N;

    int** Laska = new int* [N];
    for (int i = 0; i < N; i++)
        {Laska[i] = new int [2];};

    for (int i = 0; i < N; i++)
    {
        cin >> Laska [i][0];
        cin >> Laska [i][1];
    };

    int t = Laska[0][1];
    for (int i = 0; i < N; i++)
    {
        if (t >= Laska[i][1])
        {
            t = Laska[i][1];
            r = i;
        };
    };

    cout << r << ' ';
    Min (Laska, N, r, t, 1);
};
