#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge
{
    int u, v, w;
};

bool compare(Edge a, Edge b)
{
    return a.w < b.w;
}

int findParent(int parent[], int x)
{
    if (parent[x] == x)
        return x;

    return findParent(parent, parent[x]);
}

void unionSet(int parent[], int a, int b)
{
    a = findParent(parent, a);
    b = findParent(parent, b);

    parent[b] = a;
}

int main()
{
    int V = 4;

    vector<Edge> edges =
    {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    sort(edges.begin(), edges.end(), compare);

    int parent[4];

    for (int i = 0; i < V; i++)
        parent[i] = i;

    int cost = 0;

    cout << "Edges in Minimum Spanning Tree:\n";

    for (auto e : edges)
    {
        int a = findParent(parent, e.u);
        int b = findParent(parent, e.v);

        if (a != b)
        {
            cout << e.u << " - " << e.v
                 << " = " << e.w << endl;

            cost += e.w;
            unionSet(parent, a, b);
        }
    }

    cout << "Minimum Cost = " << cost << endl;

    return 0;
}