#include<stdio.h>
void insertion(int arr[], int n, int index, int element) {
    if (index < 0 || index > n) {
        printf("Invalid index\n");
        return;
    }
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
}
int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    int index = 2;
    int element = 10;

    insertion(arr, n, index, element);
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}