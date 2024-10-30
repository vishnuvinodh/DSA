/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void bubbleSort(int a[], int n) 
{
 int i, j, temp;
 for (i = 0; i < n - 1; i++) 
  {
  for (j = 0; j < n - i - 1; j++) 
   {
    if (a[j] < a[j + 1])
      {
       temp = a[j];
       a[j] = a[j + 1];
        a[j + 1] = temp;
       }
    }
   }
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bubbleSort(a, n);
    printf("Sorted array in descending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
