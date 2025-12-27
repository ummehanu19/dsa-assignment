#include <stdio.h>
#include <stdlib.h>

#define V 4

int graph[V][V] = {
    {0,1,1,0},
    {1,0,0,1},
    {1,0,0,1},
    {0,1,1,0}
};

int visited[V];

void DFS(int v)
{
    visited[v] = 1;
    printf("%d ", v);

    for (int i = 0; i < V; i++)
        if (graph[v][i] && !visited[i])
            DFS(i);
}

void BFS(int start)
{
    int queue[10], front = 0, rear = 0;

    visited[start] = 1;
    queue[rear++] = start;

    while (front < rear)
    {
        int v = queue[front++];
        printf("%d ", v);

        for (int i = 0; i < V; i++)
            if (graph[v][i] && !visited[i])
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
    }
}

int main()
{
    printf("DFS: ");
    for (int i = 0; i < V; i++)
        visited[i] = 0;
    DFS(0);

    printf("\nBFS: ");
    for (int i = 0; i < V; i++)
        visited[i] = 0;
    BFS(0);

    printf("\n\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
