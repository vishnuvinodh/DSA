#include <stdio.h>
int main()
{
 int n;
 printf("Enter the number of employee IDs: ");
 scanf("%d", &n);
 int id[n];
 printf("Enter the employee IDs:\n");
 for (int i = 0; i < n; i++) 
 {
  scanf("%d", &id[i]);
 }
  int target;
  printf("Enter the employee ID to search for: ");
  scanf("%d", &target);
  int left = 0;
  int right = n - 1;
  int index = -1; 
while (left <= right)
{
 int mid = left + (right - left) / 2;
 if (id[mid] == target) 
 {
  index = mid;
  break;
 } 
 else if (id[mid] < target) 
 {
 left = mid + 1;
  } 
  else
  {
    right = mid - 1;
  }
    }
    if (index != -1)
    {
       printf("Employee ID '%d' found at index %d.\n", target, index);
    } 
    else
    {
        printf("Employee ID '%d' not found in the list.\n", target);
    }
    return 0;
}