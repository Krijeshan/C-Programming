#include <stdio.h>

int main()
{
  int arr[500],n;
  printf("\nEnter the sizeof array:");
  scanf("%d",&n);
  int max,s_max;
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  max=arr[0];
  for(int i=1;i<n;i++)
  {
      if(arr[i]>max)
        max=arr[i];
  }
  printf("\nMax Elem:%d",max);
  if(max!=arr[0]) s_max=arr[0];
  else s_max=arr[1];
  for(int j=1;j<n;j++)
  {
      if(arr[j]>s_max && arr[j]<max)
        s_max=arr[j];
  }
  printf("\nSecond Max:%d",s_max);
}
