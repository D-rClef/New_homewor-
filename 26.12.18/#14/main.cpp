#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n, k;
    cin >> n;

    while (n != 0)
    {
        k = sqrt(n);
        n = n - k*k;
	    cout << k << "^2  ";
	    if (n != 0) {cout << "+ ";};
    };

    return 0;
}
