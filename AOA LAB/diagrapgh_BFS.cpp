#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, start;
    
    cout << "Enter number of vertices: ";
    cin >> n;

    int graph[20][20];

    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    cout << "Enter starting node: ";
    cin >> start;

    bool visited[20] = {false};
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "Nodes reachable from " << start << " are: ";

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        cout << u << " ";

        for (int v = 0; v < n; v++)
        {
            if (graph[u][v] == 1 && !visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }

    return 0;
}