#include<stdio.h>
int main()
{
    int n=3,i,aa=0,bb=0,me=0,a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        aa++;
        else if(a[i]<b[i])
        bb++;
        else 
        me=1;
    }
    printf("%d %d",aa,bb);
}
