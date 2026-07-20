#include <stdio.h>

int binary(int arr[], int key, int l, int r) {
    if (l > r) {
        return -1;
    }
    int mid = (l + r) / 2;
    if (arr[mid] == key) {
        if (mid < r && arr[mid + 1] == key) {
            return binary(arr, key, mid + 1, r);
        } else {
            return mid + 1;  
        }
    }
    else if (arr[mid] > key) {
        return binary(arr, key, l, mid - 1);
    }
    else {
        return binary(arr, key, mid + 1, r);
    }
}

int main() {
    int arr[100], n, key;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key: ");
    scanf("%d", &key);
    int res = binary(arr, key, 0, n - 1);
    if (res == -1) {
        printf("Element not found!\n");
    } else {
        printf("Last occurrence of element found at position %d\n", res);
    }
    return 0;
}
