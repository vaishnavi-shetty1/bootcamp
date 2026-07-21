#include <stdio.h>

#define INF 999
int main() {
    int n, cost[10][10];
    int visited[10] = {0};
    int i, j, ne = 1;
    int min, a, b;
    int mincost = 0;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }
    visited[0] = 1;
    while (ne < n) {
        min = INF;

        for (i = 0; i < n; i++) {
            if (visited[i]) {
                for (j = 0; j < n; j++) {
                    if (!visited[j] && cost[i][j] < min) {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        printf("%d - %d : %d\n", a, b, min);
        mincost += min;
        visited[b] = 1;
        ne++;
    }
    printf("Minimum Cost = %d\n", mincost);
    return 0;
}
