#include <iostream>
#include <queue>
using namespace std;

void topologicalSort(int adj[][10], int V)
{
    int indegree[10] = {0};

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (adj[i][j] == 1)
                indegree[j]++;
        }
    }

    queue<int> q;

    for (int i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    cout << "Topological Order: ";

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        cout << u << " ";

        for (int v = 0; v < V; v++)
        {
            if (adj[u][v] == 1)
            {
                indegree[v]--;

                if (indegree[v] == 0)
                    q.push(v);
            }
        }
    }

    cout << endl;
}

int main()
{
    int V = 6;
    int adj[10][10] = {0};

    adj[5][2] = 1;
    adj[5][0] = 1;
    adj[4][0] = 1;
    adj[4][1] = 1;
    adj[2][3] = 1;
    adj[3][1] = 1;

    topologicalSort(adj, V);

    return 0;
}