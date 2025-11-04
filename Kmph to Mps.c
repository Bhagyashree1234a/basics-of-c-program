#include<stdio.h>
#include<math.h>
int main()
{
    int speed;
    float speed_ms;
    scanf("%d", &speed);
    {
        speed_ms=speed*(5.00/18.00);
    }
    printf("%.2f", speed_ms);
}
