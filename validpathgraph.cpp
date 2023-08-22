#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_NODES 100

typedef struct Node {
    int destination;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
} AdjList[MAX_NODES];

AdjList graph;
int numNodes;

void initializeGraph() {
    for (int i = 0; i < MAX_NODES; i++) {
        graph[i].head = NULL;
    }
}

void addEdge(int u, int v) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->destination = v;
    newNode->next = graph[u].head;
    graph[u].head = newNode;
}

void printPath(int path[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d", path[i]);
        if (i != length - 1) {
            printf(" -> ");
        }
    }
    printf("\n");
}

bool dfs(int current, int destination, bool visited[], int path[], int pathLength) {
    visited[current] = true;
    path[pathLength] = current;
    pathLength++;

    if (current == destination) {
        printPath(path, pathLength);
        return true;
    }

    Node* node = graph[current].head;
    while (node != NULL) {
        int nextNode = node->destination;
        if (!visited[nextNode]) {
            if (dfs(nextNode, destination, visited, path, pathLength)) {
                return true;
            }
        }
        node = node->next;
    }

    return false;
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
    int source, destination;
    printf("Enter source and destination: ");
    scanf("%d %d", &source, &destination);
    bool visited[MAX_NODES] = {false};
    int path[MAX_NODES];
    int pathLength = 0;
    printf("Valid Paths:\n");
    dfs(source, destination, visited, path, pathLength);
    return 0;
}

