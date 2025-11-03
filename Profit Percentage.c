#include<stdio.h>
#include<math.h>

int main()
{
    int x,y;
    double p,p1;
    scanf("%d %d",&x,&y);
    p=y-x;
    p1=((double)p/x)*100.00;
    printf("%.21lf",p1);
}
