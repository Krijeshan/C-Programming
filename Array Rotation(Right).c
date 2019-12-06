#include<stdio.h>
void print(int arr[50],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr[50];
    printf("\nEnter the size of array:");
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the num of rotations:");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        int t1=arr[n-1];
        int l=n;
        for(int j=0;j<n;j++)
        {
            l=l-1; 
            arr[l]=arr[l-1];
        }
        arr[0]=t1;
        printf("after %d rotation\n",i);
        print(arr,n);
    }
}
