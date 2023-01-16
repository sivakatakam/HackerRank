#include<stdio.h>
int main()
{
    int a,b,c,d;
    float x,y,z,w;
    scanf("%d%d%f%f",&a,&b,&x,&y);
    c=a+b;
    d=a-b;
    z=x+y;
    w=x-y;
    printf("%d %d\n%.1f %.1f",c,d,z,w);
}
