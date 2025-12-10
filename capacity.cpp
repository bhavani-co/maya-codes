#include<stdio.h>
int main()
{
    int T,S,B;
    int cap,Z;
    scanf("%d %d %d",&T,&S,&B);
    cap=2*T*S*B*512;
    Z=cap/1024;
    printf("%d KB",Z);



}
