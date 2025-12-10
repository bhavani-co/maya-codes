#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    double hypo;
    scanf("%d %d",&x,&y);
    hypo=sqrt(x*x+y*y);
    printf("%.2lf",hypo);
    return 0;
}
