#include <stdio.h>
/*Operators

Operators are used to perform operations on variables and values 

in the example below, we use the  + operators to add two values:
*/

int main(){
    int myNum = 100 + 50;

    //although the + operator is often used to add together two values
    // it can also be used to add together and a value, or a variable and another variable. 

    int sum1 = 100 + 50;
    int sum2 = sum1 + 250; 
    int sum3 = sum2 + sum2; 

    
    printf("%d\n",myNum);
    printf("%d\n",sum1);
    printf("%d\n",sum2);
    printf("%d\n",sum3);
    return 0;
}