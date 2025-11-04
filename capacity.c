#include<stdio.h>
#include<math.h>

int main()
{
    int t,s,b;
    int c,tc;
    scanf("%d %d %d",&t, &s,&b);
    c=2*t*s*b*512;
    tc=c/1024;
    printf("%d KB",tc);
}
