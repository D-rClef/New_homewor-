#include <iostream>

using namespace std;

int main()
{
	int m = 0, mx = 0, x, d = 5, N;
	cin >> N;

	int* mammon = new int[d - 1];
	for (int i = 0; i < d; i++)
	{
		cin >> x;
		mammon[(i % d)] = x;
	};

	for (int i = d; i < N; i++)
	{
		cin >> x;
		if (mammon[(i % d)] > mx) {mx = mammon[(i % d)];};
		if ((x + mx) > m)
        {
			m = x + mx;
			array[(i % d)] = x;
		};
	};

	cout << m;

	return 0;
}
