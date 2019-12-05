#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int m=(0+num)/2;
    //printf("%d",m);
    int l=num;
    int a;
    for(a=0;a<m;a++)
    {     l=l-1;
         int t1=*(arr+a);
         *(arr+a)=*(arr+l);
         *(arr+l)=t1;
    }
    
    for(int i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

