/*
You are given an array of integers,marks , denoting the marks scored by students in a class.

The alternating elements marks0,marks2 and marks4 so on denote the marks of boys.
Similarly, makrs1,marks3 ,marks 5  and so on denote the marks of girls.
The first line contains number_of_students, denoting the number of students in the class, hence the number of elements in marks.
Each of the number_of_students  subsequent lines contains marks.
The next line contains gender.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int sum=0;
  if(gender== 'g')//girl
  {
      for(int i=0;i<number_of_students;i++)
      {
          if(i%2!=0)
          {
              sum+=marks[i];
          }
      }
  }else if(gender =='b')//boy
  {
      for(int i=0;i<number_of_students;i++)
      {
          if(i%2==0)
          {
              sum+=marks[i];
          }
      }
  }
  return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
