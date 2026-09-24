#include <stdio.h>

#define V 5
#define INF 9999

void dijkstra(int graph[V][V], int start)
{
    int dist[V], visited[V], i, j, u, min;

    for (i = 0; i < V; i++)
    {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[start] = 0;

    for (i = 0; i < V - 1; i++)
    {
        min = INF;

        for (j = 0; j < V; j++)
        {
            if (!visited[j] && dist[j] < min)
            {
                min = dist[j];
                u = j;
            }
        }

        visited[u] = 1;

        for (j = 0; j < V; j++)
        {
            if (graph[u][j] && !visited[j] &&
                dist[u] + graph[u][j] < dist[j])
            {
                dist[j] = dist[u] + graph[u][j];
            }
        }
    }

    for (i = 0; i < V; i++)
    {
        printf("Shortest distance from %d to %d = %d\n",
               start, i, dist[i]);
    }
}

int main()
{
    int graph[V][V] =
    {
        {0, 10, 0, 30, 100},
        {10, 0, 50, 0, 0},
        {0, 50, 0, 20, 10},
        {30, 0, 20, 0, 60},
        {100, 0, 10, 60, 0}
    };

    int start;

    printf("Enter starting node (0-%d): ", V - 1);
    scanf("%d", &start);

    dijkstra(graph, start);

    return 0;
}