#include <iostream>

using namespace std;

void qsort(int* A, int p, int q)
{
    int i = p, j = q;
    int x = A[(p + q) / 2];

    do
    {
        while (A[i] < x) {i++;};
        while (A[j] > x) {j--;};

        if (i < j)
        {
            swap(A[i], A[j]);
            i++;
            j--;
        };
    } while (i <= j);

    if (j > 0) {qsort(A, p, j);};
    if (i < q) {qsort(A, i, q);};
}

int main()
{
    int n, k;
    cin >> n;

    int* Domestos = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin >> Domestos[i];
    };
    cin >> k;

    qsort (Domestos, 0, (n-1));

    cout << Domestos[k-1];

    return 0;
}
