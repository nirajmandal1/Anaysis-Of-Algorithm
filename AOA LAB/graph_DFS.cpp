#include <iostream>
using namespace std;

int graph[20][20];
bool visited[20];
int n;

void DFS(int v)
{
    visited[v] = true;

    for (int i = 0; i < n; i++)
    {
        if (graph[v][i] == 1 && !visited[i])
            DFS(i);
    }
}

int main()
{
    int start;

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    cout << "Enter starting vertex: ";
    cin >> start;

    DFS(start);

    // Check whether all vertices are visited
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            cout << "Graph is NOT connected.";
            return 0;
        }
    }

    cout << "Graph is connected.";

    return 0;
}