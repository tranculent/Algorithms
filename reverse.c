#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    printf("Give me a number how long the array will be: ");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
      printf("Drop me a num: ");
        scanf("%d", arr + i);
    }

    int length = i;
    
    /* Write the logic to reverse the array. */
    int* modifiedArr = (int *) malloc(num * sizeof(int));
    for(i = num; i > 0; i--) // 1 2 3 4 
      {
        arr[i] = arr[i-1]; // arr[i] -> 4; arr[i] -> 3 
        
        printf("%d ", arr[i]);
      }

    for (i = 0; i <= length; i++) {
      printf("%d\n", arr[i]);
    }
    return 0;
}

