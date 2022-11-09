#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char *sen;
    int i,j;
    int a;
    sen = malloc(1024 * sizeof(char));
    scanf("%[^\n]", sen);
    sen = realloc(sen, strlen(sen) + 1);
    //Write your logic to print the tokens of the sentence here.
    char temp[10] = "0123456789";
    int arr[10] = { };
    for(i=0;i<10;i++)
    {   a=0;
        for(j=0;j<strlen(sen);j++)
        {
            if(temp[i]==sen[j])
            {
                a++;
            }
            arr[i]=a;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

