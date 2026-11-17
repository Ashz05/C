#include<stdio.h>

int main(){
    /*As With Comparison Operators, you can also test for true or false 
    values with logical operators */

    int isLoggedIn = 1; 
    int isAdmin = 0; 

    printf("Regular User: %d\n", isLoggedIn && !isAdmin);
    printf("Has Access: %d\n", isLoggedIn || isAdmin);
    printf("Not LoggedIn %d\n", !isLoggedIn);

    return 0; 
    //In C(or any programming language) 1 means true and 0 means false. Logical operators 
    //become easier to understand once you start using them inside if statements.
    
}