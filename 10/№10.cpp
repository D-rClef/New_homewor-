#include <iostream>

using namespace std;

int main() {

	int N, mult = 1;
	cin >> N;
	int* abraxas = new int[N];
	for (int i = 0; i < N; i++) {cin >> abraxas[i];};

	for(int i = 0; i < N; i++)
    {
		if ((abraxas[i] % 2 != 0) && (abraxas[i] % 3 == 0)) {mult *= abraxas[i];};
	}
	cout << mult;

	return 0;
}
