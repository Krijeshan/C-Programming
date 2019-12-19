#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count (int n)
{
    int c=0;
    for(int i=0;n>0;i++)
    {
        n=n/10;
        c++;
    }

    
    return c;
}
int main() {
    int opt,val;
    scanf("%d %d",&opt,&val);
    int ar[10];
    int l=count(val);
    int c=l,r;
    while(val>0)
    {
        r=val%10;
        l=l-1;
        ar[l]=r;
        val=val/10;
    }
    int t1[10],t2[10];
    if(opt==0 )
    {
        int j=0,k=0;
        for(int i=0;i<c;i++)
        {     
            if(ar[i]%2==1)
            {
               t1[j]=ar[i];
                j++;
            }
            else
            {
                t2[k]=ar[i];
                k++;
            }
        }
        for(int i=0;i<j;i++)
            ar[i]=t1[i];
        for(int a=0;a<k;a++)
        {
            ar[j]=t2[a];
            j++;
        }
                
    }
     if(opt==1 )
    {
        int j=0,k=0;
        for(int i=0;i<c;i++)
        {     
            if(ar[i]%2==0)
            {
               t1[j]=ar[i];
                j++;
            }
            else
            {
                t2[k]=ar[i];
                k++;
            }
        }
        for(int i=0;i<j;i++)
            ar[i]=t1[i];
        for(int a=0;a<k;a++)
        {
            ar[j]=t2[a];
            j++;
        }
                
    }
    int n=0;
    int q=c-1,s=0;
    for(int i=0;i<c;i++)
    {    
         n=n+(ar[i]*pow(10,q-i));
        
    }
    printf("%d ",n);
    return 0;
}
