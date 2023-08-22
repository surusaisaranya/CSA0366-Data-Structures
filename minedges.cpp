#include <stdio.h>
#define MAX_NODES 100
int graph[MAX_NODES][MAX_NODES];
int numNodes;
void initializeGraph() {
    for (int i = 0; i < MAX_NODES; i++) {
        for (int j = 0; j < MAX_NODES; j++) {
            graph[i][j] = 0;
        }
    }
}
void addEdge(int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1; 
}
int main() {
    initializeGraph();
    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);
    int numEdges;
    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);
    for (int i = 0; i < numEdges; i++) {
        int u, v;
        printf("Enter edge %d (u v): ", i + 1);
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    int minEdges = 0;
    for (int i = 0; i < numNodes; i++) {
        for (int j = i + 1; j < numNodes; j++) {
            if (graph[i][j] == 1) {
                minEdges++;
            }
        }
    }
    printf("Minimum edges: %d\n", minEdges);
    return 0;
}

