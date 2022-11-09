/*
In this problem, you will implement three variadic functions named sum,min and max to calculate sums, minima, maxima of a variable number of arguments. The first argument passed to the variadic function is the count of the number of arguments, which is followed by the arguments themselves.
Input Format:
The first line of the input consists of an integer num_of_case.
Each test case tests the logic of your code by sending a test implementation of 3, 5 and 10 elements respectively.
You can test your code against sample/custom input.
The error log prints the parameters which are passed to the test implementation. It also prints the sum, minimum element and maximum element corresponding to your code.
*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...) {
    int sum = 0;
    va_list arg;
    va_start(arg,count);
    for(int i=0; i<count; i++) {
        sum += va_arg(arg,int);
    }
    va_end(arg);
    return sum;
}

int min(int count,...) {
    va_list arg;
    va_start(arg,count);
    int min = MIN_ELEMENT;
    for(int i=0; i<count; i++) {
       if (min > va_arg(arg,int)) {
           min = va_arg(arg,int);
       }
    }
    va_end(arg);
    return min;

}

int max(int count,...) {   
    int max = MAX_ELEMENT;
    va_list arg;
    va_start(arg,count);
    for(int i=0; i<count; i++) {
       if (max < va_arg(arg,int)) {
           max = va_arg(arg,int);
       }
    }
    va_end(arg);
    return max;


}

