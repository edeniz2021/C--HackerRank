/*
Complete the calculate_the_maximum function in the editor below.

calculate_the_maximum has the following parameters:

int n: the highest number to consider
int k: the result of a comparison must be lower than this number to be considered
Prints

Print the maximum values for the and, or and xor comparisons, each on a separate line.*/
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j;
  int and=0,or=0,xor=0;
  for(i=1;i<=n;i++)
  {
      for(j=i+1;j<=n;j++)
      {
          if(and<(i&j)&& (i&j)<k)
          {
              and = i&j;
          }
          if(or<(i|j)&& (i|j)<k)
          {
              or = i|j;
          }
          if(xor<(i^j)&& (i^j)<k)
          {
              xor= i^j;
          }
      }
  }
  printf("%d\n",and);
  printf("%d\n",or);
  printf("%d",xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

