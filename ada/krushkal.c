#include <stdio.h>

#define INF 999

int parent[10];

int find(int i) {
    while (parent[i])
        i = parent[i];
    return i;
}

int uni(int i, int j) {
    if (i != j) {
        parent[j] = i;
        return 1;
    }
    return 0;
}

int main() {
    int n, cost[10][10];
    int i, j, ne = 1;
    int min, a, b, u, v;
    int mincost = 0;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }
    while (ne < n) {
        min = INF;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }
        u = find(u);
        v = find(v);
        if (uni(u, v)) {
            printf("%d - %d : %d\n", a, b, min);
            mincost += min;
            ne++;
        }
        cost[a][b] = cost[b][a] = INF;
    }
    printf("Minimum Cost = %d\n", mincost);
    return 0;
}


