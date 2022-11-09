/*
task:
For each integer  in the interval [a,b] (given as input) :
If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9  and it is an odd number, then print "odd".*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    int i;
  	// Complete the code.
    char c[10][10] ={"one","two","three","four","five","six","seven","eight","nine"};
    int d[10]={1,2,3,4,5,6,7,8,9};
    for(i=a;i<=b;i++)
    {   if(i ==d[i-1])
        {
            printf("%s \n",c[i-1]);
        }else if(i%2==0)
        {
            printf("even\n");
        }else printf("odd\n");
    }
    return 0;
}


