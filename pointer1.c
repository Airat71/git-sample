
#include<stdio.h>

void main()
{
    int length;
    char *p1;
    char *p2;
    char tmp;
    float a;
    float b;
    a = 5.0;
    b = 3.8;
    printf ("%.2f\n", a);
    printf ("%.2f\n", b);

    p1 = (char*) &a;
    p2 = (char*) &b;
    length = sizeof(float);
    while (length--)
        {
            tmp = *p1;
            *p1 = *p2;
            *p2 = tmp;
            p1++;
            p2++;
        }
        printf("%.2f\n", a);
        printf("%.2f\n", b);
 }
