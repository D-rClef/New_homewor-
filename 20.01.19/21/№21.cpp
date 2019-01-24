#include <iostream>

using namespace std;

int main()
{
	int N, X, number, MAX;
	int* buer = new int[9];
	for (int i = 0; i < 9; i++) {buer[i] = 0;};

	cin >> N;
	for (int i = 0; i < N; i++)
    {
		cin >> X;
		while (X > 0)
		{
			number = (X % 10);
			buer[number]++;
			X /= 10;
		}
	};

	MAX = 0;
	for (int i = 0; i < 9; i++)
    {
		if (buer[i] > MAX) {MAX = buer[i];};
	};

	for (int i = 9; i > 0; i--)
	{
		if (buer[i] == MAX) {cout << i << " ";};
	};

	return 0;
}
