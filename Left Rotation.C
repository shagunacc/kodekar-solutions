#include<stdio.h>
int main()
{
    int n,d,a[1000000],i,j,f;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
   
    for(i=0;i<d;i++)
    {
       f=a[0]; 
        for(j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
            
        }
        a[j]=f;
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
return 0;    
}
