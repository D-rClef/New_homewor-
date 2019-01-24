#include <iostream>

using namespace std;

int main()
{
    int* ost = new int [99];
    int N, D, K;
    cin >> N;
    while (N > 0)
    {
        cin >> D >> K;
        ost[(K % D)]++;
        N--;
    };

    int max_ = 0, n_max_ = -1;
    for (int i = 0; i < 99; i++)
    {
        if ((ost[i] > max_) || ((ost[i] == max_) && (i > n_max_)))
            {max_ = ost[i];
            n_max_ = i;};
    };

    cout << n_max_;
}
