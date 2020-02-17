#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int i;
    int j;
    char str[100]= "";
    FILE *fp;

    i = 0;
    j = 3;

    srand(time(NULL));
    printf("Введите буквы: ");
    gets(str);
    puts(str);
    fp = fopen("out.txt", "w+");
    if(fp != NULL)
    {
    while (i < 10)

        {
            while(j <= 7)
            {
               fputc(str[(rand() % 100)], fp);
               j++;
            }
            fputc('\n', fp);
            j = 3;
    i++;
        }
    }
    else printf("cannot open file\n");
    fclose(fp);
}
