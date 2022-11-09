#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Given a sentence, s , print each word of the sentence in a new line.
int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(int i=0;i<strlen(s);i++)
    {   
        printf("%c",s[i]);
        if(s[i]==' ')
        {
            printf("\n");
        }
    }
    return 0;
}
