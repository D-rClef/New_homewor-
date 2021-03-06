//Найти все вершины, из которых выходят три моста
#include <iostream>;
#include <vector>
#include <cmath>

using namespace std;

vector<int>* G;
bool* used;
int timer;

void dfs (int v, int p, int* &tin, int* &fup, int* &Bridges, int N)
{
	used[v] = true;
	tin[v] = fup[v] = timer++;
	for (size_t i=0; i<G[v].size(); ++i)
    {
		int to = G[v][i];
		if (to == p)  continue;
		if (used[to])
			fup[v] = min (fup[v], tin[to]);
		else
        {
			dfs (to, v, tin, fup, Bridges, N);
			fup[v] = min (fup[v], fup[to]);
			if (fup[to] > tin[v])
			{
			    Bridges[v]++;
			    Bridges[to]++;
			}
		}
	}
}

void find_bridges(int*& tin, int*& fup, int*& Bridges, int N)
{
	timer = 0;
	for (int i=0; i < N; ++i)
		used[i] = false;
	for (int i=0; i < N; ++i)
		if (!used[i])
			dfs (i, -1, tin, fup, Bridges, N);
}

int main()
{
    int N;
    cout << "Enter the number of vertexes in the graph" << '\n';
    cin >> N;
    int* tin = new int[N];
    int* fup = new int[N];
    int* Bridges = new int[N];
    used = new bool[N];
    G = new vector<int>[N];
    int T;
    cout <<"Enter the adjacency list (write -1 to begin reading next vertex)" << '\n';
    for (int i = 0; i < N; ++i)
    {
        for (;;)
        {
            cin >> T;
            if (T == -1)
                break;
            G[i].push_back(T);
        }
    };
    find_bridges(tin, fup, Bridges, N);
    for (int i = 0; i < N; ++i)
        if (Bridges[i] == 3)
            cout << i << '\n';
    return 0;
}
