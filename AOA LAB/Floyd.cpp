#include <iostream>
using namespace std;

#define INF 999

int main()
{
    int n;
    int graph[20][20];

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter the cost matrix:\n";
    cout << "(Enter " << INF << " for no direct path)\n";

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    // Floyd's Algorithm
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (graph[i][k] + graph[k][j] < graph[i][j])
                    graph[i][j] = graph[i][k] + graph[k][j];
            }
        }
    }

    cout << "\nAll-Pairs Shortest Path Matrix:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] >= INF)
                cout << "INF ";
            else
                cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}