#include <stdio.h>
//Variables are containers for storing data values,like numbers and characters.
//you can think of a variable as named box where you keep a value be used later. 


//int - stores whole number(integers), such as 123 or -123 
//float - stores numbers with decimals, such as 19.99 or -19.99 
//char - stores a single character, such as 'a' or 'B' character surrounded by single quotes. 


int main(){
    //To create a variable, you must specify the type and give the variable a name. 
    //you can also assign a value at the same time.

    /*In many other programming languages (like Python, Java, and C++), 
    you would normally use a print function to display the value of a variable.
    However, this is not possible in C:
    To print variables in C, you must use something called format specifiers
    */
    // int intValue = 0;
    // printf(intValue);   // throws an error, we can't print the variable directly like other programming language 

    char character = 'A';
    int intNumber = 1 ; 
    float floatNumber = 1.32;
   
    //Format specifier
    // float floatValue = 3.4;
    // printf(floatValue);

    for(int i = 1 ; i <= 10;  i++){
        printf("%i", i);
    }

    printf("\nCharacter : %c, Integer : %i, Floating : %f",intNumber,character,floatNumber);
    return 0;  

    //You can also print values directly without storing them in variables, 
    //as long as you use the correct format specifier:

}


