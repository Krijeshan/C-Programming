#include<stdio.h>
void print(int arr[500],int s)
{
    for(int i=0;i<s;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr[500];
    int n,num;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the num of  rotations:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        int t1=arr[0];
        int j;
        for(j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[j]=t1;
        printf("\nAfter %d rotation\n",i);
        print(arr,n);
    }
    
}
