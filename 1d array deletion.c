#include<stdio.h>
void deletion(int arr[], int *n, int index) {
    if (index < 0 || index >= *n) {
        printf("Invalid index\n");
        return;
    }
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;     
}
int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    int index = 2;

    deletion(arr, &n, index);

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}