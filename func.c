#include<stdio.h>

float sqr(int c)
{
    float tmp;

    tmp = c * c;
    return tmp;
}

void main()
{
    printf("%.3f\n", sqr(5 ));
}

