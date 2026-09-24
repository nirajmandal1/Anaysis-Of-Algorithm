#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int V = 3;

    vector<vector<pair<int, int>>> adj(V);

    // Edges
    adj[0].push_back({1, 5});
    adj[1].push_back({0, 5});

    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});

    adj[0].push_back({2, 1});
    adj[2].push_back({0, 1});

    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>> pq;

    vector<bool> visited(V, false);

    int cost = 0;

    pq.push({0, 0});

    while (!pq.empty())
    {
        int wt = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (visited[u])
            continue;

        visited[u] = true;
        cost += wt;

        for (auto edge : adj[u])
        {
            int v = edge.first;
            int weight = edge.second;

            if (!visited[v])
                pq.push({weight, v});
        }
    }

    cout << "Minimum Spanning Tree Cost = " << cost;

    return 0;
}