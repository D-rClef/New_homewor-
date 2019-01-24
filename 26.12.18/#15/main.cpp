#include <iostream>
#include <cmath>

using namespace std;

double length(double x1, double y1, double x2, double y2)
{
	double dx = x1 - x2 ;
	double dy = y1 - y2;
	double k = sqrt(pow(dx, 2) + pow(dy, 2));
	return k;
}
int main()
{
    int n;
    cin >> n;

    double X[n];
    double Y[n];

    for (int i = 0; i < n; i++)
        {cin >> X[i] >> Y[i];};

    double c;
    double c_min = length(X[1], Y[1], X[2], Y[2]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            c = length(X[i], Y[i], X[j], Y[j]);
            if (c_min > c)
                {
                    c_min = c;
                }
        };
    };

    cout << c_min;
    return 0;
}
