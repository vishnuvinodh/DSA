#include <stdio.h>
void selectionSort(int arr[], int n) 
{
  for (int i = 0; i < n - 1; i++)
  {
   int minIndex = i; 
    for (int j = i + 1; j < n; j++)
    {
    if (arr[j] < arr[minIndex])
      {
      minIndex = j; 
      }
    } 
      int temp = arr[minIndex];
      arr[minIndex] = arr[i];
      arr[i] = temp;
  }
}
int main()
{
 int n;
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter %d elements:\n", n);
 for (int i = 0; i < n; i++) 
 {
  scanf("%d", &arr[i]);
 }
  selectionSort(arr, n);
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
