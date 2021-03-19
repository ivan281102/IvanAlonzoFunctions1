#include <stdio.h>

int main()
{
	int arr[] = {1, 1, 1, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;

	for (int i = 0; i < n; i++)
	sum += arr[i];

	printf("Sum of list is %d", sum);
	return 0;
}