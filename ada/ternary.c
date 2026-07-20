#include <stdio.h>

int ternary(int arr[], int key, int l, int r){
    int mid1 = l+(r-l)/3;
    int mid2 = r-(r-l)/3;

    if(arr[mid1]==key){
        return mid1+1;
    } else if (arr[mid2]==key){
        return mid2+1;
    } else if (arr[mid1]>key){
        return ternary(arr, key, l, mid1-1);
    } else if(arr[mid2]<key){
        return ternary(arr, key, mid2+1, r);
    } else {
        return ternary(arr, key, mid1+1, mid2-1);
    }
}

void main(){
    int arr[100], n, key;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the key: ");
    scanf("%d", &key);

    int res = ternary(arr, key, 0, n-1);

    if(res==-1){
        printf("Element not found!\n");
    } else {
        printf("Element found at %d\n", res);
    }
}
