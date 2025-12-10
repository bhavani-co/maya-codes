#include<stdio.h>
int main()
{
    int CP,SP;
    float loss,lossp;
    scanf("%d %d",&CP,&SP);
    loss=CP-SP;
    lossp=(loss/CP)*(100.00);
    printf("%.2f",lossp);

}
