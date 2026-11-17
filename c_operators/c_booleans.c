#include<stdio.h>
#include<stdbool.h>

//Booleans:
/*
Very often, in programming, you wull beed a data type that can only have one of two values, like

yes / no 
on / off 
true / false 

for this, c has a bool datatype, which is known as booleans 

Boolean Variables;
in C, the bool type is not a built-in datatype, like int or char 

it was introduced in c99, you must include header file to use it.
*/


int main(){
    bool isProgrammingFun = true; 
    bool isFishTasty = false;
    bool isHamburgerTast = true; 
    
    printf("The Result is : %d\n", isProgrammingFun);
    printf("The Result is : %d\n", isFishTasty);
    printf("The Tastiest Food is : %d\n", isFishTasty == isHamburgerTast);
    
    //comparison operators also produce bool values 

    printf("The result of a and b is : %d\n", 1 > 2);
    return 0; 

}