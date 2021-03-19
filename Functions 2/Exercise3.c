#include <stdio.h>

int main() {
   int arr[] = { 10, 20, 3, 4, 8 };
   int n = sizeof(arr) / sizeof(arr[0]);
   int result = 1;
   
   for (int i = 0; i < n; i++)
   result = result * arr[i];

   printf("%d", result);
   return 0;
}