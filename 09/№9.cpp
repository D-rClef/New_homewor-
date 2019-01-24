#include <iostream>

using namespace std;

int main()
{
    int N, x, y;
    cin >> N;
    cin >> x >> y;

    if ((y + 1) <= N)
    {
        if ((x - 2) >= 1) {cout << "(" << (x - 2) << "; " << (y + 1) << ")" << endl;};
        if ((x + 2) <= N) {cout << "(" << (x + 2) << "; " << (y + 1) << ")" << endl;};
        if ((y + 2) <= N)
        {
            if ((x - 1) >= 1) {cout << "(" << (x - 1) << "; " << (y + 2) << ")" << endl;};
            if ((x + 1) <= N) {cout << "(" << (x + 1) << "; " << (y + 2) << ")" << endl;};
        };
    };
    if ((y - 1) >= 1)
    {
        if ((x - 2) >= 1) {cout << "(" << (x - 2) << "; " << (y - 1) << ")" << endl;};
        if ((x + 2) <= N) {cout << "(" << (x + 2) << "; " << (y - 1) << ")" << endl;};
        if ((y - 2) >= 1)
        {
            if ((x - 1) >= 1) {cout << "(" << (x - 1) << "; " << (y - 2) << ")" << endl;};
            if ((x + 1) <= N) {cout << "(" << (x + 1) << "; " << (y - 2) << ")" << endl;};
        };
    };

    return 0;
}
