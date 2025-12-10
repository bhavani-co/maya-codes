#include<stdio.h>
int main()
{
    int CP,SP;
    float profit,profitp;
    scanf("%d %d",&CP,&SP);
    profit=SP-CP;
    profitp=(profit/CP)*(100.0);
    printf("%.2f",profitp);
}
