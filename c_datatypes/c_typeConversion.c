#include <stdio.h>

int main(){
    //Type Conversion 
    /*
    Sometimes, you have to convert the value of one data type to another type 
    this is known as type conversion
    
    for example, if you try to divide two integers, 5 by 2, you would expect result to b 2.5 
    but since we are working with integers(and not floating point values), the following example 
    will just output 2 
    */

    int x = 5; 
    int y = 10; 

    //explicit type conversion 
    float z = 4;
    printf("%f\n",z); //Implicit type conversion 
    int result = y/x; 
    printf("%f\n", (float) result); // Explicit type conversion 
    return 0;

}