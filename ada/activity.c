#include <stdio.h>

struct activity {
    int start;
    int finish;
};

void sort(struct activity a[], int n) {
    struct activity temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].finish > a[j + 1].finish) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of activities: ");
    scanf("%d", &n);

    struct activity arr[n];

    printf("Enter the start and finish times:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].start, &arr[i].finish);
    }

    sort(arr, n);

    printf("\nSelected Activities:\n");
    printf("(%d, %d)\n", arr[0].start, arr[0].finish);

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[j].start >= arr[i].finish) {
            printf("(%d, %d)\n", arr[j].start, arr[j].finish);
            i = j;
        }
    }

    return 0;
}