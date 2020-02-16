// #include <stdio.h>
// int main()
// {
// 	int A = 100;
// 	int *p;
// 	p = &A;
// 	printf ("%p\n", p); // Вывод адреса переменной!
// 	printf ("%d\n", A);
// 	printf ("%d\n", *p); // Вывод  содержимого переменной A!
// 	*p = 200;
// 	printf ("%d\n", *p);
// 	printf ("%d\n", A);
// 	printf ("%d\n", *p);

// 	return 0;
// }
// #include <stdio.h>

// void main()
// {
// 	int A = 100;
// 	int *a = &A;
// 	double B = 2.4;
// 	double *b = &B;
	
// 	printf("%d\n", sizeof(A));
// 	printf("%d\n", sizeof(a));
// 	printf("%d\n", sizeof(B));
// 	printf("%d\n", sizeof(b));  

// }
// #include <stdio.h>
   
// void main() {
//     int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int *p;
 
//     p = A;
 
//     printf("%d\n", *p);
//     p++;
//     printf("%d\n", *p);
//     p = p + 4;
//     printf("%d\n", *p);
 
//     return;
// }

// #include <stdio.h>
   
// void main() {
//     int A[10] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int *a, *b;
 
//     a = &A[0];
//     b = &A[9];
 
//     printf("&A[0] == %p\n", a);
//     printf("&A[9] == %p\n", b);

//     if (a < b) {
//         printf("a < b");
//     } else {
//         printf("b < a");
//     }
 
//     return ;
// }


// #include <stdio.h>
   
// #define SIZE 10
 
// void main() {
//     int A;
//     int B;
//     int *p;
//     int **pp;
 
//     A = 10;
//     B = 111;
//     p = &A;
//     pp = &p;
 
//     printf("A = %d\n", A);
//     *p = 20;
//     printf("A = %d\n", A);
//     *(*pp) = 30;    //здесь скобки можно не писать
//     printf("A = %d\n", A);
 
//     *pp = &B;
//     printf("B = %d\n", *p);
//     **pp = 333;
//     printf("B = %d", B);
 
//     return;
// }

// #include <stdio.h>
// int main()
// {
// 	int A, B, C;
// 	int *a;
// 	int **b;
// 	int ***c;
// 	A = 111;
// 	B = 222;
// 	C = 333;
// 	c = &C;
// 	a = &A;
// 	printf("%d\n", *a);
// 	printf("%p\n", a);
// 	*a = 999;
// 	printf("%d\n", A);
// 	b = &a;
// 	printf("%d\n", B);
// 	printf("%d\n", A);

// 	return 0;
// }
// #include <stdio.h>
// int main()
// {
// 	char b;
// 	int counter = 0;
// 	printf("Введите строку");

// 	while(b != '.')
// 	{
// 		b = getc(stdin);
// 		if (b == 'a')
// 		{
// 			counter++;
// 		}
// 	}
// 	printf("%d\n", counter);
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char *A;
// 	char B[100] = {'.'};
// 	int counter = 0, i;
// 	long lenght = 0;
//     printf("Введите строку");
//     scanf("%s", &B);
//     for(i = 0; i < sizeof(B); i++)
//     {
//     	if(B[i] != '.')
//     		lenght++;
//     	else break;
//     }
//     A = malloc(lenght * sizeof(char));
//     i = 0;
//     while(i < lenght)
//     {
//     	A[i] = B[i];
//     	if (A[i] == 'a')
//     	{
//     		counter++;
//     	}
//     	i++;
//     }
//     	printf("%d\n", counter);
//     	free(A);
//     return 0;


// }

// #include <stdio.h>
   
// #define SIZE 10
 
// int main() {
//     int A = 10;
//     int *intPtr;
//     char *charPtr;
 
//     intPtr = &A;
//     printf("%d\n", *intPtr);
//     printf("--------------------\n");
//     charPtr = (char*)intPtr;
//     printf("%d ", *charPtr);
//     charPtr++;
//     printf("%d ", *charPtr);
//     charPtr++;
//     printf("%d ", *charPtr);
//     charPtr++;
//     printf("%d ", *charPtr);
     
//     return 0;
// }

#include <stdlib.h>
#include <stdio.h>
 
void main() {
    int *a = NULL;
    unsigned length, i;
     
    printf("Enter length of array: ");
    scanf("%d", &length);
     
    if (length > 0) {
        //При выделении памяти возвращается указатель.
        //Если память не была выделена, то возвращается NULL
        if ((a = (int*) malloc(length * sizeof(int))) != NULL) {
            for (i = 0; i < length; i++) {
                a[i] = i * i;
            }
            for(i = 0; i < length; i++)
            printf("%d\n", a[i]);
        } else {
            printf("Error: can't allocate memory");
        }
    }
 
    //Если переменая была инициализирована, то очищаем её
    if (a != NULL) {
        free(a);
    }

}







