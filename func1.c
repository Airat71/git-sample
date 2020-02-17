#include<stdio.h>

int  sqr(int a)
{
    return a * a;
}

float plus(float a, float b)
{
    return a + b;
}

void main()
{
    int one = 4;
    float two = 7;
    printf("%d\n", sqr(one));
    printf("%f\n", plus(one, two));
    printf("%d\n", sqr(5));
    printf("%.2f\n", plus(4, 3));
}


