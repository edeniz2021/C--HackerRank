/*
Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space.
                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4  
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
 int map[n*2-1][n*2-1];
    
    for(int x=0; x<n; x++)
    {
        for(int i=x; i < n*2-1-x; i++)
        {
            for(int j=x; j < n*2-1-x; j++)
            {
                map[i][j] = n-x;
            }
        }
    }
 for(int i=0;i<n*2-1;i++)
    {
        for(int j=0;j<n*2-1;j++)
        {
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
