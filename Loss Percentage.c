#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    double loss, loss_per;
    scanf("%d %d",&x,&y);
    loss=x-y;
    loss_per=((double)loss/x)*100.00;
    printf("%.21f", loss_per);
}
