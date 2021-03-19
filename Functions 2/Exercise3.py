def multiply(arr):
   n = len(arr)
   result = 1;
   
   for i in range(n):
   	result = result * arr[i];

   return result

arr = [2, 1, 1, 1, 8]

print(multiply(arr))