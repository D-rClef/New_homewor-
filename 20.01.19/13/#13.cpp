#include <iostream>

using namespace std;

int max_p (int* a, int b)
{
	int p = 0;
	for (int i = 0; i < (b - 5); i++)
	{
		for (int j = (i + 5); j < b; j++)
        {
			p = max(p, a[i] * a[j]);
		};
	};
	return p;
}

int main()
{
	int N;
	cin >> N;
	int* belfegor = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> belfegor[i];
	};

	cout << max_p(belfegor, N);

	return 0;
}
