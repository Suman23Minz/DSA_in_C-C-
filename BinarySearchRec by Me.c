#include <stdio.h>

int binarySearch(int a[], int left, int right, int val) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (a[mid] == val)
            return mid+1;

        else if (a[mid] > val)
            return binarySearch(a, left, mid - 1, val);
        else
        {
            return binarySearch(a, mid + 1, right, val);
        }
    }

    return -1;
}

int main() {
    int a[10];
    printf("Enter the elements in the array (MAX 10)");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int n = sizeof(a) / sizeof(a[0]);
    int val;
    printf("Enter the number you want to search: ");
    scanf("%d",&val);
    int result = binarySearch(a, 0, n - 1, val);
    if (result == -1)
        printf("Element not found :");
    else
        printf("Element found at index %d :", result);
    return 0;
}
