#include<stdio.h>
#include<stdbool.h>
void bubbleSort(int a[], int n)
{
    int i,j;
    bool flag;
    for(i=0;i<n-1;i++)
    {
        flag=false;
        for(j=0;j<n-1-1;j++)
        {
            if(a[j]>a[j+1])
            {
               int temp=a[j+1];
               a[j+1]=a[j];
               a[j]=temp;
               flag=true;
            }
        }
        if(flag==false)
            break;
    }
}
int main()
{
    int a[10];
    int n = sizeof(a)/sizeof(a[0]);
    printf("Enter the elements of the array (MAX 10): ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubbleSort(a,n);
    printf("The Sorted array is: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
