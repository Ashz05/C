#include <stdio.h>

/* Comparison Operators are used to compare two values (or variables).
This is important in programming, because it helps us to find answers and make decisions.

the return value of a comparison is either 1 or 0, which means true(1) or false(0). These values
are known as Boolean values.
*/

int main(){
    int a = 4; 
    int b = 10; 

    int result; 

    result = a > b;
    printf("The Result is: %d\n", result);

    result = a < b; 
    printf("The Result is: %d\n", result);

    result = a != b; 
    printf("The Result is: %d\n", result);

    result = a >= b; 
    printf("The Result is: %d\n", result);

    result = a <= b; 
    printf("The Result is: %d\n", result);

    return 0; 
}