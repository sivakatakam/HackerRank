#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int a;
    double b;
    char n[200];
    scanf("%d%lf",&a,&b);
    scanf("\n");
    scanf("%[^\n]s",n);
    //strcat(s,n);
    printf("%d\n%.1lf\n",i+a,d+b);
    printf("%s",s);
    printf("%s",n);
    return 0;
}
