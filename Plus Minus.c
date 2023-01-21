#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    float p=0,ne=0,z=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        ne++;
        else if(a[i]>0)
        p++;
        else 
        z++;
    }
    printf("%f\n%f\n%f",p/n,ne/n,z/n);
}
