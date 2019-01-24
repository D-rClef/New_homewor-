
#include <iostream>

using namespace std;

bool Search(int *A, int n,int x,int q, int p = 0) {
	if (A[(q + p) / 2] == x)
		return 1;
	if (q - p <= 1)
		return 0;
	if (A[(p + q) / 2] > x)
		Search(A, n, x, (p + q) / 2, p);
	if (A[(p + q) / 2] < x)
		Search(A, n, x, q, (p + q) / 2);
}

int main()
{
	int n;
	cin >> n;
	int *A = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int a, b;
	cin >> a >> b;
	if (Search(A, n, a, n) && Search(A, n, b, n) == true)
		cout << "DA ";
	else cout << "NET ";

	delete[] A;
	return 0;
}
