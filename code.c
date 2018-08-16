#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int unsortedArray[] = {1, 9, 4, 3, 6, 2, 8, 7, 5, 10};
int len = sizeof(unsortedArray)/sizeof(unsortedArray[0]);

void bubbleSort (int arr[])
{
  int i, tmp;
  bool notSorted = true;

  while (notSorted)
  {
    notSorted = false;

    for (i = 0; i < len; i++)
    {
      if (i == len - 1) continue;
      if (arr[i + 1] < arr[i])
      {
        tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;

        notSorted = true;
      }
    }
  }
}

int main (void)
{
  int i;
  for (i = 0; i < len; i++)
  {
    printf("%i ", unsortedArray[i]);
  }

  bubbleSort(unsortedArray);

  printf("\n");

  for (i = 0; i < len; i++)
  {
    printf("%i ", unsortedArray[i]);
  }

  printf("\n");

  return 0;
}
