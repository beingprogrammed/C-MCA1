#include <stdio.h>

int linearSearch(int a[], int n, int key) {    // linear search
    for (int i = 0; i < n; i++) {
        if (a[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int a[], int n, int key) {    // binary search
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == key)
            return mid;
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

void bubbleSort(int a[], int n) {              // sorting for binary search
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, key;

    printf("enter number of elements: ");
    scanf("%d", &n);

    int arr[n], sorted[n];

    printf("enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sorted[i] = arr[i];
    }


    //print both arrays
    printf("Original array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    bubbleSort(sorted, n);

    printf("Sorted array for binary search:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", sorted[i]);
    printf("\n");


    printf("enter element to search: ");
    scanf("%d", &key);

    int pos1 = linearSearch(arr, n, key);
    if (pos1 == -1)
        printf("linear search: element not found\n");
    else
        printf("linear search: found at index %d\n", pos1);



    int pos2 = binarySearch(sorted, n, key);
    if (pos2 == -1)
        printf("binary search: element not found\n");
    else
        printf("binary search: found at index %d in sorted array\n", pos2);

    return 0;
}
