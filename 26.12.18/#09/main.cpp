
#include <iostream>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	int** X = new int* [N];
	for (int i = 0; i < M; i++)
    {
		*(X + i) = new int[M];
	};

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> X[j][i];
		};
	};

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == 0)
			{
				if (j == 0)
					{X[j][i] = X[j][i];};
				if (j != 0)
					{X[j][i] += X[j-1][i];};
			}
			else
            {
                if (j == 0)
                    {X[j][i] += X[j][i - 1];}
				else
					{X[j][i] += max(X[j-1][i], X[j][i - 1]);};
            };
        };
    };

	cout << X[N - 1][M - 1];

	delete[] X;
	return 0;
}
