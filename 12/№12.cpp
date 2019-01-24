#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int* bitkoin = new int [N];
    for (int i = 0; i < N; i++) {cin >> bitkoin[i];};
    int min_ = bitkoin[0] + bitkoin[5];
    for (int i = 0; i < (N-5); i++)
    {
        if ((bitkoin[i] + bitkoin[i+5]) < min_) {min_ = bitkoin[i] + bitkoin[i+5];};
    };
    cout << min_;
    return 0;
}
