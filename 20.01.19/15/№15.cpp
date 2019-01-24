#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int* dovakin = new int [N];
    for(int i = 0; i < N; i++)
    {
        cin >> *(dovakin + i);
    };
    int min_ = (dovakin[0]*dovakin[5]), sch = 0;

    while (sch < (N - 5))
    {
        for(int j = (sch + 5); j < N; j++)
        {
            min_ = min(min_, (dovakin[sch]*dovakin[j]));
        };
        sch++;
    };

    cout << min_;

    return 0;
}
