#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int* bitkoin = new int [N];
    for (int i = 0; i < N; i++) {cin >> bitkoin[i];};

    for (int i = 1; i < N; i++)
    {
        if ((bitkoin[i]/bitkoin[i-1]) == 1) {cout << bitkoin[i] << " ";};
    };

    return 0;
}
