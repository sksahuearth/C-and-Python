#include<stdio.h>
int main()
{
    int arr[10] = { 12, 11, 13, 5, 6, 1, 4, 9, 8, 7 };
    int n = 10;
    int i, key, j;

    for (i = 1; i < n; i++)
        {
         key = arr[i];
         j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key)
            {
              arr[j + 1] = arr[j];
              j = j - 1;
            }
         arr[j + 1] = key;
    }

  printf("Sorted array: \n");
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
    return 0;
}
