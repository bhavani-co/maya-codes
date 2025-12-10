#include<stdio.h>
int main()
{
    int min,h;
    scanf("%d",&min);
    h=(min/60);
    min=(min%60);
    printf("%d Hour(s) %d Minute(s)",h,min);



}
