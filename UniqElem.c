#include<iostream>
using namespace std;
int main()
{
    int arr[]={1};
    int len=sizeof(arr)/sizeof(arr[0]);
    int u,uniq[len],a=0;
    int i;
    for(i=0;i<len;i++)
    {
        u=arr[i];
        int j;
        for(j=0;j<len;j++)
        {
            if (j==i) continue;
            if(u==arr[j])
                break;
                
        }
        if(j==len)
        {   
            uniq[a]=u;
            a++;
        }
    }
    if(i==len and a==0)
        cout<<"No unique element exists!!";
    else    
    {
      for(int i=0;i<a;i++)
        cout<<uniq[i]<<" ";
    }
    return 0 ;
}
