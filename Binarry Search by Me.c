#include<stdio.h>
#include<stdlib.h>
int binarySearch(int a[], int start, int end, int val)
{
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==val)
        {
            return mid+1;
        }
        else if(a[mid]<val)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    } return -1;
}

int main()
{
    int a[10];
    int val;
    printf("Enter the elements of the array(MAX 10): ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d",&val);
    int mid = sizeof(a)/sizeof(a[0]);
    int res = binarySearch(a, 0, mid-1, val);
    printf("The elements of the array are - ");
    for (int i = 0; i < 10; i++)
    printf("%d ", a[i]);
    printf("\nElement to be searched is - %d", val);
    if (res == -1)
    printf("\nElement is not present in the array");
    else
    printf("\nElement is present at %d position of array", res);
    return 0;
}
