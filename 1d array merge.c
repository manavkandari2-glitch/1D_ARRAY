#include<stdio.h>
void merge(int arr1[], int n1, int arr2[], int n2, int merged[]) {
 for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }
}
int main() {
    int arr1[100] = {1, 3, 5};
    int arr2[100] = {2, 4, 6};
    int n1 = 3;
    int n2 = 3;
    int merged[200];

    merge(arr1, n1, arr2, n2, merged);

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}