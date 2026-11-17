#include<stdio.h>

int main(){
    /*You can use these conditions to perform different actions for different decisions.

    C has the following conditional statements:

    Use if to specify a block of code to be executed, if a specified condition is true
    Use else to specify a block of code to be executed, if the same condition is false
    Use else if to specify a new condition to test, if the first condition is false
    Use switch to specify many alternative blocks of code to be executed*/
    
    int age = 10; 

    if(age >= 18){
        printf("You're Eligible\n");
    }
    if(20>19){
        printf("20 is Greater!");
    }
    return 0;
}
