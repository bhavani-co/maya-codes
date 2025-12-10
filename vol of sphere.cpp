#include<stdio.h>
#include<math.h>
int main()
{
    int R;
    float PI=3.14,vol;
    scanf("%d",&R);
    vol = (4.0/3.0)*PI*R*R*R;
    printf("%.2f",vol);
    return 0;
}
