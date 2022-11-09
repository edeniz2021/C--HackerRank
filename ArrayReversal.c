#include <stdio.h>
#include <stdlib.h>
//Given an array, of size n, reverse it.
//Example: If array,arr =[1,2,3,4], after reversing it, the array should be,arr=[4,3,2,1] .
int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    int temp;
for (int i = 0; i < num/2; i++)
{
    temp = arr[i];
    arr[i] = arr[num - i - 1];
    arr[num - i - 1] = temp;
}
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
