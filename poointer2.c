#include<stdio.h>
int main()
{
   int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int even [10];
   int evenCounter = 0;
   int *iter, *end;
   iter = A;
   end = &A[10];
   while (iter < end)
   {
      if (*iter %2 == 0)
         {
	    even[evenCounter++] = *iter;
         }
   iter++;
   }
   for  (--evenCounter; evenCounter >= 0; evenCounter--)
      
         printf("%d\n", even[evenCounter]);
      
}
