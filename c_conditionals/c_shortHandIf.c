#include<stdio.h>

//There is also a short hand if....else, known as the ternary operators
//because it uses three operands 

int main(){
    int a, b, maxValue; 

    a = 12 ; 
    b = 17; 

    maxValue = (a > b) ? a : b; 
    printf("The MaxValue is: %d\n", maxValue);
    return 0;
}